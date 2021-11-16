#!/usr/bin/env python
# coding: utf-8

"""A C tokenizer subclass of CuBertTokenizer.

This tokenizer uses an extension of the tokenizer from the clang GitHub
repository. The extension enables the clang tokenizer to return end positions
as well as end-of-sequence tokens and comments.
"""
import clang.cindex
import cubert_tokenizer
import unified_tokenizer

class CTokenizer(cubert_tokenizer.CuBertTokenizer):
    """Tokenizer that extracts Python's lexical elements preserving strings."""
    _TOKEN_TYPE_MAP = {
      clang.cindex.TokenKind.PUNCTUATION:
          unified_tokenizer.TokenKind.PUNCTUATION,
      clang.cindex.TokenKind.KEYWORD:
          unified_tokenizer.TokenKind.KEYWORD,
      clang.cindex.TokenKind.IDENTIFIER:
          unified_tokenizer.TokenKind.IDENTIFIER,
      clang.cindex.TokenKind.LITERAL:
          unified_tokenizer.TokenKind.STRING,
      clang.cindex.TokenKind.COMMENT:
          unified_tokenizer.TokenKind.COMMENT,
    }

    def tokenize_and_abstract(
         self,
         source_code):
       """As per the superclass."""
       agnostic_tokens: List[unified_tokenizer.AbstractToken] = []
       idx = clang.cindex.Index.create()
       trans_unit = idx.parse('tmp.cpp', args=['-std=c'], 
                      unsaved_files=[('tmp.cpp', source_code)], options=0)
       c_tokens = trans_unit.get_tokens(extent=trans_unit.cursor.extent)
       EOSline = 0
       EOScolumn = 0
       for token in c_tokens:
           token_kind = token.kind
           if token_kind not in CTokenizer._TOKEN_TYPE_MAP:
             raise ValueError(
                 'Received C token type %s, but it was unexpected, '
                 'while tokenizing \n%s\n' % (token_kind, source_code))
           agnostic_tokens.append(
               unified_tokenizer.AbstractToken(
                   token.spelling, CTokenizer._TOKEN_TYPE_MAP[token_kind],
                   unified_tokenizer.TokenMetadata(
                       start=unified_tokenizer.Position(
                           line=token.extent.start.line-1, column=token.extent.start.column-1),
                       end=unified_tokenizer.Position(
                           line=token.extent.end.line-1, column=token.extent.end.column-1))))
           EOSline = token.extent.end.line-1
           EOScolumn = token.extent.end.column

       """Append EOS token."""
       agnostic_tokens.append(
             unified_tokenizer.AbstractToken(
                 unified_tokenizer.quote_special(
                     unified_tokenizer.TokenKind.EOS.name),
                 unified_tokenizer.TokenKind.EOS,
                 unified_tokenizer.TokenMetadata(
                     start=unified_tokenizer.Position(
                         line=EOSline, column=EOScolumn),
                     end=unified_tokenizer.Position(
                         line=EOSline, column=EOScolumn+1))))
       return agnostic_tokens

    def untokenize_abstract(self, whole_tokens):
       tokens: List[str] = []
       for token in whole_tokens[:-1]: 
           tokens.append(token)
       return ' '.join(tokens)

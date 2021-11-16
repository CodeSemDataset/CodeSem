#ifndef __DYCFOO_H__
#define __DYCFOO_H__

/* only include things that *must* be used in .foo.c (the code trunks) */

extern void __dyc_initrandomseed();
extern unsigned char __dyc_randompre_byte(unsigned int exp);
extern int __dyc_randompre_ptr(unsigned int exp);
extern int __dyc_readpre_byte();
extern int __dyc_readpre_ptr();
extern void __dyc_printpre_byte(const unsigned char i);
extern void __dyc_printpre_ptr(const void const * p);

#endif /* __DYCFOO_H__ */


enum __anonenum_CURLcode_29 {
    CURLE_OK = 0,
    CURLE_UNSUPPORTED_PROTOCOL = 1,
    CURLE_FAILED_INIT = 2,
    CURLE_URL_MALFORMAT = 3,
    CURLE_NOT_BUILT_IN = 4,
    CURLE_COULDNT_RESOLVE_PROXY = 5,
    CURLE_COULDNT_RESOLVE_HOST = 6,
    CURLE_COULDNT_CONNECT = 7,
    CURLE_WEIRD_SERVER_REPLY = 8,
    CURLE_REMOTE_ACCESS_DENIED = 9,
    CURLE_FTP_ACCEPT_FAILED = 10,
    CURLE_FTP_WEIRD_PASS_REPLY = 11,
    CURLE_FTP_ACCEPT_TIMEOUT = 12,
    CURLE_FTP_WEIRD_PASV_REPLY = 13,
    CURLE_FTP_WEIRD_227_FORMAT = 14,
    CURLE_FTP_CANT_GET_HOST = 15,
    CURLE_HTTP2 = 16,
    CURLE_FTP_COULDNT_SET_TYPE = 17,
    CURLE_PARTIAL_FILE = 18,
    CURLE_FTP_COULDNT_RETR_FILE = 19,
    CURLE_OBSOLETE20 = 20,
    CURLE_QUOTE_ERROR = 21,
    CURLE_HTTP_RETURNED_ERROR = 22,
    CURLE_WRITE_ERROR = 23,
    CURLE_OBSOLETE24 = 24,
    CURLE_UPLOAD_FAILED = 25,
    CURLE_READ_ERROR = 26,
    CURLE_OUT_OF_MEMORY = 27,
    CURLE_OPERATION_TIMEDOUT = 28,
    CURLE_OBSOLETE29 = 29,
    CURLE_FTP_PORT_FAILED = 30,
    CURLE_FTP_COULDNT_USE_REST = 31,
    CURLE_OBSOLETE32 = 32,
    CURLE_RANGE_ERROR = 33,
    CURLE_HTTP_POST_ERROR = 34,
    CURLE_SSL_CONNECT_ERROR = 35,
    CURLE_BAD_DOWNLOAD_RESUME = 36,
    CURLE_FILE_COULDNT_READ_FILE = 37,
    CURLE_LDAP_CANNOT_BIND = 38,
    CURLE_LDAP_SEARCH_FAILED = 39,
    CURLE_OBSOLETE40 = 40,
    CURLE_FUNCTION_NOT_FOUND = 41,
    CURLE_ABORTED_BY_CALLBACK = 42,
    CURLE_BAD_FUNCTION_ARGUMENT = 43,
    CURLE_OBSOLETE44 = 44,
    CURLE_INTERFACE_FAILED = 45,
    CURLE_OBSOLETE46 = 46,
    CURLE_TOO_MANY_REDIRECTS = 47,
    CURLE_UNKNOWN_OPTION = 48,
    CURLE_SETOPT_OPTION_SYNTAX = 49,
    CURLE_OBSOLETE50 = 50,
    CURLE_OBSOLETE51 = 51,
    CURLE_GOT_NOTHING = 52,
    CURLE_SSL_ENGINE_NOTFOUND = 53,
    CURLE_SSL_ENGINE_SETFAILED = 54,
    CURLE_SEND_ERROR = 55,
    CURLE_RECV_ERROR = 56,
    CURLE_OBSOLETE57 = 57,
    CURLE_SSL_CERTPROBLEM = 58,
    CURLE_SSL_CIPHER = 59,
    CURLE_PEER_FAILED_VERIFICATION = 60,
    CURLE_BAD_CONTENT_ENCODING = 61,
    CURLE_LDAP_INVALID_URL = 62,
    CURLE_FILESIZE_EXCEEDED = 63,
    CURLE_USE_SSL_FAILED = 64,
    CURLE_SEND_FAIL_REWIND = 65,
    CURLE_SSL_ENGINE_INITFAILED = 66,
    CURLE_LOGIN_DENIED = 67,
    CURLE_TFTP_NOTFOUND = 68,
    CURLE_TFTP_PERM = 69,
    CURLE_REMOTE_DISK_FULL = 70,
    CURLE_TFTP_ILLEGAL = 71,
    CURLE_TFTP_UNKNOWNID = 72,
    CURLE_REMOTE_FILE_EXISTS = 73,
    CURLE_TFTP_NOSUCHUSER = 74,
    CURLE_CONV_FAILED = 75,
    CURLE_CONV_REQD = 76,
    CURLE_SSL_CACERT_BADFILE = 77,
    CURLE_REMOTE_FILE_NOT_FOUND = 78,
    CURLE_SSH = 79,
    CURLE_SSL_SHUTDOWN_FAILED = 80,
    CURLE_AGAIN = 81,
    CURLE_SSL_CRL_BADFILE = 82,
    CURLE_SSL_ISSUER_ERROR = 83,
    CURLE_FTP_PRET_FAILED = 84,
    CURLE_RTSP_CSEQ_ERROR = 85,
    CURLE_RTSP_SESSION_ERROR = 86,
    CURLE_FTP_BAD_FILE_LIST = 87,
    CURLE_CHUNK_FAILED = 88,
    CURLE_NO_CONNECTION_AVAILABLE = 89,
    CURLE_SSL_PINNEDPUBKEYNOTMATCH = 90,
    CURLE_SSL_INVALIDCERTSTATUS = 91,
    CURLE_HTTP2_STREAM = 92,
    CURLE_RECURSIVE_API_CALL = 93,
    CURLE_AUTH_ERROR = 94,
    CURLE_HTTP3 = 95,
    CURLE_QUIC_CONNECT_ERROR = 96,
    CURLE_PROXY = 97,
    CURLE_SSL_CLIENTCERT = 98,
    CURL_LAST = 99
} ;
typedef enum __anonenum_CURLcode_29 CURLcode;
enum __anonenum_CURLversion_53 {
    CURLVERSION_FIRST = 0,
    CURLVERSION_SECOND = 1,
    CURLVERSION_THIRD = 2,
    CURLVERSION_FOURTH = 3,
    CURLVERSION_FIFTH = 4,
    CURLVERSION_SIXTH = 5,
    CURLVERSION_SEVENTH = 6,
    CURLVERSION_EIGHTH = 7,
    CURLVERSION_NINTH = 8,
    CURLVERSION_TENTH = 9,
    CURLVERSION_LAST = 10
} ;
typedef enum __anonenum_CURLversion_53 CURLversion;
struct curl_version_info_data {
   CURLversion age ;
   char *version ;
   unsigned int version_num ;
   char *host ;
   int features ;
   char *ssl_version ;
   long ssl_version_num ;
   char *libz_version ;
   char **protocols ;
   char *ares ;
   int ares_num ;
   char *libidn ;
   int iconv_ver_num ;
   char *libssh_version ;
   unsigned int brotli_ver_num ;
   char *brotli_version ;
   unsigned int nghttp2_ver_num ;
   char *nghttp2_version ;
   char *quic_version ;
   char *cainfo ;
   char *capath ;
   unsigned int zstd_ver_num ;
   char *zstd_version ;
   char *hyper_version ;
   char *gsasl_version ;
};
typedef struct curl_version_info_data curl_version_info_data;
struct proto_name_pattern {
   char *proto_name ;
   long proto_pattern ;
};
extern curl_version_info_data __dyc_random_typdef_curl_version_info_data(unsigned int __dyc_exp ) ;
extern curl_version_info_data __dyc_read_typdef_curl_version_info_data(void) ;
extern void __dyc_print_typdef_curl_version_info_data(curl_version_info_data __dyc_thistype ) ;
extern struct proto_name_pattern *__dyc_random_ptr__comp_78proto_name_pattern(unsigned int __dyc_exp ) ;
extern struct proto_name_pattern *__dyc_read_ptr__comp_78proto_name_pattern(void) ;
extern void __dyc_print_ptr__comp_78proto_name_pattern(struct proto_name_pattern  const  *__dyc_thistype ) ;
extern struct curl_version_info_data __dyc_random_comp_58curl_version_info_data(unsigned int __dyc_exp ) ;
extern struct curl_version_info_data __dyc_read_comp_58curl_version_info_data(void) ;
extern void __dyc_print_comp_58curl_version_info_data(struct curl_version_info_data __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern CURLcode __dyc_random_typdef_CURLcode(unsigned int __dyc_exp ) ;
extern CURLcode __dyc_read_typdef_CURLcode(void) ;
extern void __dyc_print_typdef_CURLcode(CURLcode __dyc_thistype ) ;
extern struct proto_name_pattern __dyc_random_comp_78proto_name_pattern(unsigned int __dyc_exp ) ;
extern struct proto_name_pattern __dyc_read_comp_78proto_name_pattern(void) ;
extern void __dyc_print_comp_78proto_name_pattern(struct proto_name_pattern __dyc_thistype ) ;
extern CURLversion __dyc_random_typdef_CURLversion(unsigned int __dyc_exp ) ;
extern CURLversion __dyc_read_typdef_CURLversion(void) ;
extern void __dyc_print_typdef_CURLversion(CURLversion __dyc_thistype ) ;
extern curl_version_info_data *__dyc_random_ptr__typdef_curl_version_info_data(unsigned int __dyc_exp ) ;
extern curl_version_info_data *__dyc_read_ptr__typdef_curl_version_info_data(void) ;
extern void __dyc_print_ptr__typdef_curl_version_info_data(curl_version_info_data const   *__dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;

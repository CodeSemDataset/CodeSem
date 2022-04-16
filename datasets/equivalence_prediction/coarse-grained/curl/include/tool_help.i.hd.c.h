#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 453 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/system.h"
typedef long curl_off_t;
#line 102 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/curl.h"
struct Curl_easy;
#line 102 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/curl.h"
typedef struct Curl_easy CURL;
#line 135 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/curl.h"
typedef int curl_socket_t;
#line 142
enum __anonenum_curl_sslbackend_22 {
    CURLSSLBACKEND_NONE = 0,
    CURLSSLBACKEND_OPENSSL = 1,
    CURLSSLBACKEND_GNUTLS = 2,
    CURLSSLBACKEND_NSS = 3,
    CURLSSLBACKEND_OBSOLETE4 = 4,
    CURLSSLBACKEND_GSKIT = 5,
    CURLSSLBACKEND_POLARSSL = 6,
    CURLSSLBACKEND_WOLFSSL = 7,
    CURLSSLBACKEND_SCHANNEL = 8,
    CURLSSLBACKEND_SECURETRANSPORT = 9,
    CURLSSLBACKEND_AXTLS = 10,
    CURLSSLBACKEND_MBEDTLS = 11,
    CURLSSLBACKEND_MESALINK = 12,
    CURLSSLBACKEND_BEARSSL = 13,
    CURLSSLBACKEND_RUSTLS = 14
} ;
#line 142 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/curl.h"
typedef enum __anonenum_curl_sslbackend_22 curl_sslbackend;
#line 168
struct curl_slist;
#line 480
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
#line 480 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/curl.h"
typedef enum __anonenum_CURLcode_29 CURLcode;
#line 2605 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/curl.h"
struct curl_slist {
   char *data ;
   struct curl_slist *next ;
};
#line 2685 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/curl.h"
struct curl_certinfo {
   int num_of_certs ;
   struct curl_slist **certinfo ;
};
#line 2695 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/curl.h"
struct curl_tlssessioninfo {
   curl_sslbackend backend ;
   void *internals ;
};
#line 2710
enum __anonenum_CURLINFO_47 {
    CURLINFO_NONE = 0,
    CURLINFO_EFFECTIVE_URL = 1048577,
    CURLINFO_RESPONSE_CODE = 2097154,
    CURLINFO_TOTAL_TIME = 3145731,
    CURLINFO_NAMELOOKUP_TIME = 3145732,
    CURLINFO_CONNECT_TIME = 3145733,
    CURLINFO_PRETRANSFER_TIME = 3145734,
    CURLINFO_SIZE_UPLOAD = 3145735,
    CURLINFO_SIZE_UPLOAD_T = 6291463,
    CURLINFO_SIZE_DOWNLOAD = 3145736,
    CURLINFO_SIZE_DOWNLOAD_T = 6291464,
    CURLINFO_SPEED_DOWNLOAD = 3145737,
    CURLINFO_SPEED_DOWNLOAD_T = 6291465,
    CURLINFO_SPEED_UPLOAD = 3145738,
    CURLINFO_SPEED_UPLOAD_T = 6291466,
    CURLINFO_HEADER_SIZE = 2097163,
    CURLINFO_REQUEST_SIZE = 2097164,
    CURLINFO_SSL_VERIFYRESULT = 2097165,
    CURLINFO_FILETIME = 2097166,
    CURLINFO_FILETIME_T = 6291470,
    CURLINFO_CONTENT_LENGTH_DOWNLOAD = 3145743,
    CURLINFO_CONTENT_LENGTH_DOWNLOAD_T = 6291471,
    CURLINFO_CONTENT_LENGTH_UPLOAD = 3145744,
    CURLINFO_CONTENT_LENGTH_UPLOAD_T = 6291472,
    CURLINFO_STARTTRANSFER_TIME = 3145745,
    CURLINFO_CONTENT_TYPE = 1048594,
    CURLINFO_REDIRECT_TIME = 3145747,
    CURLINFO_REDIRECT_COUNT = 2097172,
    CURLINFO_PRIVATE = 1048597,
    CURLINFO_HTTP_CONNECTCODE = 2097174,
    CURLINFO_HTTPAUTH_AVAIL = 2097175,
    CURLINFO_PROXYAUTH_AVAIL = 2097176,
    CURLINFO_OS_ERRNO = 2097177,
    CURLINFO_NUM_CONNECTS = 2097178,
    CURLINFO_SSL_ENGINES = 4194331,
    CURLINFO_COOKIELIST = 4194332,
    CURLINFO_LASTSOCKET = 2097181,
    CURLINFO_FTP_ENTRY_PATH = 1048606,
    CURLINFO_REDIRECT_URL = 1048607,
    CURLINFO_PRIMARY_IP = 1048608,
    CURLINFO_APPCONNECT_TIME = 3145761,
    CURLINFO_CERTINFO = 4194338,
    CURLINFO_CONDITION_UNMET = 2097187,
    CURLINFO_RTSP_SESSION_ID = 1048612,
    CURLINFO_RTSP_CLIENT_CSEQ = 2097189,
    CURLINFO_RTSP_SERVER_CSEQ = 2097190,
    CURLINFO_RTSP_CSEQ_RECV = 2097191,
    CURLINFO_PRIMARY_PORT = 2097192,
    CURLINFO_LOCAL_IP = 1048617,
    CURLINFO_LOCAL_PORT = 2097194,
    CURLINFO_TLS_SESSION = 4194347,
    CURLINFO_ACTIVESOCKET = 5242924,
    CURLINFO_TLS_SSL_PTR = 4194349,
    CURLINFO_HTTP_VERSION = 2097198,
    CURLINFO_PROXY_SSL_VERIFYRESULT = 2097199,
    CURLINFO_PROTOCOL = 2097200,
    CURLINFO_SCHEME = 1048625,
    CURLINFO_TOTAL_TIME_T = 6291506,
    CURLINFO_NAMELOOKUP_TIME_T = 6291507,
    CURLINFO_CONNECT_TIME_T = 6291508,
    CURLINFO_PRETRANSFER_TIME_T = 6291509,
    CURLINFO_STARTTRANSFER_TIME_T = 6291510,
    CURLINFO_REDIRECT_TIME_T = 6291511,
    CURLINFO_APPCONNECT_TIME_T = 6291512,
    CURLINFO_RETRY_AFTER = 6291513,
    CURLINFO_EFFECTIVE_METHOD = 1048634,
    CURLINFO_PROXY_ERROR = 2097211,
    CURLINFO_REFERER = 1048636,
    CURLINFO_LASTONE = 60
} ;
#line 2710 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/curl.h"
typedef enum __anonenum_CURLINFO_47 CURLINFO;
#line 2873
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
#line 2873 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/curl.h"
typedef enum __anonenum_CURLversion_53 CURLversion;
#line 2894 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/curl.h"
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
#line 2949 "/home/chenqian/Downloads/curl-curl-7_79_0/include/curl/curl.h"
typedef struct curl_version_info_data curl_version_info_data;
#line 73 "/home/chenqian/Downloads/curl-curl-7_79_0/src/tool_help.c"
typedef unsigned int curlhelp_t;
#line 75 "/home/chenqian/Downloads/curl-curl-7_79_0/src/tool_help.c"
struct category_descriptors {
   char *opt ;
   char *desc ;
   curlhelp_t category ;
};
#line 119 "/home/chenqian/Downloads/curl-curl-7_79_0/src/tool_help.c"
struct helptxt {
   char *opt ;
   char *desc ;
   curlhelp_t categories ;
};
#line 856 "/home/chenqian/Downloads/curl-curl-7_79_0/src/tool_help.c"
struct feat {
   char *name ;
   int bitmask ;
};
extern curl_off_t __dyc_random_typdef_curl_off_t(unsigned int __dyc_exp ) ;
extern curl_off_t __dyc_read_typdef_curl_off_t(void) ;
extern void __dyc_print_typdef_curl_off_t(curl_off_t __dyc_thistype ) ;
extern curl_version_info_data __dyc_random_typdef_curl_version_info_data(unsigned int __dyc_exp ) ;
extern curl_version_info_data __dyc_read_typdef_curl_version_info_data(void) ;
extern void __dyc_print_typdef_curl_version_info_data(curl_version_info_data __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_CURL(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_CURL(void) ;
extern void __dyc_print_ptr__typdef_CURL(void const   * const  __dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern curlhelp_t __dyc_random_typdef_curlhelp_t(unsigned int __dyc_exp ) ;
extern curlhelp_t __dyc_read_typdef_curlhelp_t(void) ;
extern void __dyc_print_typdef_curlhelp_t(curlhelp_t __dyc_thistype ) ;
extern struct curl_version_info_data __dyc_random_comp_58curl_version_info_data(unsigned int __dyc_exp ) ;
extern struct curl_version_info_data __dyc_read_comp_58curl_version_info_data(void) ;
extern void __dyc_print_comp_58curl_version_info_data(struct curl_version_info_data __dyc_thistype ) ;
extern struct curl_tlssessioninfo *__dyc_random_ptr__comp_57curl_tlssessioninfo(unsigned int __dyc_exp ) ;
extern struct curl_tlssessioninfo *__dyc_read_ptr__comp_57curl_tlssessioninfo(void) ;
extern void __dyc_print_ptr__comp_57curl_tlssessioninfo(struct curl_tlssessioninfo  const  *__dyc_thistype ) ;
extern long *__dyc_random_ptr__long(unsigned int __dyc_exp ) ;
extern long *__dyc_read_ptr__long(void) ;
extern void __dyc_print_ptr__long(long const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct curl_tlssessioninfo **__dyc_random_ptr__ptr__comp_57curl_tlssessioninfo(unsigned int __dyc_exp ) ;
extern struct curl_tlssessioninfo **__dyc_read_ptr__ptr__comp_57curl_tlssessioninfo(void) ;
extern void __dyc_print_ptr__ptr__comp_57curl_tlssessioninfo(struct curl_tlssessioninfo * const  *__dyc_thistype ) ;
extern struct curl_certinfo **__dyc_random_ptr__ptr__comp_56curl_certinfo(unsigned int __dyc_exp ) ;
extern struct curl_certinfo **__dyc_read_ptr__ptr__comp_56curl_certinfo(void) ;
extern void __dyc_print_ptr__ptr__comp_56curl_certinfo(struct curl_certinfo * const  *__dyc_thistype ) ;
extern double *__dyc_random_ptr__double(unsigned int __dyc_exp ) ;
extern double *__dyc_read_ptr__double(void) ;
extern void __dyc_print_ptr__double(double const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct curl_slist __dyc_random_comp_45curl_slist(unsigned int __dyc_exp ) ;
extern struct curl_slist __dyc_read_comp_45curl_slist(void) ;
extern void __dyc_print_comp_45curl_slist(struct curl_slist __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern CURLcode __dyc_random_typdef_CURLcode(unsigned int __dyc_exp ) ;
extern CURLcode __dyc_read_typdef_CURLcode(void) ;
extern void __dyc_print_typdef_CURLcode(CURLcode __dyc_thistype ) ;
extern CURLversion __dyc_random_typdef_CURLversion(unsigned int __dyc_exp ) ;
extern CURLversion __dyc_read_typdef_CURLversion(void) ;
extern void __dyc_print_typdef_CURLversion(CURLversion __dyc_thistype ) ;
extern CURLINFO __dyc_random_typdef_CURLINFO(unsigned int __dyc_exp ) ;
extern CURLINFO __dyc_read_typdef_CURLINFO(void) ;
extern void __dyc_print_typdef_CURLINFO(CURLINFO __dyc_thistype ) ;
extern curl_socket_t __dyc_random_typdef_curl_socket_t(unsigned int __dyc_exp ) ;
extern curl_socket_t __dyc_read_typdef_curl_socket_t(void) ;
extern void __dyc_print_typdef_curl_socket_t(curl_socket_t __dyc_thistype ) ;
extern struct curl_tlssessioninfo __dyc_random_comp_57curl_tlssessioninfo(unsigned int __dyc_exp ) ;
extern struct curl_tlssessioninfo __dyc_read_comp_57curl_tlssessioninfo(void) ;
extern void __dyc_print_comp_57curl_tlssessioninfo(struct curl_tlssessioninfo __dyc_thistype ) ;
extern curl_off_t *__dyc_random_ptr__typdef_curl_off_t(unsigned int __dyc_exp ) ;
extern curl_off_t *__dyc_read_ptr__typdef_curl_off_t(void) ;
extern void __dyc_print_ptr__typdef_curl_off_t(curl_off_t const   *__dyc_thistype ) ;
extern struct curl_certinfo __dyc_random_comp_56curl_certinfo(unsigned int __dyc_exp ) ;
extern struct curl_certinfo __dyc_read_comp_56curl_certinfo(void) ;
extern void __dyc_print_comp_56curl_certinfo(struct curl_certinfo __dyc_thistype ) ;
extern curl_version_info_data *__dyc_random_ptr__typdef_curl_version_info_data(unsigned int __dyc_exp ) ;
extern curl_version_info_data *__dyc_read_ptr__typdef_curl_version_info_data(void) ;
extern void __dyc_print_ptr__typdef_curl_version_info_data(curl_version_info_data const   *__dyc_thistype ) ;
extern struct curl_slist **__dyc_random_ptr__ptr__comp_45curl_slist(unsigned int __dyc_exp ) ;
extern struct curl_slist **__dyc_read_ptr__ptr__comp_45curl_slist(void) ;
extern void __dyc_print_ptr__ptr__comp_45curl_slist(struct curl_slist * const  *__dyc_thistype ) ;
extern curl_socket_t *__dyc_random_ptr__typdef_curl_socket_t(unsigned int __dyc_exp ) ;
extern curl_socket_t *__dyc_read_ptr__typdef_curl_socket_t(void) ;
extern void __dyc_print_ptr__typdef_curl_socket_t(curl_socket_t const   *__dyc_thistype ) ;
extern struct feat __dyc_random_comp_80feat(unsigned int __dyc_exp ) ;
extern struct feat __dyc_read_comp_80feat(void) ;
extern void __dyc_print_comp_80feat(struct feat __dyc_thistype ) ;
extern struct category_descriptors __dyc_random_comp_78category_descriptors(unsigned int __dyc_exp ) ;
extern struct category_descriptors __dyc_read_comp_78category_descriptors(void) ;
extern void __dyc_print_comp_78category_descriptors(struct category_descriptors __dyc_thistype ) ;
extern struct curl_certinfo *__dyc_random_ptr__comp_56curl_certinfo(unsigned int __dyc_exp ) ;
extern struct curl_certinfo *__dyc_read_ptr__comp_56curl_certinfo(void) ;
extern void __dyc_print_ptr__comp_56curl_certinfo(struct curl_certinfo  const  *__dyc_thistype ) ;
extern struct helptxt __dyc_random_comp_79helptxt(unsigned int __dyc_exp ) ;
extern struct helptxt __dyc_read_comp_79helptxt(void) ;
extern void __dyc_print_comp_79helptxt(struct helptxt __dyc_thistype ) ;
extern struct curl_slist *__dyc_random_ptr__comp_45curl_slist(unsigned int __dyc_exp ) ;
extern struct curl_slist *__dyc_read_ptr__comp_45curl_slist(void) ;
extern void __dyc_print_ptr__comp_45curl_slist(struct curl_slist  const  *__dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
extern curl_sslbackend __dyc_random_typdef_curl_sslbackend(unsigned int __dyc_exp ) ;
extern curl_sslbackend __dyc_read_typdef_curl_sslbackend(void) ;
extern void __dyc_print_typdef_curl_sslbackend(curl_sslbackend __dyc_thistype ) ;

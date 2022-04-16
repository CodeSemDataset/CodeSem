#line 49 "/usr/include/stdint.h"
typedef unsigned char uint8_t;
#line 56 "/usr/include/stdint.h"
typedef unsigned long uint64_t;
#line 66 "geohash.h"
struct __anonstruct_GeoHashBits_2 {
   uint64_t bits ;
   uint8_t step ;
};
#line 66 "geohash.h"
typedef struct __anonstruct_GeoHashBits_2 GeoHashBits;
#line 71 "geohash.h"
struct __anonstruct_GeoHashRange_3 {
   double min ;
   double max ;
};
#line 71 "geohash.h"
typedef struct __anonstruct_GeoHashRange_3 GeoHashRange;
#line 76 "geohash.h"
struct __anonstruct_GeoHashArea_4 {
   GeoHashBits hash ;
   GeoHashRange longitude ;
   GeoHashRange latitude ;
};
#line 76 "geohash.h"
typedef struct __anonstruct_GeoHashArea_4 GeoHashArea;
#line 82 "geohash.h"
struct __anonstruct_GeoHashNeighbors_5 {
   GeoHashBits north ;
   GeoHashBits east ;
   GeoHashBits west ;
   GeoHashBits south ;
   GeoHashBits north_east ;
   GeoHashBits south_east ;
   GeoHashBits north_west ;
   GeoHashBits south_west ;
};
#line 82 "geohash.h"
typedef struct __anonstruct_GeoHashNeighbors_5 GeoHashNeighbors;
#line 41 "geohash_helper.h"
typedef uint64_t GeoHashFix52Bits;
#line 44 "geohash_helper.h"
struct __anonstruct_GeoHashRadius_6 {
   GeoHashBits hash ;
   GeoHashArea area ;
   GeoHashNeighbors neighbors ;
};
#line 44 "geohash_helper.h"
typedef struct __anonstruct_GeoHashRadius_6 GeoHashRadius;
extern GeoHashArea *__dyc_random_ptr__typdef_GeoHashArea(unsigned int __dyc_exp ) ;
extern GeoHashArea *__dyc_read_ptr__typdef_GeoHashArea(void) ;
extern void __dyc_print_ptr__typdef_GeoHashArea(GeoHashArea const   *__dyc_thistype ) ;
extern struct __anonstruct_GeoHashNeighbors_5 __dyc_random_comp_4__anonstruct_GeoHashNeighbors_5(unsigned int __dyc_exp ) ;
extern struct __anonstruct_GeoHashNeighbors_5 __dyc_read_comp_4__anonstruct_GeoHashNeighbors_5(void) ;
extern void __dyc_print_comp_4__anonstruct_GeoHashNeighbors_5(struct __anonstruct_GeoHashNeighbors_5 __dyc_thistype ) ;
extern GeoHashNeighbors __dyc_random_typdef_GeoHashNeighbors(unsigned int __dyc_exp ) ;
extern GeoHashNeighbors __dyc_read_typdef_GeoHashNeighbors(void) ;
extern void __dyc_print_typdef_GeoHashNeighbors(GeoHashNeighbors __dyc_thistype ) ;
extern GeoHashRadius __dyc_random_typdef_GeoHashRadius(unsigned int __dyc_exp ) ;
extern GeoHashRadius __dyc_read_typdef_GeoHashRadius(void) ;
extern void __dyc_print_typdef_GeoHashRadius(GeoHashRadius __dyc_thistype ) ;
extern struct __anonstruct_GeoHashBits_2 __dyc_random_comp_1__anonstruct_GeoHashBits_2(unsigned int __dyc_exp ) ;
extern struct __anonstruct_GeoHashBits_2 __dyc_read_comp_1__anonstruct_GeoHashBits_2(void) ;
extern void __dyc_print_comp_1__anonstruct_GeoHashBits_2(struct __anonstruct_GeoHashBits_2 __dyc_thistype ) ;
extern GeoHashNeighbors *__dyc_random_ptr__typdef_GeoHashNeighbors(unsigned int __dyc_exp ) ;
extern GeoHashNeighbors *__dyc_read_ptr__typdef_GeoHashNeighbors(void) ;
extern void __dyc_print_ptr__typdef_GeoHashNeighbors(GeoHashNeighbors const   *__dyc_thistype ) ;
extern double *__dyc_random_ptr__double(unsigned int __dyc_exp ) ;
extern double *__dyc_read_ptr__double(void) ;
extern void __dyc_print_ptr__double(double const   *__dyc_thistype ) ;
extern GeoHashRange __dyc_random_typdef_GeoHashRange(unsigned int __dyc_exp ) ;
extern GeoHashRange __dyc_read_typdef_GeoHashRange(void) ;
extern void __dyc_print_typdef_GeoHashRange(GeoHashRange __dyc_thistype ) ;
extern GeoHashFix52Bits __dyc_random_typdef_GeoHashFix52Bits(unsigned int __dyc_exp ) ;
extern GeoHashFix52Bits __dyc_read_typdef_GeoHashFix52Bits(void) ;
extern void __dyc_print_typdef_GeoHashFix52Bits(GeoHashFix52Bits __dyc_thistype ) ;
extern GeoHashArea __dyc_random_typdef_GeoHashArea(unsigned int __dyc_exp ) ;
extern GeoHashArea __dyc_read_typdef_GeoHashArea(void) ;
extern void __dyc_print_typdef_GeoHashArea(GeoHashArea __dyc_thistype ) ;
extern GeoHashRange *__dyc_random_ptr__typdef_GeoHashRange(unsigned int __dyc_exp ) ;
extern GeoHashRange *__dyc_read_ptr__typdef_GeoHashRange(void) ;
extern void __dyc_print_ptr__typdef_GeoHashRange(GeoHashRange const   *__dyc_thistype ) ;
extern struct __anonstruct_GeoHashArea_4 __dyc_random_comp_3__anonstruct_GeoHashArea_4(unsigned int __dyc_exp ) ;
extern struct __anonstruct_GeoHashArea_4 __dyc_read_comp_3__anonstruct_GeoHashArea_4(void) ;
extern void __dyc_print_comp_3__anonstruct_GeoHashArea_4(struct __anonstruct_GeoHashArea_4 __dyc_thistype ) ;
extern uint8_t __dyc_random_typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t __dyc_read_typdef_uint8_t(void) ;
extern void __dyc_print_typdef_uint8_t(uint8_t __dyc_thistype ) ;
extern GeoHashBits *__dyc_random_ptr__typdef_GeoHashBits(unsigned int __dyc_exp ) ;
extern GeoHashBits *__dyc_read_ptr__typdef_GeoHashBits(void) ;
extern void __dyc_print_ptr__typdef_GeoHashBits(GeoHashBits const   *__dyc_thistype ) ;
extern struct __anonstruct_GeoHashRadius_6 __dyc_random_comp_5__anonstruct_GeoHashRadius_6(unsigned int __dyc_exp ) ;
extern struct __anonstruct_GeoHashRadius_6 __dyc_read_comp_5__anonstruct_GeoHashRadius_6(void) ;
extern void __dyc_print_comp_5__anonstruct_GeoHashRadius_6(struct __anonstruct_GeoHashRadius_6 __dyc_thistype ) ;
extern struct __anonstruct_GeoHashRange_3 __dyc_random_comp_2__anonstruct_GeoHashRange_3(unsigned int __dyc_exp ) ;
extern struct __anonstruct_GeoHashRange_3 __dyc_read_comp_2__anonstruct_GeoHashRange_3(void) ;
extern void __dyc_print_comp_2__anonstruct_GeoHashRange_3(struct __anonstruct_GeoHashRange_3 __dyc_thistype ) ;
extern uint64_t __dyc_random_typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t __dyc_read_typdef_uint64_t(void) ;
extern void __dyc_print_typdef_uint64_t(uint64_t __dyc_thistype ) ;
extern GeoHashBits __dyc_random_typdef_GeoHashBits(unsigned int __dyc_exp ) ;
extern GeoHashBits __dyc_read_typdef_GeoHashBits(void) ;
extern void __dyc_print_typdef_GeoHashBits(GeoHashBits __dyc_thistype ) ;

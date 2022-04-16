#include "../../include/dycfoo.h"
#include "../../include/revision.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char const   sane_ctype[256] ;
  struct repository *the_repository ;
  int minimum_abbrev ;
  int default_abbrev ;
  int fetch_if_missing ;
  char const   *git_log_output_encoding ;
  char const   *arg ;
  char const   *optarg___0 ;
  int argcount ;
  unsigned int hexsz ;
  int tmp ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___9 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___27 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___45 ;
  int tmp___50 ;
  int tmp___51 ;
  int tmp___52 ;
  int tmp___53 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___63 ;
  int tmp___68 ;
  int tmp___69 ;
  int tmp___70 ;
  int tmp___71 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___81 ;
  int tmp___86 ;
  int tmp___87 ;
  int tmp___88 ;
  int tmp___89 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___99 ;
  int tmp___104 ;
  int tmp___105 ;
  int tmp___106 ;
  int tmp___107 ;
  size_t __s1_len___5 ;
  size_t __s2_len___5 ;
  int tmp___117 ;
  int tmp___122 ;
  int tmp___123 ;
  int tmp___124 ;
  int tmp___125 ;
  size_t __s1_len___6 ;
  size_t __s2_len___6 ;
  int tmp___135 ;
  int tmp___140 ;
  int tmp___141 ;
  int tmp___142 ;
  int tmp___143 ;
  size_t __s1_len___7 ;
  size_t __s2_len___7 ;
  int tmp___153 ;
  int tmp___158 ;
  int tmp___159 ;
  int tmp___160 ;
  int tmp___161 ;
  int tmp___162 ;
  size_t __s1_len___8 ;
  size_t __s2_len___8 ;
  int tmp___172 ;
  int tmp___177 ;
  int tmp___178 ;
  int tmp___179 ;
  int tmp___180 ;
  size_t __s1_len___9 ;
  size_t __s2_len___9 ;
  int tmp___190 ;
  int tmp___195 ;
  int tmp___196 ;
  int tmp___197 ;
  int tmp___198 ;
  int tmp___199 ;
  int tmp___200 ;
  int tmp___201 ;
  int tmp___202 ;
  int tmp___203 ;
  int __attribute__((__leaf__))  tmp___204 ;
  int __attribute__((__leaf__))  tmp___205 ;
  int tmp___206 ;
  int tmp___207 ;
  int __attribute__((__leaf__))  tmp___208 ;
  int __attribute__((__leaf__))  tmp___209 ;
  int __attribute__((__leaf__))  tmp___210 ;
  int __attribute__((__leaf__))  tmp___211 ;
  int tmp___212 ;
  int tmp___213 ;
  int __attribute__((__leaf__))  tmp___214 ;
  int __attribute__((__leaf__))  tmp___215 ;
  char const __attribute__((__format_arg__(1)))  *tmp___216 ;
  size_t __s1_len___10 ;
  size_t __s2_len___10 ;
  int tmp___226 ;
  int tmp___231 ;
  int tmp___232 ;
  int tmp___233 ;
  int tmp___234 ;
  size_t __s1_len___11 ;
  size_t __s2_len___11 ;
  int tmp___244 ;
  int tmp___249 ;
  int tmp___250 ;
  int tmp___251 ;
  int tmp___252 ;
  int val ;
  int tmp___253 ;
  char *tmp___254 ;
  int tmp___255 ;
  unsigned long tmp___256 ;
  char *tmp___257 ;
  size_t __s1_len___12 ;
  size_t __s2_len___12 ;
  int tmp___267 ;
  int tmp___272 ;
  int tmp___273 ;
  int tmp___274 ;
  int tmp___275 ;
  int opts ;
  int tmp___276 ;
  int tmp___277 ;
  size_t __s1_len___13 ;
  size_t __s2_len___13 ;
  int tmp___287 ;
  int tmp___292 ;
  int tmp___293 ;
  int tmp___294 ;
  int tmp___295 ;
  size_t __s1_len___14 ;
  size_t __s2_len___14 ;
  int tmp___305 ;
  int tmp___310 ;
  int tmp___311 ;
  int tmp___312 ;
  int tmp___313 ;
  size_t __s1_len___15 ;
  size_t __s2_len___15 ;
  int tmp___323 ;
  int tmp___328 ;
  int tmp___329 ;
  int tmp___330 ;
  int tmp___331 ;
  size_t __s1_len___16 ;
  size_t __s2_len___16 ;
  int tmp___341 ;
  int tmp___346 ;
  int tmp___347 ;
  int tmp___348 ;
  int tmp___349 ;
  size_t __s1_len___17 ;
  size_t __s2_len___17 ;
  int tmp___359 ;
  int tmp___364 ;
  int tmp___365 ;
  int tmp___366 ;
  int tmp___367 ;
  size_t __s1_len___18 ;
  size_t __s2_len___18 ;
  int tmp___377 ;
  int tmp___382 ;
  int tmp___383 ;
  int tmp___384 ;
  int tmp___385 ;
  size_t __s1_len___19 ;
  size_t __s2_len___19 ;
  int tmp___395 ;
  int tmp___400 ;
  int tmp___401 ;
  int tmp___402 ;
  int tmp___403 ;
  size_t __s1_len___20 ;
  size_t __s2_len___20 ;
  int tmp___413 ;
  int tmp___418 ;
  int tmp___419 ;
  int tmp___420 ;
  int tmp___421 ;
  size_t __s1_len___21 ;
  size_t __s2_len___21 ;
  int tmp___431 ;
  int tmp___436 ;
  int tmp___437 ;
  int tmp___438 ;
  int tmp___439 ;
  size_t __s1_len___22 ;
  size_t __s2_len___22 ;
  int tmp___449 ;
  int tmp___454 ;
  int tmp___455 ;
  int tmp___456 ;
  int tmp___457 ;
  size_t __s1_len___23 ;
  size_t __s2_len___23 ;
  int tmp___467 ;
  int tmp___472 ;
  int tmp___473 ;
  int tmp___474 ;
  int tmp___475 ;
  size_t __s1_len___24 ;
  size_t __s2_len___24 ;
  int tmp___485 ;
  int tmp___490 ;
  int tmp___491 ;
  int tmp___492 ;
  int tmp___493 ;
  size_t __s1_len___25 ;
  size_t __s2_len___25 ;
  int tmp___503 ;
  int tmp___508 ;
  int tmp___509 ;
  int tmp___510 ;
  int tmp___511 ;
  size_t __s1_len___26 ;
  size_t __s2_len___26 ;
  int tmp___521 ;
  int tmp___526 ;
  int tmp___527 ;
  int tmp___528 ;
  int tmp___529 ;
  size_t __s1_len___27 ;
  size_t __s2_len___27 ;
  int tmp___539 ;
  int tmp___544 ;
  int tmp___545 ;
  int tmp___546 ;
  int tmp___547 ;
  size_t __s1_len___28 ;
  size_t __s2_len___28 ;
  int tmp___557 ;
  int tmp___562 ;
  int tmp___563 ;
  int tmp___564 ;
  int tmp___565 ;
  size_t __s1_len___29 ;
  size_t __s2_len___29 ;
  int tmp___575 ;
  int tmp___580 ;
  int tmp___581 ;
  int tmp___582 ;
  int tmp___583 ;
  size_t __s1_len___30 ;
  size_t __s2_len___30 ;
  int tmp___593 ;
  int tmp___598 ;
  int tmp___599 ;
  int tmp___600 ;
  int tmp___601 ;
  size_t __s1_len___31 ;
  size_t __s2_len___31 ;
  int tmp___611 ;
  int tmp___616 ;
  int tmp___617 ;
  int tmp___618 ;
  int tmp___619 ;
  size_t __s1_len___32 ;
  size_t __s2_len___32 ;
  int tmp___629 ;
  int tmp___634 ;
  int tmp___635 ;
  int tmp___636 ;
  int tmp___637 ;
  size_t __s1_len___33 ;
  size_t __s2_len___33 ;
  int tmp___647 ;
  int tmp___652 ;
  int tmp___653 ;
  int tmp___654 ;
  int tmp___655 ;
  size_t __s1_len___34 ;
  size_t __s2_len___34 ;
  int tmp___665 ;
  int tmp___670 ;
  int tmp___671 ;
  int tmp___672 ;
  int tmp___673 ;
  int tmp___674 ;
  size_t __s1_len___35 ;
  size_t __s2_len___35 ;
  int tmp___684 ;
  int tmp___689 ;
  int tmp___690 ;
  int tmp___691 ;
  int tmp___692 ;
  size_t __s1_len___36 ;
  size_t __s2_len___36 ;
  int tmp___702 ;
  int tmp___707 ;
  int tmp___708 ;
  int tmp___709 ;
  int tmp___710 ;
  size_t __s1_len___37 ;
  size_t __s2_len___37 ;
  int tmp___720 ;
  int tmp___725 ;
  int tmp___726 ;
  int tmp___727 ;
  int tmp___728 ;
  size_t __s1_len___38 ;
  size_t __s2_len___38 ;
  int tmp___738 ;
  int tmp___743 ;
  int tmp___744 ;
  int tmp___745 ;
  int tmp___746 ;
  size_t __s1_len___39 ;
  size_t __s2_len___39 ;
  int tmp___756 ;
  int tmp___761 ;
  int tmp___762 ;
  int tmp___763 ;
  int tmp___764 ;
  size_t __s1_len___40 ;
  size_t __s2_len___40 ;
  int tmp___774 ;
  int tmp___779 ;
  int tmp___780 ;
  int tmp___781 ;
  int tmp___782 ;
  size_t __s1_len___41 ;
  size_t __s2_len___41 ;
  int tmp___792 ;
  int tmp___797 ;
  int tmp___798 ;
  int tmp___799 ;
  int tmp___800 ;
  size_t __s1_len___42 ;
  size_t __s2_len___42 ;
  int tmp___810 ;
  int tmp___815 ;
  int tmp___816 ;
  int tmp___817 ;
  int tmp___818 ;
  size_t __s1_len___43 ;
  size_t __s2_len___43 ;
  int tmp___828 ;
  int tmp___833 ;
  int tmp___834 ;
  int tmp___835 ;
  int tmp___836 ;
  size_t __s1_len___44 ;
  size_t __s2_len___44 ;
  int tmp___846 ;
  int tmp___851 ;
  int tmp___852 ;
  int tmp___853 ;
  int tmp___854 ;
  size_t __s1_len___45 ;
  size_t __s2_len___45 ;
  int tmp___864 ;
  int tmp___869 ;
  int tmp___870 ;
  int tmp___871 ;
  int tmp___872 ;
  size_t __s1_len___46 ;
  size_t __s2_len___46 ;
  int tmp___882 ;
  int tmp___887 ;
  int tmp___888 ;
  int tmp___889 ;
  int tmp___890 ;
  int tmp___891 ;
  int tmp___892 ;
  int tmp___893 ;
  size_t __s1_len___47 ;
  size_t __s2_len___47 ;
  int tmp___903 ;
  int tmp___908 ;
  int tmp___909 ;
  int tmp___910 ;
  int tmp___911 ;
  size_t __s1_len___48 ;
  size_t __s2_len___48 ;
  int tmp___921 ;
  int tmp___926 ;
  int tmp___927 ;
  int tmp___928 ;
  int tmp___929 ;
  size_t __s1_len___49 ;
  size_t __s2_len___49 ;
  int tmp___939 ;
  int tmp___944 ;
  int tmp___945 ;
  int tmp___946 ;
  int tmp___947 ;
  size_t __s1_len___50 ;
  size_t __s2_len___50 ;
  int tmp___957 ;
  int tmp___962 ;
  int tmp___963 ;
  int tmp___964 ;
  int tmp___965 ;
  size_t __s1_len___51 ;
  size_t __s2_len___51 ;
  int tmp___975 ;
  int tmp___980 ;
  int tmp___981 ;
  int tmp___982 ;
  int tmp___983 ;
  int tmp___984 ;
  size_t __s1_len___52 ;
  size_t __s2_len___52 ;
  int tmp___994 ;
  int tmp___999 ;
  int tmp___1000 ;
  int tmp___1001 ;
  int tmp___1002 ;
  size_t __s1_len___53 ;
  size_t __s2_len___53 ;
  int tmp___1012 ;
  int tmp___1017 ;
  int tmp___1018 ;
  int tmp___1019 ;
  int tmp___1020 ;
  int tmp___1021 ;
  int tmp___1022 ;
  size_t __s1_len___54 ;
  size_t __s2_len___54 ;
  int tmp___1032 ;
  int tmp___1037 ;
  int tmp___1038 ;
  int tmp___1039 ;
  int tmp___1040 ;
  size_t __s1_len___55 ;
  size_t __s2_len___55 ;
  int tmp___1050 ;
  int tmp___1055 ;
  int tmp___1056 ;
  int tmp___1057 ;
  int tmp___1058 ;
  size_t __s1_len___56 ;
  size_t __s2_len___56 ;
  int tmp___1068 ;
  int tmp___1073 ;
  int tmp___1074 ;
  int tmp___1075 ;
  int tmp___1076 ;
  size_t __s1_len___57 ;
  size_t __s2_len___57 ;
  int tmp___1086 ;
  int tmp___1091 ;
  int tmp___1092 ;
  int tmp___1093 ;
  int tmp___1094 ;
  int tmp___1095 ;
  size_t __s1_len___58 ;
  size_t __s2_len___58 ;
  int tmp___1105 ;
  int tmp___1110 ;
  int tmp___1111 ;
  int tmp___1112 ;
  int tmp___1113 ;
  int tmp___1114 ;
  size_t __s1_len___59 ;
  size_t __s2_len___59 ;
  int tmp___1124 ;
  int tmp___1129 ;
  int tmp___1130 ;
  int tmp___1131 ;
  int tmp___1132 ;
  size_t __s1_len___60 ;
  size_t __s2_len___60 ;
  int tmp___1142 ;
  int tmp___1147 ;
  int tmp___1148 ;
  int tmp___1149 ;
  int tmp___1150 ;
  size_t __s1_len___61 ;
  size_t __s2_len___61 ;
  int tmp___1160 ;
  int tmp___1165 ;
  int tmp___1166 ;
  int tmp___1167 ;
  int tmp___1168 ;
  size_t __s1_len___62 ;
  size_t __s2_len___62 ;
  int tmp___1178 ;
  int tmp___1183 ;
  int tmp___1184 ;
  int tmp___1185 ;
  int tmp___1186 ;
  size_t __s1_len___63 ;
  size_t __s2_len___63 ;
  int tmp___1196 ;
  int tmp___1201 ;
  int tmp___1202 ;
  int tmp___1203 ;
  int tmp___1204 ;
  size_t __s1_len___64 ;
  size_t __s2_len___64 ;
  int tmp___1214 ;
  int tmp___1219 ;
  int tmp___1220 ;
  int tmp___1221 ;
  int tmp___1222 ;
  size_t __s1_len___65 ;
  size_t __s2_len___65 ;
  int tmp___1232 ;
  int tmp___1237 ;
  int tmp___1238 ;
  int tmp___1239 ;
  int tmp___1240 ;
  size_t __s1_len___66 ;
  size_t __s2_len___66 ;
  int tmp___1250 ;
  int tmp___1255 ;
  int tmp___1256 ;
  int tmp___1257 ;
  int tmp___1258 ;
  size_t __s1_len___67 ;
  size_t __s2_len___67 ;
  int tmp___1268 ;
  int tmp___1273 ;
  int tmp___1274 ;
  int tmp___1275 ;
  int tmp___1276 ;
  size_t __s1_len___68 ;
  size_t __s2_len___68 ;
  int tmp___1286 ;
  int tmp___1291 ;
  int tmp___1292 ;
  int tmp___1293 ;
  int tmp___1294 ;
  size_t __s1_len___69 ;
  size_t __s2_len___69 ;
  int tmp___1304 ;
  int tmp___1309 ;
  int tmp___1310 ;
  int tmp___1311 ;
  int tmp___1312 ;
  size_t __s1_len___70 ;
  size_t __s2_len___70 ;
  int tmp___1322 ;
  int tmp___1327 ;
  int tmp___1328 ;
  int tmp___1329 ;
  int tmp___1330 ;
  size_t __s1_len___71 ;
  size_t __s2_len___71 ;
  int tmp___1340 ;
  int tmp___1345 ;
  int tmp___1346 ;
  int tmp___1347 ;
  int tmp___1348 ;
  size_t __s1_len___72 ;
  size_t __s2_len___72 ;
  int tmp___1358 ;
  int tmp___1363 ;
  int tmp___1364 ;
  int tmp___1365 ;
  int tmp___1366 ;
  int tmp___1367 ;
  size_t __s1_len___73 ;
  size_t __s2_len___73 ;
  int tmp___1377 ;
  int tmp___1382 ;
  int tmp___1383 ;
  int tmp___1384 ;
  int tmp___1385 ;
  int tmp___1386 ;
  size_t __s1_len___74 ;
  size_t __s2_len___74 ;
  int tmp___1396 ;
  int tmp___1401 ;
  int tmp___1402 ;
  int tmp___1403 ;
  int tmp___1404 ;
  size_t __s1_len___75 ;
  size_t __s2_len___75 ;
  int tmp___1414 ;
  int tmp___1419 ;
  int tmp___1420 ;
  int tmp___1421 ;
  int tmp___1422 ;
  size_t __s1_len___76 ;
  size_t __s2_len___76 ;
  int tmp___1432 ;
  int tmp___1437 ;
  int tmp___1438 ;
  int tmp___1439 ;
  int tmp___1440 ;
  size_t __s1_len___77 ;
  size_t __s2_len___77 ;
  int tmp___1450 ;
  int tmp___1455 ;
  int tmp___1456 ;
  int tmp___1457 ;
  int tmp___1458 ;
  size_t __s1_len___78 ;
  size_t __s2_len___78 ;
  int tmp___1468 ;
  int tmp___1473 ;
  int tmp___1474 ;
  int tmp___1475 ;
  int tmp___1476 ;
  size_t __s1_len___79 ;
  size_t __s2_len___79 ;
  int tmp___1486 ;
  int tmp___1491 ;
  int tmp___1492 ;
  int tmp___1493 ;
  int tmp___1494 ;
  size_t __s1_len___80 ;
  size_t __s2_len___80 ;
  int tmp___1504 ;
  int tmp___1509 ;
  int tmp___1510 ;
  int tmp___1511 ;
  int tmp___1512 ;
  int tmp___1513 ;
  size_t __s1_len___81 ;
  size_t __s2_len___81 ;
  int tmp___1523 ;
  int tmp___1528 ;
  int tmp___1529 ;
  int tmp___1530 ;
  int tmp___1531 ;
  size_t __s1_len___82 ;
  size_t __s2_len___82 ;
  int tmp___1541 ;
  int tmp___1546 ;
  int tmp___1547 ;
  int tmp___1548 ;
  int tmp___1549 ;
  size_t __s1_len___83 ;
  size_t __s2_len___83 ;
  int tmp___1559 ;
  int tmp___1564 ;
  int tmp___1565 ;
  int tmp___1566 ;
  int tmp___1567 ;
  size_t __s1_len___84 ;
  size_t __s2_len___84 ;
  int tmp___1577 ;
  int tmp___1582 ;
  int tmp___1583 ;
  int tmp___1584 ;
  int tmp___1585 ;
  size_t __s1_len___85 ;
  size_t __s2_len___85 ;
  int tmp___1595 ;
  int tmp___1600 ;
  int tmp___1601 ;
  int tmp___1602 ;
  int tmp___1603 ;
  size_t __s1_len___86 ;
  size_t __s2_len___86 ;
  int tmp___1613 ;
  int tmp___1618 ;
  int tmp___1619 ;
  int tmp___1620 ;
  int tmp___1621 ;
  size_t __s1_len___87 ;
  size_t __s2_len___87 ;
  int tmp___1631 ;
  int tmp___1636 ;
  int tmp___1637 ;
  int tmp___1638 ;
  int tmp___1639 ;
  size_t __s1_len___88 ;
  size_t __s2_len___88 ;
  int tmp___1649 ;
  int tmp___1654 ;
  int tmp___1655 ;
  int tmp___1656 ;
  int tmp___1657 ;
  size_t __s1_len___89 ;
  size_t __s2_len___89 ;
  int tmp___1667 ;
  int tmp___1672 ;
  int tmp___1673 ;
  int tmp___1674 ;
  int tmp___1675 ;
  size_t __s1_len___90 ;
  size_t __s2_len___90 ;
  int tmp___1685 ;
  int tmp___1690 ;
  int tmp___1691 ;
  int tmp___1692 ;
  int tmp___1693 ;
  size_t __s1_len___91 ;
  size_t __s2_len___91 ;
  int tmp___1703 ;
  int tmp___1708 ;
  int tmp___1709 ;
  int tmp___1710 ;
  int tmp___1711 ;
  size_t __s1_len___92 ;
  size_t __s2_len___92 ;
  int tmp___1721 ;
  int tmp___1726 ;
  int tmp___1727 ;
  int tmp___1728 ;
  int tmp___1729 ;
  int tmp___1730 ;
  size_t __s1_len___93 ;
  size_t __s2_len___93 ;
  int tmp___1740 ;
  int tmp___1745 ;
  int tmp___1746 ;
  int tmp___1747 ;
  int tmp___1748 ;
  struct rev_info *revs ;
  int argc ;
  char const   **argv ;
  int *unkc ;
  char const   **unkv ;
  struct setup_revision_opt  const  *opt ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  int __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;
  int __dyc_funcallvar_26 ;
  int __dyc_funcallvar_27 ;
  int __dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;
  int __dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  int __dyc_funcallvar_34 ;
  int __dyc_funcallvar_35 ;
  int __dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;
  int __dyc_funcallvar_41 ;
  int __dyc_funcallvar_42 ;
  int __dyc_funcallvar_43 ;
  int __dyc_funcallvar_44 ;
  int __dyc_funcallvar_45 ;
  int __dyc_funcallvar_46 ;
  int __dyc_funcallvar_47 ;
  int __dyc_funcallvar_48 ;
  int __dyc_funcallvar_49 ;
  int __dyc_funcallvar_50 ;
  int __dyc_funcallvar_51 ;
  int __dyc_funcallvar_52 ;
  int __dyc_funcallvar_53 ;
  int __dyc_funcallvar_54 ;
  int __dyc_funcallvar_55 ;
  int __dyc_funcallvar_56 ;
  int __dyc_funcallvar_57 ;
  int __dyc_funcallvar_58 ;
  int __dyc_funcallvar_59 ;
  int __dyc_funcallvar_60 ;
  int __dyc_funcallvar_61 ;
  int __dyc_funcallvar_62 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_63 ;
  int __dyc_funcallvar_64 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_65 ;
  int __dyc_funcallvar_66 ;
  int __dyc_funcallvar_67 ;
  int __dyc_funcallvar_68 ;
  int __dyc_funcallvar_69 ;
  int __dyc_funcallvar_70 ;
  int __dyc_funcallvar_71 ;
  int __dyc_funcallvar_72 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_73 ;
  int __dyc_funcallvar_74 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_75 ;
  int __dyc_funcallvar_76 ;
  timestamp_t __dyc_funcallvar_77 ;
  int __dyc_funcallvar_78 ;
  timestamp_t __dyc_funcallvar_79 ;
  int __dyc_funcallvar_80 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_81 ;
  int __dyc_funcallvar_82 ;
  timestamp_t __dyc_funcallvar_83 ;
  int __dyc_funcallvar_84 ;
  timestamp_t __dyc_funcallvar_85 ;
  int __dyc_funcallvar_86 ;
  int __dyc_funcallvar_87 ;
  int __dyc_funcallvar_88 ;
  int __dyc_funcallvar_89 ;
  int __dyc_funcallvar_90 ;
  int __dyc_funcallvar_91 ;
  int __dyc_funcallvar_92 ;
  int __dyc_funcallvar_93 ;
  int __dyc_funcallvar_94 ;
  int __dyc_funcallvar_95 ;
  int __dyc_funcallvar_96 ;
  int __dyc_funcallvar_97 ;
  int __dyc_funcallvar_98 ;
  int __dyc_funcallvar_99 ;
  int __dyc_funcallvar_100 ;
  int __dyc_funcallvar_101 ;
  int __dyc_funcallvar_102 ;
  int __dyc_funcallvar_103 ;
  int __dyc_funcallvar_104 ;
  int __dyc_funcallvar_105 ;
  int __dyc_funcallvar_106 ;
  int __dyc_funcallvar_107 ;
  int __dyc_funcallvar_108 ;
  int __dyc_funcallvar_109 ;
  int __dyc_funcallvar_110 ;
  int __dyc_funcallvar_111 ;
  int __dyc_funcallvar_112 ;
  int __dyc_funcallvar_113 ;
  int __dyc_funcallvar_114 ;
  int __dyc_funcallvar_115 ;
  int __dyc_funcallvar_116 ;
  int __dyc_funcallvar_117 ;
  int __dyc_funcallvar_118 ;
  int __dyc_funcallvar_119 ;
  int __dyc_funcallvar_120 ;
  int __dyc_funcallvar_121 ;
  int __dyc_funcallvar_122 ;
  int __dyc_funcallvar_123 ;
  int __dyc_funcallvar_124 ;
  int __dyc_funcallvar_125 ;
  int __dyc_funcallvar_126 ;
  int __dyc_funcallvar_127 ;
  int __dyc_funcallvar_128 ;
  int __dyc_funcallvar_129 ;
  int __dyc_funcallvar_130 ;
  int __dyc_funcallvar_131 ;
  int __dyc_funcallvar_132 ;
  int __dyc_funcallvar_133 ;
  int __dyc_funcallvar_134 ;
  int __dyc_funcallvar_135 ;
  int __dyc_funcallvar_136 ;
  int __dyc_funcallvar_137 ;
  int __dyc_funcallvar_138 ;
  int __dyc_funcallvar_139 ;
  int __dyc_funcallvar_140 ;
  int __dyc_funcallvar_141 ;
  int __dyc_funcallvar_142 ;
  int __dyc_funcallvar_143 ;
  int __dyc_funcallvar_144 ;
  int __dyc_funcallvar_145 ;
  int __dyc_funcallvar_146 ;
  int __dyc_funcallvar_147 ;
  int __dyc_funcallvar_148 ;
  int __dyc_funcallvar_149 ;
  int __dyc_funcallvar_150 ;
  int __dyc_funcallvar_151 ;
  int __dyc_funcallvar_152 ;
  int __dyc_funcallvar_153 ;
  int __dyc_funcallvar_154 ;
  int __dyc_funcallvar_155 ;
  int __dyc_funcallvar_156 ;
  int __dyc_funcallvar_157 ;
  int __dyc_funcallvar_158 ;
  int __dyc_funcallvar_159 ;
  int __dyc_funcallvar_160 ;
  int __dyc_funcallvar_161 ;
  int __dyc_funcallvar_162 ;
  int __dyc_funcallvar_163 ;
  int __dyc_funcallvar_164 ;
  int __dyc_funcallvar_165 ;
  int __dyc_funcallvar_166 ;
  int __dyc_funcallvar_167 ;
  int __dyc_funcallvar_168 ;
  int __dyc_funcallvar_169 ;
  int __dyc_funcallvar_170 ;
  int __dyc_funcallvar_171 ;
  int __dyc_funcallvar_172 ;
  int __dyc_funcallvar_173 ;
  int __dyc_funcallvar_174 ;
  int __dyc_funcallvar_175 ;
  int __dyc_funcallvar_176 ;
  int __dyc_funcallvar_177 ;
  int __dyc_funcallvar_178 ;
  int __dyc_funcallvar_179 ;
  int __dyc_funcallvar_180 ;
  int __dyc_funcallvar_181 ;
  int __dyc_funcallvar_182 ;
  int __dyc_funcallvar_183 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_184 ;
  int __dyc_funcallvar_185 ;
  int __dyc_funcallvar_186 ;
  int __dyc_funcallvar_187 ;
  int __dyc_funcallvar_188 ;
  int __dyc_funcallvar_189 ;
  int __dyc_funcallvar_190 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_191 ;
  int __dyc_funcallvar_192 ;
  int __dyc_funcallvar_193 ;
  int __dyc_funcallvar_194 ;
  int __dyc_funcallvar_195 ;
  int __dyc_funcallvar_196 ;
  int __dyc_funcallvar_197 ;
  int __dyc_funcallvar_198 ;
  int __dyc_funcallvar_199 ;
  int __dyc_funcallvar_200 ;
  int __dyc_funcallvar_201 ;
  int __dyc_funcallvar_202 ;
  int __dyc_funcallvar_203 ;
  int __dyc_funcallvar_204 ;
  int __dyc_funcallvar_205 ;
  int __dyc_funcallvar_206 ;
  int __dyc_funcallvar_207 ;
  int __dyc_funcallvar_208 ;
  int __dyc_funcallvar_209 ;
  int __dyc_funcallvar_210 ;
  int __dyc_funcallvar_211 ;
  int __dyc_funcallvar_212 ;
  int __dyc_funcallvar_213 ;
  int __dyc_funcallvar_214 ;
  int __dyc_funcallvar_215 ;
  int __dyc_funcallvar_216 ;
  int __dyc_funcallvar_217 ;
  int __dyc_funcallvar_218 ;
  int __dyc_funcallvar_219 ;
  int __dyc_funcallvar_220 ;
  int __dyc_funcallvar_221 ;
  int __dyc_funcallvar_222 ;
  int __dyc_funcallvar_223 ;
  int __dyc_funcallvar_224 ;
  int __dyc_funcallvar_225 ;
  int __dyc_funcallvar_226 ;
  int __dyc_funcallvar_227 ;
  int __dyc_funcallvar_228 ;
  int __dyc_funcallvar_229 ;
  int __dyc_funcallvar_230 ;
  int __dyc_funcallvar_231 ;
  int __dyc_funcallvar_232 ;
  int __dyc_funcallvar_233 ;
  int __dyc_funcallvar_234 ;
  int __dyc_funcallvar_235 ;
  int __dyc_funcallvar_236 ;
  int __dyc_funcallvar_237 ;
  int __dyc_funcallvar_238 ;
  int __dyc_funcallvar_239 ;
  int __dyc_funcallvar_240 ;
  int __dyc_funcallvar_241 ;
  int __dyc_funcallvar_242 ;
  int __dyc_funcallvar_243 ;
  int __dyc_funcallvar_244 ;
  int __dyc_funcallvar_245 ;
  int __dyc_funcallvar_246 ;
  int __dyc_funcallvar_247 ;
  int __dyc_funcallvar_248 ;
  int __dyc_funcallvar_249 ;
  int __dyc_funcallvar_250 ;
  int __dyc_funcallvar_251 ;
  int __dyc_funcallvar_252 ;
  int __dyc_funcallvar_253 ;
  int __dyc_funcallvar_254 ;
  int __dyc_funcallvar_255 ;
  int __dyc_funcallvar_256 ;
  int __dyc_funcallvar_257 ;
  int __dyc_funcallvar_258 ;
  int __dyc_funcallvar_259 ;
  int __dyc_funcallvar_260 ;
  int __dyc_funcallvar_261 ;
  int __dyc_funcallvar_262 ;
  char const __attribute__((__format_arg__(1)))  *__dyc_funcallvar_263 ;
  int __dyc_funcallvar_264 ;
  int __dyc_funcallvar_265 ;
  int __dyc_funcallvar_266 ;
  int __dyc_funcallvar_267 ;
  int __dyc_funcallvar_268 ;
  int __dyc_funcallvar_269 ;
  int __dyc_funcallvar_270 ;
  int __dyc_funcallvar_271 ;
  int __dyc_funcallvar_272 ;
  int __dyc_funcallvar_273 ;
  int __dyc_funcallvar_274 ;
  int __dyc_funcallvar_275 ;
  int __dyc_funcallvar_276 ;
  int __dyc_funcallvar_277 ;
  int __dyc_funcallvar_278 ;
  int __dyc_funcallvar_279 ;
  int __dyc_funcallvar_280 ;
  int __dyc_funcallvar_281 ;
  int __dyc_funcallvar_282 ;
  int __dyc_funcallvar_283 ;
  int __dyc_funcallvar_284 ;
  int __dyc_funcallvar_285 ;
  int __dyc_funcallvar_286 ;
  int __dyc_funcallvar_287 ;
  int __dyc_funcallvar_288 ;
  int __dyc_funcallvar_289 ;
  int __dyc_funcallvar_290 ;
  int __dyc_funcallvar_291 ;
  int __dyc_funcallvar_292 ;
  int __dyc_funcallvar_293 ;
  int __dyc_funcallvar_294 ;
  int __dyc_funcallvar_295 ;
  int __dyc_funcallvar_296 ;
  int __dyc_funcallvar_297 ;
  int __dyc_funcallvar_298 ;
  int __dyc_funcallvar_299 ;
  int __dyc_funcallvar_300 ;
  int __dyc_funcallvar_301 ;
  int __dyc_funcallvar_302 ;
  int __dyc_funcallvar_303 ;
  int __dyc_funcallvar_304 ;
  int __dyc_funcallvar_305 ;
  int __dyc_funcallvar_306 ;
  int __dyc_funcallvar_307 ;
  int __dyc_funcallvar_308 ;
  int __dyc_funcallvar_309 ;
  int __dyc_funcallvar_310 ;
  int __dyc_funcallvar_311 ;
  int __dyc_funcallvar_312 ;
  int __dyc_funcallvar_313 ;
  int __dyc_funcallvar_314 ;
  int __dyc_funcallvar_315 ;
  int __dyc_funcallvar_316 ;
  int __dyc_funcallvar_317 ;
  int __dyc_funcallvar_318 ;
  int __dyc_funcallvar_319 ;
  int __dyc_funcallvar_320 ;
  int __dyc_funcallvar_321 ;
  int __dyc_funcallvar_322 ;
  int __dyc_funcallvar_323 ;
  int __dyc_funcallvar_324 ;
  int __dyc_funcallvar_325 ;
  int __dyc_funcallvar_326 ;
  int __dyc_funcallvar_327 ;
  int __dyc_funcallvar_328 ;
  int __dyc_funcallvar_329 ;
  int __dyc_funcallvar_330 ;
  int __dyc_funcallvar_331 ;
  int __dyc_funcallvar_332 ;
  int __dyc_funcallvar_333 ;
  int __dyc_funcallvar_334 ;
  int __dyc_funcallvar_335 ;
  int __dyc_funcallvar_336 ;
  int __dyc_funcallvar_337 ;
  int __dyc_funcallvar_338 ;
  int __dyc_funcallvar_339 ;
  int __dyc_funcallvar_340 ;
  char *__dyc_funcallvar_341 ;
  int __dyc_funcallvar_342 ;
  int __dyc_funcallvar_343 ;
  int __dyc_funcallvar_344 ;
  int __dyc_funcallvar_345 ;
  int __dyc_funcallvar_346 ;
  int __dyc_funcallvar_347 ;
  int __dyc_funcallvar_348 ;
  int __dyc_funcallvar_349 ;
  int __dyc_funcallvar_350 ;
  int __dyc_funcallvar_351 ;
  int __dyc_funcallvar_352 ;
  int __dyc_funcallvar_353 ;
  int __dyc_funcallvar_354 ;
  int __dyc_funcallvar_355 ;
  int __dyc_funcallvar_356 ;
  int __dyc_funcallvar_357 ;
  int __dyc_funcallvar_358 ;
  int __dyc_funcallvar_359 ;
  int __dyc_funcallvar_360 ;
  int __dyc_funcallvar_361 ;
  int __dyc_funcallvar_362 ;
  int __dyc_funcallvar_363 ;
  int __dyc_funcallvar_364 ;
  int __dyc_funcallvar_365 ;
  int __dyc_funcallvar_366 ;
  int __dyc_funcallvar_367 ;
  int __dyc_funcallvar_368 ;
  int __dyc_funcallvar_369 ;
  int __dyc_funcallvar_370 ;
  int __dyc_funcallvar_371 ;
  int __dyc_funcallvar_372 ;
  int __dyc_funcallvar_373 ;
  int __dyc_funcallvar_374 ;
  int __dyc_funcallvar_375 ;
  int __dyc_funcallvar_376 ;
  int __dyc_funcallvar_377 ;
  int __dyc_funcallvar_378 ;
  int __dyc_funcallvar_379 ;
  int __dyc_funcallvar_380 ;
  int __dyc_funcallvar_381 ;
  int __dyc_funcallvar_382 ;
  int __dyc_funcallvar_383 ;
  int __dyc_funcallvar_384 ;
  int __dyc_funcallvar_385 ;
  int __dyc_funcallvar_386 ;
  int __dyc_funcallvar_387 ;
  int __dyc_funcallvar_388 ;
  int __dyc_funcallvar_389 ;
  int __dyc_funcallvar_390 ;
  int __dyc_funcallvar_391 ;
  int __dyc_funcallvar_392 ;
  int __dyc_funcallvar_393 ;
  int __dyc_funcallvar_394 ;
  int __dyc_funcallvar_395 ;
  int __dyc_funcallvar_396 ;
  int __dyc_funcallvar_397 ;
  int __dyc_funcallvar_398 ;
  int __dyc_funcallvar_399 ;
  int __dyc_funcallvar_400 ;
  int __dyc_funcallvar_401 ;
  int __dyc_funcallvar_402 ;
  int __dyc_funcallvar_403 ;
  int __dyc_funcallvar_404 ;
  int __dyc_funcallvar_405 ;
  unsigned long __dyc_funcallvar_406 ;
  int __dyc_funcallvar_407 ;
  int __dyc_funcallvar_408 ;
  int __dyc_funcallvar_409 ;
  int __dyc_funcallvar_410 ;
  int __dyc_funcallvar_411 ;
  int __dyc_funcallvar_412 ;
  int __dyc_funcallvar_413 ;
  int __dyc_funcallvar_414 ;
  int __dyc_funcallvar_415 ;
  int __dyc_funcallvar_416 ;
  int __dyc_funcallvar_417 ;
  int __dyc_funcallvar_418 ;
  int __dyc_funcallvar_419 ;
  int __dyc_funcallvar_420 ;
  int __dyc_funcallvar_421 ;
  int __dyc_funcallvar_422 ;
  int __dyc_funcallvar_423 ;
  int __dyc_funcallvar_424 ;
  int __dyc_funcallvar_425 ;
  int __dyc_funcallvar_426 ;
  int __dyc_funcallvar_427 ;
  int __dyc_funcallvar_428 ;
  int __dyc_funcallvar_429 ;
  int __dyc_funcallvar_430 ;
  int __dyc_funcallvar_431 ;
  int __dyc_funcallvar_432 ;
  int __dyc_funcallvar_433 ;
  int __dyc_funcallvar_434 ;
  int __dyc_funcallvar_435 ;
  int __dyc_funcallvar_436 ;
  int __dyc_funcallvar_437 ;
  int __dyc_funcallvar_438 ;
  int __dyc_funcallvar_439 ;
  int __dyc_funcallvar_440 ;
  int __dyc_funcallvar_441 ;
  int __dyc_funcallvar_442 ;
  int __dyc_funcallvar_443 ;
  int __dyc_funcallvar_444 ;
  int __dyc_funcallvar_445 ;
  int __dyc_funcallvar_446 ;
  int __dyc_funcallvar_447 ;
  int __dyc_funcallvar_448 ;
  int __dyc_funcallvar_449 ;
  int __dyc_funcallvar_450 ;
  int __dyc_funcallvar_451 ;
  int __dyc_funcallvar_452 ;
  int __dyc_funcallvar_453 ;
  int __dyc_funcallvar_454 ;
  int __dyc_funcallvar_455 ;
  int __dyc_funcallvar_456 ;
  int __dyc_funcallvar_457 ;
  int __dyc_funcallvar_458 ;
  int __dyc_funcallvar_459 ;
  int __dyc_funcallvar_460 ;
  int __dyc_funcallvar_461 ;
  int __dyc_funcallvar_462 ;
  int __dyc_funcallvar_463 ;
  int __dyc_funcallvar_464 ;
  int __dyc_funcallvar_465 ;
  int __dyc_funcallvar_466 ;
  int __dyc_funcallvar_467 ;
  int __dyc_funcallvar_468 ;
  int __dyc_funcallvar_469 ;
  int __dyc_funcallvar_470 ;
  int __dyc_funcallvar_471 ;
  int __dyc_funcallvar_472 ;
  int __dyc_funcallvar_473 ;
  int __dyc_funcallvar_474 ;
  int __dyc_funcallvar_475 ;
  int __dyc_funcallvar_476 ;
  int __dyc_funcallvar_477 ;
  int __dyc_funcallvar_478 ;
  int __dyc_funcallvar_479 ;
  int __dyc_funcallvar_480 ;
  int __dyc_funcallvar_481 ;
  int __dyc_funcallvar_482 ;
  int __dyc_funcallvar_483 ;
  int __dyc_funcallvar_484 ;
  int __dyc_funcallvar_485 ;
  int __dyc_funcallvar_486 ;
  int __dyc_funcallvar_487 ;
  int __dyc_funcallvar_488 ;
  int __dyc_funcallvar_489 ;
  int __dyc_funcallvar_490 ;
  int __dyc_funcallvar_491 ;
  int __dyc_funcallvar_492 ;
  int __dyc_funcallvar_493 ;
  int __dyc_funcallvar_494 ;
  int __dyc_funcallvar_495 ;
  int __dyc_funcallvar_496 ;
  int __dyc_funcallvar_497 ;
  int __dyc_funcallvar_498 ;
  int __dyc_funcallvar_499 ;
  int __dyc_funcallvar_500 ;
  int __dyc_funcallvar_501 ;
  int __dyc_funcallvar_502 ;
  int __dyc_funcallvar_503 ;
  int __dyc_funcallvar_504 ;
  int __dyc_funcallvar_505 ;
  int __dyc_funcallvar_506 ;
  int __dyc_funcallvar_507 ;
  char *__dyc_funcallvar_508 ;
  int __dyc_funcallvar_509 ;
  int __dyc_funcallvar_510 ;
  int __dyc_funcallvar_511 ;
  int __dyc_funcallvar_512 ;
  int __dyc_funcallvar_513 ;
  int __dyc_funcallvar_514 ;
  int __dyc_funcallvar_515 ;
  int __dyc_funcallvar_516 ;
  int __dyc_funcallvar_517 ;
  int __dyc_funcallvar_518 ;
  int __dyc_funcallvar_519 ;
  int __dyc_funcallvar_520 ;
  int __dyc_funcallvar_521 ;
  int __dyc_funcallvar_522 ;
  int __dyc_funcallvar_523 ;
  int __dyc_funcallvar_524 ;
  int __dyc_funcallvar_525 ;
  int __dyc_funcallvar_526 ;
  int __dyc_funcallvar_527 ;
  int __dyc_funcallvar_528 ;
  int __dyc_funcallvar_529 ;
  struct git_graph *__dyc_funcallvar_530 ;
  int __dyc_funcallvar_531 ;
  int __dyc_funcallvar_532 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_533 ;

  {
  the_repository = __dyc_read_ptr__comp_408repository();
  minimum_abbrev = __dyc_readpre_byte();
  default_abbrev = __dyc_readpre_byte();
  fetch_if_missing = __dyc_readpre_byte();
  optarg___0 = (char const   *)__dyc_read_ptr__char();
  val = __dyc_readpre_byte();
  revs = __dyc_read_ptr__comp_523rev_info();
  argc = __dyc_readpre_byte();
  argv = (char const   **)__dyc_read_ptr__ptr__char();
  unkc = __dyc_read_ptr__int();
  unkv = (char const   **)__dyc_read_ptr__ptr__char();
  opt = (struct setup_revision_opt  const  *)__dyc_read_ptr__comp_574setup_revision_opt();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_readpre_byte();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  __dyc_funcallvar_41 = __dyc_readpre_byte();
  __dyc_funcallvar_42 = __dyc_readpre_byte();
  __dyc_funcallvar_43 = __dyc_readpre_byte();
  __dyc_funcallvar_44 = __dyc_readpre_byte();
  __dyc_funcallvar_45 = __dyc_readpre_byte();
  __dyc_funcallvar_46 = __dyc_readpre_byte();
  __dyc_funcallvar_47 = __dyc_readpre_byte();
  __dyc_funcallvar_48 = __dyc_readpre_byte();
  __dyc_funcallvar_49 = __dyc_readpre_byte();
  __dyc_funcallvar_50 = __dyc_readpre_byte();
  __dyc_funcallvar_51 = __dyc_readpre_byte();
  __dyc_funcallvar_52 = __dyc_readpre_byte();
  __dyc_funcallvar_53 = __dyc_readpre_byte();
  __dyc_funcallvar_54 = __dyc_readpre_byte();
  __dyc_funcallvar_55 = __dyc_readpre_byte();
  __dyc_funcallvar_56 = __dyc_readpre_byte();
  __dyc_funcallvar_57 = __dyc_readpre_byte();
  __dyc_funcallvar_58 = __dyc_readpre_byte();
  __dyc_funcallvar_59 = __dyc_readpre_byte();
  __dyc_funcallvar_60 = __dyc_readpre_byte();
  __dyc_funcallvar_61 = __dyc_readpre_byte();
  __dyc_funcallvar_62 = __dyc_readpre_byte();
  __dyc_funcallvar_63 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_64 = __dyc_readpre_byte();
  __dyc_funcallvar_65 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_66 = __dyc_readpre_byte();
  __dyc_funcallvar_67 = __dyc_readpre_byte();
  __dyc_funcallvar_68 = __dyc_readpre_byte();
  __dyc_funcallvar_69 = __dyc_readpre_byte();
  __dyc_funcallvar_70 = __dyc_readpre_byte();
  __dyc_funcallvar_71 = __dyc_readpre_byte();
  __dyc_funcallvar_72 = __dyc_readpre_byte();
  __dyc_funcallvar_73 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_74 = __dyc_readpre_byte();
  __dyc_funcallvar_75 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_76 = __dyc_readpre_byte();
  __dyc_funcallvar_77 = (timestamp_t )__dyc_readpre_byte();
  __dyc_funcallvar_78 = __dyc_readpre_byte();
  __dyc_funcallvar_79 = (timestamp_t )__dyc_readpre_byte();
  __dyc_funcallvar_80 = __dyc_readpre_byte();
  __dyc_funcallvar_81 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_82 = __dyc_readpre_byte();
  __dyc_funcallvar_83 = (timestamp_t )__dyc_readpre_byte();
  __dyc_funcallvar_84 = __dyc_readpre_byte();
  __dyc_funcallvar_85 = (timestamp_t )__dyc_readpre_byte();
  __dyc_funcallvar_86 = __dyc_readpre_byte();
  __dyc_funcallvar_87 = __dyc_readpre_byte();
  __dyc_funcallvar_88 = __dyc_readpre_byte();
  __dyc_funcallvar_89 = __dyc_readpre_byte();
  __dyc_funcallvar_90 = __dyc_readpre_byte();
  __dyc_funcallvar_91 = __dyc_readpre_byte();
  __dyc_funcallvar_92 = __dyc_readpre_byte();
  __dyc_funcallvar_93 = __dyc_readpre_byte();
  __dyc_funcallvar_94 = __dyc_readpre_byte();
  __dyc_funcallvar_95 = __dyc_readpre_byte();
  __dyc_funcallvar_96 = __dyc_readpre_byte();
  __dyc_funcallvar_97 = __dyc_readpre_byte();
  __dyc_funcallvar_98 = __dyc_readpre_byte();
  __dyc_funcallvar_99 = __dyc_readpre_byte();
  __dyc_funcallvar_100 = __dyc_readpre_byte();
  __dyc_funcallvar_101 = __dyc_readpre_byte();
  __dyc_funcallvar_102 = __dyc_readpre_byte();
  __dyc_funcallvar_103 = __dyc_readpre_byte();
  __dyc_funcallvar_104 = __dyc_readpre_byte();
  __dyc_funcallvar_105 = __dyc_readpre_byte();
  __dyc_funcallvar_106 = __dyc_readpre_byte();
  __dyc_funcallvar_107 = __dyc_readpre_byte();
  __dyc_funcallvar_108 = __dyc_readpre_byte();
  __dyc_funcallvar_109 = __dyc_readpre_byte();
  __dyc_funcallvar_110 = __dyc_readpre_byte();
  __dyc_funcallvar_111 = __dyc_readpre_byte();
  __dyc_funcallvar_112 = __dyc_readpre_byte();
  __dyc_funcallvar_113 = __dyc_readpre_byte();
  __dyc_funcallvar_114 = __dyc_readpre_byte();
  __dyc_funcallvar_115 = __dyc_readpre_byte();
  __dyc_funcallvar_116 = __dyc_readpre_byte();
  __dyc_funcallvar_117 = __dyc_readpre_byte();
  __dyc_funcallvar_118 = __dyc_readpre_byte();
  __dyc_funcallvar_119 = __dyc_readpre_byte();
  __dyc_funcallvar_120 = __dyc_readpre_byte();
  __dyc_funcallvar_121 = __dyc_readpre_byte();
  __dyc_funcallvar_122 = __dyc_readpre_byte();
  __dyc_funcallvar_123 = __dyc_readpre_byte();
  __dyc_funcallvar_124 = __dyc_readpre_byte();
  __dyc_funcallvar_125 = __dyc_readpre_byte();
  __dyc_funcallvar_126 = __dyc_readpre_byte();
  __dyc_funcallvar_127 = __dyc_readpre_byte();
  __dyc_funcallvar_128 = __dyc_readpre_byte();
  __dyc_funcallvar_129 = __dyc_readpre_byte();
  __dyc_funcallvar_130 = __dyc_readpre_byte();
  __dyc_funcallvar_131 = __dyc_readpre_byte();
  __dyc_funcallvar_132 = __dyc_readpre_byte();
  __dyc_funcallvar_133 = __dyc_readpre_byte();
  __dyc_funcallvar_134 = __dyc_readpre_byte();
  __dyc_funcallvar_135 = __dyc_readpre_byte();
  __dyc_funcallvar_136 = __dyc_readpre_byte();
  __dyc_funcallvar_137 = __dyc_readpre_byte();
  __dyc_funcallvar_138 = __dyc_readpre_byte();
  __dyc_funcallvar_139 = __dyc_readpre_byte();
  __dyc_funcallvar_140 = __dyc_readpre_byte();
  __dyc_funcallvar_141 = __dyc_readpre_byte();
  __dyc_funcallvar_142 = __dyc_readpre_byte();
  __dyc_funcallvar_143 = __dyc_readpre_byte();
  __dyc_funcallvar_144 = __dyc_readpre_byte();
  __dyc_funcallvar_145 = __dyc_readpre_byte();
  __dyc_funcallvar_146 = __dyc_readpre_byte();
  __dyc_funcallvar_147 = __dyc_readpre_byte();
  __dyc_funcallvar_148 = __dyc_readpre_byte();
  __dyc_funcallvar_149 = __dyc_readpre_byte();
  __dyc_funcallvar_150 = __dyc_readpre_byte();
  __dyc_funcallvar_151 = __dyc_readpre_byte();
  __dyc_funcallvar_152 = __dyc_readpre_byte();
  __dyc_funcallvar_153 = __dyc_readpre_byte();
  __dyc_funcallvar_154 = __dyc_readpre_byte();
  __dyc_funcallvar_155 = __dyc_readpre_byte();
  __dyc_funcallvar_156 = __dyc_readpre_byte();
  __dyc_funcallvar_157 = __dyc_readpre_byte();
  __dyc_funcallvar_158 = __dyc_readpre_byte();
  __dyc_funcallvar_159 = __dyc_readpre_byte();
  __dyc_funcallvar_160 = __dyc_readpre_byte();
  __dyc_funcallvar_161 = __dyc_readpre_byte();
  __dyc_funcallvar_162 = __dyc_readpre_byte();
  __dyc_funcallvar_163 = __dyc_readpre_byte();
  __dyc_funcallvar_164 = __dyc_readpre_byte();
  __dyc_funcallvar_165 = __dyc_readpre_byte();
  __dyc_funcallvar_166 = __dyc_readpre_byte();
  __dyc_funcallvar_167 = __dyc_readpre_byte();
  __dyc_funcallvar_168 = __dyc_readpre_byte();
  __dyc_funcallvar_169 = __dyc_readpre_byte();
  __dyc_funcallvar_170 = __dyc_readpre_byte();
  __dyc_funcallvar_171 = __dyc_readpre_byte();
  __dyc_funcallvar_172 = __dyc_readpre_byte();
  __dyc_funcallvar_173 = __dyc_readpre_byte();
  __dyc_funcallvar_174 = __dyc_readpre_byte();
  __dyc_funcallvar_175 = __dyc_readpre_byte();
  __dyc_funcallvar_176 = __dyc_readpre_byte();
  __dyc_funcallvar_177 = __dyc_readpre_byte();
  __dyc_funcallvar_178 = __dyc_readpre_byte();
  __dyc_funcallvar_179 = __dyc_readpre_byte();
  __dyc_funcallvar_180 = __dyc_readpre_byte();
  __dyc_funcallvar_181 = __dyc_readpre_byte();
  __dyc_funcallvar_182 = __dyc_readpre_byte();
  __dyc_funcallvar_183 = __dyc_readpre_byte();
  __dyc_funcallvar_184 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_185 = __dyc_readpre_byte();
  __dyc_funcallvar_186 = __dyc_readpre_byte();
  __dyc_funcallvar_187 = __dyc_readpre_byte();
  __dyc_funcallvar_188 = __dyc_readpre_byte();
  __dyc_funcallvar_189 = __dyc_readpre_byte();
  __dyc_funcallvar_190 = __dyc_readpre_byte();
  __dyc_funcallvar_191 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_192 = __dyc_readpre_byte();
  __dyc_funcallvar_193 = __dyc_readpre_byte();
  __dyc_funcallvar_194 = __dyc_readpre_byte();
  __dyc_funcallvar_195 = __dyc_readpre_byte();
  __dyc_funcallvar_196 = __dyc_readpre_byte();
  __dyc_funcallvar_197 = __dyc_readpre_byte();
  __dyc_funcallvar_198 = __dyc_readpre_byte();
  __dyc_funcallvar_199 = __dyc_readpre_byte();
  __dyc_funcallvar_200 = __dyc_readpre_byte();
  __dyc_funcallvar_201 = __dyc_readpre_byte();
  __dyc_funcallvar_202 = __dyc_readpre_byte();
  __dyc_funcallvar_203 = __dyc_readpre_byte();
  __dyc_funcallvar_204 = __dyc_readpre_byte();
  __dyc_funcallvar_205 = __dyc_readpre_byte();
  __dyc_funcallvar_206 = __dyc_readpre_byte();
  __dyc_funcallvar_207 = __dyc_readpre_byte();
  __dyc_funcallvar_208 = __dyc_readpre_byte();
  __dyc_funcallvar_209 = __dyc_readpre_byte();
  __dyc_funcallvar_210 = __dyc_readpre_byte();
  __dyc_funcallvar_211 = __dyc_readpre_byte();
  __dyc_funcallvar_212 = __dyc_readpre_byte();
  __dyc_funcallvar_213 = __dyc_readpre_byte();
  __dyc_funcallvar_214 = __dyc_readpre_byte();
  __dyc_funcallvar_215 = __dyc_readpre_byte();
  __dyc_funcallvar_216 = __dyc_readpre_byte();
  __dyc_funcallvar_217 = __dyc_readpre_byte();
  __dyc_funcallvar_218 = __dyc_readpre_byte();
  __dyc_funcallvar_219 = __dyc_readpre_byte();
  __dyc_funcallvar_220 = __dyc_readpre_byte();
  __dyc_funcallvar_221 = __dyc_readpre_byte();
  __dyc_funcallvar_222 = __dyc_readpre_byte();
  __dyc_funcallvar_223 = __dyc_readpre_byte();
  __dyc_funcallvar_224 = __dyc_readpre_byte();
  __dyc_funcallvar_225 = __dyc_readpre_byte();
  __dyc_funcallvar_226 = __dyc_readpre_byte();
  __dyc_funcallvar_227 = __dyc_readpre_byte();
  __dyc_funcallvar_228 = __dyc_readpre_byte();
  __dyc_funcallvar_229 = __dyc_readpre_byte();
  __dyc_funcallvar_230 = __dyc_readpre_byte();
  __dyc_funcallvar_231 = __dyc_readpre_byte();
  __dyc_funcallvar_232 = __dyc_readpre_byte();
  __dyc_funcallvar_233 = __dyc_readpre_byte();
  __dyc_funcallvar_234 = __dyc_readpre_byte();
  __dyc_funcallvar_235 = __dyc_readpre_byte();
  __dyc_funcallvar_236 = __dyc_readpre_byte();
  __dyc_funcallvar_237 = __dyc_readpre_byte();
  __dyc_funcallvar_238 = __dyc_readpre_byte();
  __dyc_funcallvar_239 = __dyc_readpre_byte();
  __dyc_funcallvar_240 = __dyc_readpre_byte();
  __dyc_funcallvar_241 = __dyc_readpre_byte();
  __dyc_funcallvar_242 = __dyc_readpre_byte();
  __dyc_funcallvar_243 = __dyc_readpre_byte();
  __dyc_funcallvar_244 = __dyc_readpre_byte();
  __dyc_funcallvar_245 = __dyc_readpre_byte();
  __dyc_funcallvar_246 = __dyc_readpre_byte();
  __dyc_funcallvar_247 = __dyc_readpre_byte();
  __dyc_funcallvar_248 = __dyc_readpre_byte();
  __dyc_funcallvar_249 = __dyc_readpre_byte();
  __dyc_funcallvar_250 = __dyc_readpre_byte();
  __dyc_funcallvar_251 = __dyc_readpre_byte();
  __dyc_funcallvar_252 = __dyc_readpre_byte();
  __dyc_funcallvar_253 = __dyc_readpre_byte();
  __dyc_funcallvar_254 = __dyc_readpre_byte();
  __dyc_funcallvar_255 = __dyc_readpre_byte();
  __dyc_funcallvar_256 = __dyc_readpre_byte();
  __dyc_funcallvar_257 = __dyc_readpre_byte();
  __dyc_funcallvar_258 = __dyc_readpre_byte();
  __dyc_funcallvar_259 = __dyc_readpre_byte();
  __dyc_funcallvar_260 = __dyc_readpre_byte();
  __dyc_funcallvar_261 = __dyc_readpre_byte();
  __dyc_funcallvar_262 = __dyc_readpre_byte();
  __dyc_funcallvar_263 = (char const __attribute__((__format_arg__(1)))  *)__dyc_read_ptr__char();
  __dyc_funcallvar_264 = __dyc_readpre_byte();
  __dyc_funcallvar_265 = __dyc_readpre_byte();
  __dyc_funcallvar_266 = __dyc_readpre_byte();
  __dyc_funcallvar_267 = __dyc_readpre_byte();
  __dyc_funcallvar_268 = __dyc_readpre_byte();
  __dyc_funcallvar_269 = __dyc_readpre_byte();
  __dyc_funcallvar_270 = __dyc_readpre_byte();
  __dyc_funcallvar_271 = __dyc_readpre_byte();
  __dyc_funcallvar_272 = __dyc_readpre_byte();
  __dyc_funcallvar_273 = __dyc_readpre_byte();
  __dyc_funcallvar_274 = __dyc_readpre_byte();
  __dyc_funcallvar_275 = __dyc_readpre_byte();
  __dyc_funcallvar_276 = __dyc_readpre_byte();
  __dyc_funcallvar_277 = __dyc_readpre_byte();
  __dyc_funcallvar_278 = __dyc_readpre_byte();
  __dyc_funcallvar_279 = __dyc_readpre_byte();
  __dyc_funcallvar_280 = __dyc_readpre_byte();
  __dyc_funcallvar_281 = __dyc_readpre_byte();
  __dyc_funcallvar_282 = __dyc_readpre_byte();
  __dyc_funcallvar_283 = __dyc_readpre_byte();
  __dyc_funcallvar_284 = __dyc_readpre_byte();
  __dyc_funcallvar_285 = __dyc_readpre_byte();
  __dyc_funcallvar_286 = __dyc_readpre_byte();
  __dyc_funcallvar_287 = __dyc_readpre_byte();
  __dyc_funcallvar_288 = __dyc_readpre_byte();
  __dyc_funcallvar_289 = __dyc_readpre_byte();
  __dyc_funcallvar_290 = __dyc_readpre_byte();
  __dyc_funcallvar_291 = __dyc_readpre_byte();
  __dyc_funcallvar_292 = __dyc_readpre_byte();
  __dyc_funcallvar_293 = __dyc_readpre_byte();
  __dyc_funcallvar_294 = __dyc_readpre_byte();
  __dyc_funcallvar_295 = __dyc_readpre_byte();
  __dyc_funcallvar_296 = __dyc_readpre_byte();
  __dyc_funcallvar_297 = __dyc_readpre_byte();
  __dyc_funcallvar_298 = __dyc_readpre_byte();
  __dyc_funcallvar_299 = __dyc_readpre_byte();
  __dyc_funcallvar_300 = __dyc_readpre_byte();
  __dyc_funcallvar_301 = __dyc_readpre_byte();
  __dyc_funcallvar_302 = __dyc_readpre_byte();
  __dyc_funcallvar_303 = __dyc_readpre_byte();
  __dyc_funcallvar_304 = __dyc_readpre_byte();
  __dyc_funcallvar_305 = __dyc_readpre_byte();
  __dyc_funcallvar_306 = __dyc_readpre_byte();
  __dyc_funcallvar_307 = __dyc_readpre_byte();
  __dyc_funcallvar_308 = __dyc_readpre_byte();
  __dyc_funcallvar_309 = __dyc_readpre_byte();
  __dyc_funcallvar_310 = __dyc_readpre_byte();
  __dyc_funcallvar_311 = __dyc_readpre_byte();
  __dyc_funcallvar_312 = __dyc_readpre_byte();
  __dyc_funcallvar_313 = __dyc_readpre_byte();
  __dyc_funcallvar_314 = __dyc_readpre_byte();
  __dyc_funcallvar_315 = __dyc_readpre_byte();
  __dyc_funcallvar_316 = __dyc_readpre_byte();
  __dyc_funcallvar_317 = __dyc_readpre_byte();
  __dyc_funcallvar_318 = __dyc_readpre_byte();
  __dyc_funcallvar_319 = __dyc_readpre_byte();
  __dyc_funcallvar_320 = __dyc_readpre_byte();
  __dyc_funcallvar_321 = __dyc_readpre_byte();
  __dyc_funcallvar_322 = __dyc_readpre_byte();
  __dyc_funcallvar_323 = __dyc_readpre_byte();
  __dyc_funcallvar_324 = __dyc_readpre_byte();
  __dyc_funcallvar_325 = __dyc_readpre_byte();
  __dyc_funcallvar_326 = __dyc_readpre_byte();
  __dyc_funcallvar_327 = __dyc_readpre_byte();
  __dyc_funcallvar_328 = __dyc_readpre_byte();
  __dyc_funcallvar_329 = __dyc_readpre_byte();
  __dyc_funcallvar_330 = __dyc_readpre_byte();
  __dyc_funcallvar_331 = __dyc_readpre_byte();
  __dyc_funcallvar_332 = __dyc_readpre_byte();
  __dyc_funcallvar_333 = __dyc_readpre_byte();
  __dyc_funcallvar_334 = __dyc_readpre_byte();
  __dyc_funcallvar_335 = __dyc_readpre_byte();
  __dyc_funcallvar_336 = __dyc_readpre_byte();
  __dyc_funcallvar_337 = __dyc_readpre_byte();
  __dyc_funcallvar_338 = __dyc_readpre_byte();
  __dyc_funcallvar_339 = __dyc_readpre_byte();
  __dyc_funcallvar_340 = __dyc_readpre_byte();
  __dyc_funcallvar_341 = __dyc_read_ptr__char();
  __dyc_funcallvar_342 = __dyc_readpre_byte();
  __dyc_funcallvar_343 = __dyc_readpre_byte();
  __dyc_funcallvar_344 = __dyc_readpre_byte();
  __dyc_funcallvar_345 = __dyc_readpre_byte();
  __dyc_funcallvar_346 = __dyc_readpre_byte();
  __dyc_funcallvar_347 = __dyc_readpre_byte();
  __dyc_funcallvar_348 = __dyc_readpre_byte();
  __dyc_funcallvar_349 = __dyc_readpre_byte();
  __dyc_funcallvar_350 = __dyc_readpre_byte();
  __dyc_funcallvar_351 = __dyc_readpre_byte();
  __dyc_funcallvar_352 = __dyc_readpre_byte();
  __dyc_funcallvar_353 = __dyc_readpre_byte();
  __dyc_funcallvar_354 = __dyc_readpre_byte();
  __dyc_funcallvar_355 = __dyc_readpre_byte();
  __dyc_funcallvar_356 = __dyc_readpre_byte();
  __dyc_funcallvar_357 = __dyc_readpre_byte();
  __dyc_funcallvar_358 = __dyc_readpre_byte();
  __dyc_funcallvar_359 = __dyc_readpre_byte();
  __dyc_funcallvar_360 = __dyc_readpre_byte();
  __dyc_funcallvar_361 = __dyc_readpre_byte();
  __dyc_funcallvar_362 = __dyc_readpre_byte();
  __dyc_funcallvar_363 = __dyc_readpre_byte();
  __dyc_funcallvar_364 = __dyc_readpre_byte();
  __dyc_funcallvar_365 = __dyc_readpre_byte();
  __dyc_funcallvar_366 = __dyc_readpre_byte();
  __dyc_funcallvar_367 = __dyc_readpre_byte();
  __dyc_funcallvar_368 = __dyc_readpre_byte();
  __dyc_funcallvar_369 = __dyc_readpre_byte();
  __dyc_funcallvar_370 = __dyc_readpre_byte();
  __dyc_funcallvar_371 = __dyc_readpre_byte();
  __dyc_funcallvar_372 = __dyc_readpre_byte();
  __dyc_funcallvar_373 = __dyc_readpre_byte();
  __dyc_funcallvar_374 = __dyc_readpre_byte();
  __dyc_funcallvar_375 = __dyc_readpre_byte();
  __dyc_funcallvar_376 = __dyc_readpre_byte();
  __dyc_funcallvar_377 = __dyc_readpre_byte();
  __dyc_funcallvar_378 = __dyc_readpre_byte();
  __dyc_funcallvar_379 = __dyc_readpre_byte();
  __dyc_funcallvar_380 = __dyc_readpre_byte();
  __dyc_funcallvar_381 = __dyc_readpre_byte();
  __dyc_funcallvar_382 = __dyc_readpre_byte();
  __dyc_funcallvar_383 = __dyc_readpre_byte();
  __dyc_funcallvar_384 = __dyc_readpre_byte();
  __dyc_funcallvar_385 = __dyc_readpre_byte();
  __dyc_funcallvar_386 = __dyc_readpre_byte();
  __dyc_funcallvar_387 = __dyc_readpre_byte();
  __dyc_funcallvar_388 = __dyc_readpre_byte();
  __dyc_funcallvar_389 = __dyc_readpre_byte();
  __dyc_funcallvar_390 = __dyc_readpre_byte();
  __dyc_funcallvar_391 = __dyc_readpre_byte();
  __dyc_funcallvar_392 = __dyc_readpre_byte();
  __dyc_funcallvar_393 = __dyc_readpre_byte();
  __dyc_funcallvar_394 = __dyc_readpre_byte();
  __dyc_funcallvar_395 = __dyc_readpre_byte();
  __dyc_funcallvar_396 = __dyc_readpre_byte();
  __dyc_funcallvar_397 = __dyc_readpre_byte();
  __dyc_funcallvar_398 = __dyc_readpre_byte();
  __dyc_funcallvar_399 = __dyc_readpre_byte();
  __dyc_funcallvar_400 = __dyc_readpre_byte();
  __dyc_funcallvar_401 = __dyc_readpre_byte();
  __dyc_funcallvar_402 = __dyc_readpre_byte();
  __dyc_funcallvar_403 = __dyc_readpre_byte();
  __dyc_funcallvar_404 = __dyc_readpre_byte();
  __dyc_funcallvar_405 = __dyc_readpre_byte();
  __dyc_funcallvar_406 = (unsigned long )__dyc_readpre_byte();
  __dyc_funcallvar_407 = __dyc_readpre_byte();
  __dyc_funcallvar_408 = __dyc_readpre_byte();
  __dyc_funcallvar_409 = __dyc_readpre_byte();
  __dyc_funcallvar_410 = __dyc_readpre_byte();
  __dyc_funcallvar_411 = __dyc_readpre_byte();
  __dyc_funcallvar_412 = __dyc_readpre_byte();
  __dyc_funcallvar_413 = __dyc_readpre_byte();
  __dyc_funcallvar_414 = __dyc_readpre_byte();
  __dyc_funcallvar_415 = __dyc_readpre_byte();
  __dyc_funcallvar_416 = __dyc_readpre_byte();
  __dyc_funcallvar_417 = __dyc_readpre_byte();
  __dyc_funcallvar_418 = __dyc_readpre_byte();
  __dyc_funcallvar_419 = __dyc_readpre_byte();
  __dyc_funcallvar_420 = __dyc_readpre_byte();
  __dyc_funcallvar_421 = __dyc_readpre_byte();
  __dyc_funcallvar_422 = __dyc_readpre_byte();
  __dyc_funcallvar_423 = __dyc_readpre_byte();
  __dyc_funcallvar_424 = __dyc_readpre_byte();
  __dyc_funcallvar_425 = __dyc_readpre_byte();
  __dyc_funcallvar_426 = __dyc_readpre_byte();
  __dyc_funcallvar_427 = __dyc_readpre_byte();
  __dyc_funcallvar_428 = __dyc_readpre_byte();
  __dyc_funcallvar_429 = __dyc_readpre_byte();
  __dyc_funcallvar_430 = __dyc_readpre_byte();
  __dyc_funcallvar_431 = __dyc_readpre_byte();
  __dyc_funcallvar_432 = __dyc_readpre_byte();
  __dyc_funcallvar_433 = __dyc_readpre_byte();
  __dyc_funcallvar_434 = __dyc_readpre_byte();
  __dyc_funcallvar_435 = __dyc_readpre_byte();
  __dyc_funcallvar_436 = __dyc_readpre_byte();
  __dyc_funcallvar_437 = __dyc_readpre_byte();
  __dyc_funcallvar_438 = __dyc_readpre_byte();
  __dyc_funcallvar_439 = __dyc_readpre_byte();
  __dyc_funcallvar_440 = __dyc_readpre_byte();
  __dyc_funcallvar_441 = __dyc_readpre_byte();
  __dyc_funcallvar_442 = __dyc_readpre_byte();
  __dyc_funcallvar_443 = __dyc_readpre_byte();
  __dyc_funcallvar_444 = __dyc_readpre_byte();
  __dyc_funcallvar_445 = __dyc_readpre_byte();
  __dyc_funcallvar_446 = __dyc_readpre_byte();
  __dyc_funcallvar_447 = __dyc_readpre_byte();
  __dyc_funcallvar_448 = __dyc_readpre_byte();
  __dyc_funcallvar_449 = __dyc_readpre_byte();
  __dyc_funcallvar_450 = __dyc_readpre_byte();
  __dyc_funcallvar_451 = __dyc_readpre_byte();
  __dyc_funcallvar_452 = __dyc_readpre_byte();
  __dyc_funcallvar_453 = __dyc_readpre_byte();
  __dyc_funcallvar_454 = __dyc_readpre_byte();
  __dyc_funcallvar_455 = __dyc_readpre_byte();
  __dyc_funcallvar_456 = __dyc_readpre_byte();
  __dyc_funcallvar_457 = __dyc_readpre_byte();
  __dyc_funcallvar_458 = __dyc_readpre_byte();
  __dyc_funcallvar_459 = __dyc_readpre_byte();
  __dyc_funcallvar_460 = __dyc_readpre_byte();
  __dyc_funcallvar_461 = __dyc_readpre_byte();
  __dyc_funcallvar_462 = __dyc_readpre_byte();
  __dyc_funcallvar_463 = __dyc_readpre_byte();
  __dyc_funcallvar_464 = __dyc_readpre_byte();
  __dyc_funcallvar_465 = __dyc_readpre_byte();
  __dyc_funcallvar_466 = __dyc_readpre_byte();
  __dyc_funcallvar_467 = __dyc_readpre_byte();
  __dyc_funcallvar_468 = __dyc_readpre_byte();
  __dyc_funcallvar_469 = __dyc_readpre_byte();
  __dyc_funcallvar_470 = __dyc_readpre_byte();
  __dyc_funcallvar_471 = __dyc_readpre_byte();
  __dyc_funcallvar_472 = __dyc_readpre_byte();
  __dyc_funcallvar_473 = __dyc_readpre_byte();
  __dyc_funcallvar_474 = __dyc_readpre_byte();
  __dyc_funcallvar_475 = __dyc_readpre_byte();
  __dyc_funcallvar_476 = __dyc_readpre_byte();
  __dyc_funcallvar_477 = __dyc_readpre_byte();
  __dyc_funcallvar_478 = __dyc_readpre_byte();
  __dyc_funcallvar_479 = __dyc_readpre_byte();
  __dyc_funcallvar_480 = __dyc_readpre_byte();
  __dyc_funcallvar_481 = __dyc_readpre_byte();
  __dyc_funcallvar_482 = __dyc_readpre_byte();
  __dyc_funcallvar_483 = __dyc_readpre_byte();
  __dyc_funcallvar_484 = __dyc_readpre_byte();
  __dyc_funcallvar_485 = __dyc_readpre_byte();
  __dyc_funcallvar_486 = __dyc_readpre_byte();
  __dyc_funcallvar_487 = __dyc_readpre_byte();
  __dyc_funcallvar_488 = __dyc_readpre_byte();
  __dyc_funcallvar_489 = __dyc_readpre_byte();
  __dyc_funcallvar_490 = __dyc_readpre_byte();
  __dyc_funcallvar_491 = __dyc_readpre_byte();
  __dyc_funcallvar_492 = __dyc_readpre_byte();
  __dyc_funcallvar_493 = __dyc_readpre_byte();
  __dyc_funcallvar_494 = __dyc_readpre_byte();
  __dyc_funcallvar_495 = __dyc_readpre_byte();
  __dyc_funcallvar_496 = __dyc_readpre_byte();
  __dyc_funcallvar_497 = __dyc_readpre_byte();
  __dyc_funcallvar_498 = __dyc_readpre_byte();
  __dyc_funcallvar_499 = __dyc_readpre_byte();
  __dyc_funcallvar_500 = __dyc_readpre_byte();
  __dyc_funcallvar_501 = __dyc_readpre_byte();
  __dyc_funcallvar_502 = __dyc_readpre_byte();
  __dyc_funcallvar_503 = __dyc_readpre_byte();
  __dyc_funcallvar_504 = __dyc_readpre_byte();
  __dyc_funcallvar_505 = __dyc_readpre_byte();
  __dyc_funcallvar_506 = __dyc_readpre_byte();
  __dyc_funcallvar_507 = __dyc_readpre_byte();
  __dyc_funcallvar_508 = __dyc_read_ptr__char();
  __dyc_funcallvar_509 = __dyc_readpre_byte();
  __dyc_funcallvar_510 = __dyc_readpre_byte();
  __dyc_funcallvar_511 = __dyc_readpre_byte();
  __dyc_funcallvar_512 = __dyc_readpre_byte();
  __dyc_funcallvar_513 = __dyc_readpre_byte();
  __dyc_funcallvar_514 = __dyc_readpre_byte();
  __dyc_funcallvar_515 = __dyc_readpre_byte();
  __dyc_funcallvar_516 = __dyc_readpre_byte();
  __dyc_funcallvar_517 = __dyc_readpre_byte();
  __dyc_funcallvar_518 = __dyc_readpre_byte();
  __dyc_funcallvar_519 = __dyc_readpre_byte();
  __dyc_funcallvar_520 = __dyc_readpre_byte();
  __dyc_funcallvar_521 = __dyc_readpre_byte();
  __dyc_funcallvar_522 = __dyc_readpre_byte();
  __dyc_funcallvar_523 = __dyc_readpre_byte();
  __dyc_funcallvar_524 = __dyc_readpre_byte();
  __dyc_funcallvar_525 = __dyc_readpre_byte();
  __dyc_funcallvar_526 = __dyc_readpre_byte();
  __dyc_funcallvar_527 = __dyc_readpre_byte();
  __dyc_funcallvar_528 = __dyc_readpre_byte();
  __dyc_funcallvar_529 = __dyc_readpre_byte();
  __dyc_funcallvar_530 = (struct git_graph *)__dyc_read_ptr__comp_573git_graph();
  __dyc_funcallvar_531 = __dyc_readpre_byte();
  __dyc_funcallvar_532 = __dyc_readpre_byte();
  __dyc_funcallvar_533 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  git_log_output_encoding = 0;
  arg = 0;
  argcount = 0;
  hexsz = 0;
  tmp = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___9 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___27 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___45 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___63 = 0;
  tmp___68 = 0;
  tmp___69 = 0;
  tmp___70 = 0;
  tmp___71 = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___81 = 0;
  tmp___86 = 0;
  tmp___87 = 0;
  tmp___88 = 0;
  tmp___89 = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___99 = 0;
  tmp___104 = 0;
  tmp___105 = 0;
  tmp___106 = 0;
  tmp___107 = 0;
  __s1_len___5 = 0;
  __s2_len___5 = 0;
  tmp___117 = 0;
  tmp___122 = 0;
  tmp___123 = 0;
  tmp___124 = 0;
  tmp___125 = 0;
  __s1_len___6 = 0;
  __s2_len___6 = 0;
  tmp___135 = 0;
  tmp___140 = 0;
  tmp___141 = 0;
  tmp___142 = 0;
  tmp___143 = 0;
  __s1_len___7 = 0;
  __s2_len___7 = 0;
  tmp___153 = 0;
  tmp___158 = 0;
  tmp___159 = 0;
  tmp___160 = 0;
  tmp___161 = 0;
  tmp___162 = 0;
  __s1_len___8 = 0;
  __s2_len___8 = 0;
  tmp___172 = 0;
  tmp___177 = 0;
  tmp___178 = 0;
  tmp___179 = 0;
  tmp___180 = 0;
  __s1_len___9 = 0;
  __s2_len___9 = 0;
  tmp___190 = 0;
  tmp___195 = 0;
  tmp___196 = 0;
  tmp___197 = 0;
  tmp___198 = 0;
  tmp___199 = 0;
  tmp___200 = 0;
  tmp___201 = 0;
  tmp___202 = 0;
  tmp___203 = 0;
  tmp___204 = 0;
  tmp___205 = 0;
  tmp___206 = 0;
  tmp___207 = 0;
  tmp___208 = 0;
  tmp___209 = 0;
  tmp___210 = 0;
  tmp___211 = 0;
  tmp___212 = 0;
  tmp___213 = 0;
  tmp___214 = 0;
  tmp___215 = 0;
  tmp___216 = 0;
  __s1_len___10 = 0;
  __s2_len___10 = 0;
  tmp___226 = 0;
  tmp___231 = 0;
  tmp___232 = 0;
  tmp___233 = 0;
  tmp___234 = 0;
  __s1_len___11 = 0;
  __s2_len___11 = 0;
  tmp___244 = 0;
  tmp___249 = 0;
  tmp___250 = 0;
  tmp___251 = 0;
  tmp___252 = 0;
  tmp___253 = 0;
  tmp___254 = 0;
  tmp___255 = 0;
  tmp___256 = 0;
  tmp___257 = 0;
  __s1_len___12 = 0;
  __s2_len___12 = 0;
  tmp___267 = 0;
  tmp___272 = 0;
  tmp___273 = 0;
  tmp___274 = 0;
  tmp___275 = 0;
  opts = 0;
  tmp___276 = 0;
  tmp___277 = 0;
  __s1_len___13 = 0;
  __s2_len___13 = 0;
  tmp___287 = 0;
  tmp___292 = 0;
  tmp___293 = 0;
  tmp___294 = 0;
  tmp___295 = 0;
  __s1_len___14 = 0;
  __s2_len___14 = 0;
  tmp___305 = 0;
  tmp___310 = 0;
  tmp___311 = 0;
  tmp___312 = 0;
  tmp___313 = 0;
  __s1_len___15 = 0;
  __s2_len___15 = 0;
  tmp___323 = 0;
  tmp___328 = 0;
  tmp___329 = 0;
  tmp___330 = 0;
  tmp___331 = 0;
  __s1_len___16 = 0;
  __s2_len___16 = 0;
  tmp___341 = 0;
  tmp___346 = 0;
  tmp___347 = 0;
  tmp___348 = 0;
  tmp___349 = 0;
  __s1_len___17 = 0;
  __s2_len___17 = 0;
  tmp___359 = 0;
  tmp___364 = 0;
  tmp___365 = 0;
  tmp___366 = 0;
  tmp___367 = 0;
  __s1_len___18 = 0;
  __s2_len___18 = 0;
  tmp___377 = 0;
  tmp___382 = 0;
  tmp___383 = 0;
  tmp___384 = 0;
  tmp___385 = 0;
  __s1_len___19 = 0;
  __s2_len___19 = 0;
  tmp___395 = 0;
  tmp___400 = 0;
  tmp___401 = 0;
  tmp___402 = 0;
  tmp___403 = 0;
  __s1_len___20 = 0;
  __s2_len___20 = 0;
  tmp___413 = 0;
  tmp___418 = 0;
  tmp___419 = 0;
  tmp___420 = 0;
  tmp___421 = 0;
  __s1_len___21 = 0;
  __s2_len___21 = 0;
  tmp___431 = 0;
  tmp___436 = 0;
  tmp___437 = 0;
  tmp___438 = 0;
  tmp___439 = 0;
  __s1_len___22 = 0;
  __s2_len___22 = 0;
  tmp___449 = 0;
  tmp___454 = 0;
  tmp___455 = 0;
  tmp___456 = 0;
  tmp___457 = 0;
  __s1_len___23 = 0;
  __s2_len___23 = 0;
  tmp___467 = 0;
  tmp___472 = 0;
  tmp___473 = 0;
  tmp___474 = 0;
  tmp___475 = 0;
  __s1_len___24 = 0;
  __s2_len___24 = 0;
  tmp___485 = 0;
  tmp___490 = 0;
  tmp___491 = 0;
  tmp___492 = 0;
  tmp___493 = 0;
  __s1_len___25 = 0;
  __s2_len___25 = 0;
  tmp___503 = 0;
  tmp___508 = 0;
  tmp___509 = 0;
  tmp___510 = 0;
  tmp___511 = 0;
  __s1_len___26 = 0;
  __s2_len___26 = 0;
  tmp___521 = 0;
  tmp___526 = 0;
  tmp___527 = 0;
  tmp___528 = 0;
  tmp___529 = 0;
  __s1_len___27 = 0;
  __s2_len___27 = 0;
  tmp___539 = 0;
  tmp___544 = 0;
  tmp___545 = 0;
  tmp___546 = 0;
  tmp___547 = 0;
  __s1_len___28 = 0;
  __s2_len___28 = 0;
  tmp___557 = 0;
  tmp___562 = 0;
  tmp___563 = 0;
  tmp___564 = 0;
  tmp___565 = 0;
  __s1_len___29 = 0;
  __s2_len___29 = 0;
  tmp___575 = 0;
  tmp___580 = 0;
  tmp___581 = 0;
  tmp___582 = 0;
  tmp___583 = 0;
  __s1_len___30 = 0;
  __s2_len___30 = 0;
  tmp___593 = 0;
  tmp___598 = 0;
  tmp___599 = 0;
  tmp___600 = 0;
  tmp___601 = 0;
  __s1_len___31 = 0;
  __s2_len___31 = 0;
  tmp___611 = 0;
  tmp___616 = 0;
  tmp___617 = 0;
  tmp___618 = 0;
  tmp___619 = 0;
  __s1_len___32 = 0;
  __s2_len___32 = 0;
  tmp___629 = 0;
  tmp___634 = 0;
  tmp___635 = 0;
  tmp___636 = 0;
  tmp___637 = 0;
  __s1_len___33 = 0;
  __s2_len___33 = 0;
  tmp___647 = 0;
  tmp___652 = 0;
  tmp___653 = 0;
  tmp___654 = 0;
  tmp___655 = 0;
  __s1_len___34 = 0;
  __s2_len___34 = 0;
  tmp___665 = 0;
  tmp___670 = 0;
  tmp___671 = 0;
  tmp___672 = 0;
  tmp___673 = 0;
  tmp___674 = 0;
  __s1_len___35 = 0;
  __s2_len___35 = 0;
  tmp___684 = 0;
  tmp___689 = 0;
  tmp___690 = 0;
  tmp___691 = 0;
  tmp___692 = 0;
  __s1_len___36 = 0;
  __s2_len___36 = 0;
  tmp___702 = 0;
  tmp___707 = 0;
  tmp___708 = 0;
  tmp___709 = 0;
  tmp___710 = 0;
  __s1_len___37 = 0;
  __s2_len___37 = 0;
  tmp___720 = 0;
  tmp___725 = 0;
  tmp___726 = 0;
  tmp___727 = 0;
  tmp___728 = 0;
  __s1_len___38 = 0;
  __s2_len___38 = 0;
  tmp___738 = 0;
  tmp___743 = 0;
  tmp___744 = 0;
  tmp___745 = 0;
  tmp___746 = 0;
  __s1_len___39 = 0;
  __s2_len___39 = 0;
  tmp___756 = 0;
  tmp___761 = 0;
  tmp___762 = 0;
  tmp___763 = 0;
  tmp___764 = 0;
  __s1_len___40 = 0;
  __s2_len___40 = 0;
  tmp___774 = 0;
  tmp___779 = 0;
  tmp___780 = 0;
  tmp___781 = 0;
  tmp___782 = 0;
  __s1_len___41 = 0;
  __s2_len___41 = 0;
  tmp___792 = 0;
  tmp___797 = 0;
  tmp___798 = 0;
  tmp___799 = 0;
  tmp___800 = 0;
  __s1_len___42 = 0;
  __s2_len___42 = 0;
  tmp___810 = 0;
  tmp___815 = 0;
  tmp___816 = 0;
  tmp___817 = 0;
  tmp___818 = 0;
  __s1_len___43 = 0;
  __s2_len___43 = 0;
  tmp___828 = 0;
  tmp___833 = 0;
  tmp___834 = 0;
  tmp___835 = 0;
  tmp___836 = 0;
  __s1_len___44 = 0;
  __s2_len___44 = 0;
  tmp___846 = 0;
  tmp___851 = 0;
  tmp___852 = 0;
  tmp___853 = 0;
  tmp___854 = 0;
  __s1_len___45 = 0;
  __s2_len___45 = 0;
  tmp___864 = 0;
  tmp___869 = 0;
  tmp___870 = 0;
  tmp___871 = 0;
  tmp___872 = 0;
  __s1_len___46 = 0;
  __s2_len___46 = 0;
  tmp___882 = 0;
  tmp___887 = 0;
  tmp___888 = 0;
  tmp___889 = 0;
  tmp___890 = 0;
  tmp___891 = 0;
  tmp___892 = 0;
  tmp___893 = 0;
  __s1_len___47 = 0;
  __s2_len___47 = 0;
  tmp___903 = 0;
  tmp___908 = 0;
  tmp___909 = 0;
  tmp___910 = 0;
  tmp___911 = 0;
  __s1_len___48 = 0;
  __s2_len___48 = 0;
  tmp___921 = 0;
  tmp___926 = 0;
  tmp___927 = 0;
  tmp___928 = 0;
  tmp___929 = 0;
  __s1_len___49 = 0;
  __s2_len___49 = 0;
  tmp___939 = 0;
  tmp___944 = 0;
  tmp___945 = 0;
  tmp___946 = 0;
  tmp___947 = 0;
  __s1_len___50 = 0;
  __s2_len___50 = 0;
  tmp___957 = 0;
  tmp___962 = 0;
  tmp___963 = 0;
  tmp___964 = 0;
  tmp___965 = 0;
  __s1_len___51 = 0;
  __s2_len___51 = 0;
  tmp___975 = 0;
  tmp___980 = 0;
  tmp___981 = 0;
  tmp___982 = 0;
  tmp___983 = 0;
  tmp___984 = 0;
  __s1_len___52 = 0;
  __s2_len___52 = 0;
  tmp___994 = 0;
  tmp___999 = 0;
  tmp___1000 = 0;
  tmp___1001 = 0;
  tmp___1002 = 0;
  __s1_len___53 = 0;
  __s2_len___53 = 0;
  tmp___1012 = 0;
  tmp___1017 = 0;
  tmp___1018 = 0;
  tmp___1019 = 0;
  tmp___1020 = 0;
  tmp___1021 = 0;
  tmp___1022 = 0;
  __s1_len___54 = 0;
  __s2_len___54 = 0;
  tmp___1032 = 0;
  tmp___1037 = 0;
  tmp___1038 = 0;
  tmp___1039 = 0;
  tmp___1040 = 0;
  __s1_len___55 = 0;
  __s2_len___55 = 0;
  tmp___1050 = 0;
  tmp___1055 = 0;
  tmp___1056 = 0;
  tmp___1057 = 0;
  tmp___1058 = 0;
  __s1_len___56 = 0;
  __s2_len___56 = 0;
  tmp___1068 = 0;
  tmp___1073 = 0;
  tmp___1074 = 0;
  tmp___1075 = 0;
  tmp___1076 = 0;
  __s1_len___57 = 0;
  __s2_len___57 = 0;
  tmp___1086 = 0;
  tmp___1091 = 0;
  tmp___1092 = 0;
  tmp___1093 = 0;
  tmp___1094 = 0;
  tmp___1095 = 0;
  __s1_len___58 = 0;
  __s2_len___58 = 0;
  tmp___1105 = 0;
  tmp___1110 = 0;
  tmp___1111 = 0;
  tmp___1112 = 0;
  tmp___1113 = 0;
  tmp___1114 = 0;
  __s1_len___59 = 0;
  __s2_len___59 = 0;
  tmp___1124 = 0;
  tmp___1129 = 0;
  tmp___1130 = 0;
  tmp___1131 = 0;
  tmp___1132 = 0;
  __s1_len___60 = 0;
  __s2_len___60 = 0;
  tmp___1142 = 0;
  tmp___1147 = 0;
  tmp___1148 = 0;
  tmp___1149 = 0;
  tmp___1150 = 0;
  __s1_len___61 = 0;
  __s2_len___61 = 0;
  tmp___1160 = 0;
  tmp___1165 = 0;
  tmp___1166 = 0;
  tmp___1167 = 0;
  tmp___1168 = 0;
  __s1_len___62 = 0;
  __s2_len___62 = 0;
  tmp___1178 = 0;
  tmp___1183 = 0;
  tmp___1184 = 0;
  tmp___1185 = 0;
  tmp___1186 = 0;
  __s1_len___63 = 0;
  __s2_len___63 = 0;
  tmp___1196 = 0;
  tmp___1201 = 0;
  tmp___1202 = 0;
  tmp___1203 = 0;
  tmp___1204 = 0;
  __s1_len___64 = 0;
  __s2_len___64 = 0;
  tmp___1214 = 0;
  tmp___1219 = 0;
  tmp___1220 = 0;
  tmp___1221 = 0;
  tmp___1222 = 0;
  __s1_len___65 = 0;
  __s2_len___65 = 0;
  tmp___1232 = 0;
  tmp___1237 = 0;
  tmp___1238 = 0;
  tmp___1239 = 0;
  tmp___1240 = 0;
  __s1_len___66 = 0;
  __s2_len___66 = 0;
  tmp___1250 = 0;
  tmp___1255 = 0;
  tmp___1256 = 0;
  tmp___1257 = 0;
  tmp___1258 = 0;
  __s1_len___67 = 0;
  __s2_len___67 = 0;
  tmp___1268 = 0;
  tmp___1273 = 0;
  tmp___1274 = 0;
  tmp___1275 = 0;
  tmp___1276 = 0;
  __s1_len___68 = 0;
  __s2_len___68 = 0;
  tmp___1286 = 0;
  tmp___1291 = 0;
  tmp___1292 = 0;
  tmp___1293 = 0;
  tmp___1294 = 0;
  __s1_len___69 = 0;
  __s2_len___69 = 0;
  tmp___1304 = 0;
  tmp___1309 = 0;
  tmp___1310 = 0;
  tmp___1311 = 0;
  tmp___1312 = 0;
  __s1_len___70 = 0;
  __s2_len___70 = 0;
  tmp___1322 = 0;
  tmp___1327 = 0;
  tmp___1328 = 0;
  tmp___1329 = 0;
  tmp___1330 = 0;
  __s1_len___71 = 0;
  __s2_len___71 = 0;
  tmp___1340 = 0;
  tmp___1345 = 0;
  tmp___1346 = 0;
  tmp___1347 = 0;
  tmp___1348 = 0;
  __s1_len___72 = 0;
  __s2_len___72 = 0;
  tmp___1358 = 0;
  tmp___1363 = 0;
  tmp___1364 = 0;
  tmp___1365 = 0;
  tmp___1366 = 0;
  tmp___1367 = 0;
  __s1_len___73 = 0;
  __s2_len___73 = 0;
  tmp___1377 = 0;
  tmp___1382 = 0;
  tmp___1383 = 0;
  tmp___1384 = 0;
  tmp___1385 = 0;
  tmp___1386 = 0;
  __s1_len___74 = 0;
  __s2_len___74 = 0;
  tmp___1396 = 0;
  tmp___1401 = 0;
  tmp___1402 = 0;
  tmp___1403 = 0;
  tmp___1404 = 0;
  __s1_len___75 = 0;
  __s2_len___75 = 0;
  tmp___1414 = 0;
  tmp___1419 = 0;
  tmp___1420 = 0;
  tmp___1421 = 0;
  tmp___1422 = 0;
  __s1_len___76 = 0;
  __s2_len___76 = 0;
  tmp___1432 = 0;
  tmp___1437 = 0;
  tmp___1438 = 0;
  tmp___1439 = 0;
  tmp___1440 = 0;
  __s1_len___77 = 0;
  __s2_len___77 = 0;
  tmp___1450 = 0;
  tmp___1455 = 0;
  tmp___1456 = 0;
  tmp___1457 = 0;
  tmp___1458 = 0;
  __s1_len___78 = 0;
  __s2_len___78 = 0;
  tmp___1468 = 0;
  tmp___1473 = 0;
  tmp___1474 = 0;
  tmp___1475 = 0;
  tmp___1476 = 0;
  __s1_len___79 = 0;
  __s2_len___79 = 0;
  tmp___1486 = 0;
  tmp___1491 = 0;
  tmp___1492 = 0;
  tmp___1493 = 0;
  tmp___1494 = 0;
  __s1_len___80 = 0;
  __s2_len___80 = 0;
  tmp___1504 = 0;
  tmp___1509 = 0;
  tmp___1510 = 0;
  tmp___1511 = 0;
  tmp___1512 = 0;
  tmp___1513 = 0;
  __s1_len___81 = 0;
  __s2_len___81 = 0;
  tmp___1523 = 0;
  tmp___1528 = 0;
  tmp___1529 = 0;
  tmp___1530 = 0;
  tmp___1531 = 0;
  __s1_len___82 = 0;
  __s2_len___82 = 0;
  tmp___1541 = 0;
  tmp___1546 = 0;
  tmp___1547 = 0;
  tmp___1548 = 0;
  tmp___1549 = 0;
  __s1_len___83 = 0;
  __s2_len___83 = 0;
  tmp___1559 = 0;
  tmp___1564 = 0;
  tmp___1565 = 0;
  tmp___1566 = 0;
  tmp___1567 = 0;
  __s1_len___84 = 0;
  __s2_len___84 = 0;
  tmp___1577 = 0;
  tmp___1582 = 0;
  tmp___1583 = 0;
  tmp___1584 = 0;
  tmp___1585 = 0;
  __s1_len___85 = 0;
  __s2_len___85 = 0;
  tmp___1595 = 0;
  tmp___1600 = 0;
  tmp___1601 = 0;
  tmp___1602 = 0;
  tmp___1603 = 0;
  __s1_len___86 = 0;
  __s2_len___86 = 0;
  tmp___1613 = 0;
  tmp___1618 = 0;
  tmp___1619 = 0;
  tmp___1620 = 0;
  tmp___1621 = 0;
  __s1_len___87 = 0;
  __s2_len___87 = 0;
  tmp___1631 = 0;
  tmp___1636 = 0;
  tmp___1637 = 0;
  tmp___1638 = 0;
  tmp___1639 = 0;
  __s1_len___88 = 0;
  __s2_len___88 = 0;
  tmp___1649 = 0;
  tmp___1654 = 0;
  tmp___1655 = 0;
  tmp___1656 = 0;
  tmp___1657 = 0;
  __s1_len___89 = 0;
  __s2_len___89 = 0;
  tmp___1667 = 0;
  tmp___1672 = 0;
  tmp___1673 = 0;
  tmp___1674 = 0;
  tmp___1675 = 0;
  __s1_len___90 = 0;
  __s2_len___90 = 0;
  tmp___1685 = 0;
  tmp___1690 = 0;
  tmp___1691 = 0;
  tmp___1692 = 0;
  tmp___1693 = 0;
  __s1_len___91 = 0;
  __s2_len___91 = 0;
  tmp___1703 = 0;
  tmp___1708 = 0;
  tmp___1709 = 0;
  tmp___1710 = 0;
  tmp___1711 = 0;
  __s1_len___92 = 0;
  __s2_len___92 = 0;
  tmp___1721 = 0;
  tmp___1726 = 0;
  tmp___1727 = 0;
  tmp___1728 = 0;
  tmp___1729 = 0;
  tmp___1730 = 0;
  __s1_len___93 = 0;
  __s2_len___93 = 0;
  tmp___1740 = 0;
  tmp___1745 = 0;
  tmp___1746 = 0;
  tmp___1747 = 0;
  tmp___1748 = 0;
  arg = *(argv + 0);
  hexsz = (unsigned int )(the_repository->hash_algo)->hexsz;
  if (0) {
    {
    tmp___15 = __dyc_funcallvar_1;
    __s1_len = (unsigned long )tmp___15;
    tmp___16 = __dyc_funcallvar_2;
    __s2_len = (unsigned long )tmp___16;
    }
    if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0:  
        if (! ((unsigned long )((void const   *)("--all" + 1)) - (unsigned long )((void const   *)"--all") == 1UL)) {
          tmp___17 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___17 = 1;
          } else {
            tmp___17 = 0;
          }
        }
      } else {
        tmp___17 = 0;
      }
    }
    if (tmp___17) {
      {
      tmp___9 = __dyc_funcallvar_3;
      }
    } else {
      {
      tmp___14 = __dyc_funcallvar_4;
      tmp___9 = tmp___14;
      }
    }
  } else {
    {
    tmp___14 = __dyc_funcallvar_5;
    tmp___9 = tmp___14;
    }
  }
  if (tmp___9) {
    if (0) {
      {
      tmp___33 = __dyc_funcallvar_6;
      __s1_len___0 = (unsigned long )tmp___33;
      tmp___34 = __dyc_funcallvar_7;
      __s2_len___0 = (unsigned long )tmp___34;
      }
      if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
        goto _L___2;
      } else {
        if (__s1_len___0 >= 4UL) {
          _L___2:  
          if (! ((unsigned long )((void const   *)("--branches" + 1)) - (unsigned long )((void const   *)"--branches") == 1UL)) {
            tmp___35 = 1;
          } else {
            if (__s2_len___0 >= 4UL) {
              tmp___35 = 1;
            } else {
              tmp___35 = 0;
            }
          }
        } else {
          tmp___35 = 0;
        }
      }
      if (tmp___35) {
        {
        tmp___27 = __dyc_funcallvar_8;
        }
      } else {
        {
        tmp___32 = __dyc_funcallvar_9;
        tmp___27 = tmp___32;
        }
      }
    } else {
      {
      tmp___32 = __dyc_funcallvar_10;
      tmp___27 = tmp___32;
      }
    }
    if (tmp___27) {
      if (0) {
        {
        tmp___51 = __dyc_funcallvar_11;
        __s1_len___1 = (unsigned long )tmp___51;
        tmp___52 = __dyc_funcallvar_12;
        __s2_len___1 = (unsigned long )tmp___52;
        }
        if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
          goto _L___4;
        } else {
          if (__s1_len___1 >= 4UL) {
            _L___4:  
            if (! ((unsigned long )((void const   *)("--tags" + 1)) - (unsigned long )((void const   *)"--tags") == 1UL)) {
              tmp___53 = 1;
            } else {
              if (__s2_len___1 >= 4UL) {
                tmp___53 = 1;
              } else {
                tmp___53 = 0;
              }
            }
          } else {
            tmp___53 = 0;
          }
        }
        if (tmp___53) {
          {
          tmp___45 = __dyc_funcallvar_13;
          }
        } else {
          {
          tmp___50 = __dyc_funcallvar_14;
          tmp___45 = tmp___50;
          }
        }
      } else {
        {
        tmp___50 = __dyc_funcallvar_15;
        tmp___45 = tmp___50;
        }
      }
      if (tmp___45) {
        if (0) {
          {
          tmp___69 = __dyc_funcallvar_16;
          __s1_len___2 = (unsigned long )tmp___69;
          tmp___70 = __dyc_funcallvar_17;
          __s2_len___2 = (unsigned long )tmp___70;
          }
          if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
            goto _L___6;
          } else {
            if (__s1_len___2 >= 4UL) {
              _L___6:  
              if (! ((unsigned long )((void const   *)("--remotes" + 1)) - (unsigned long )((void const   *)"--remotes") == 1UL)) {
                tmp___71 = 1;
              } else {
                if (__s2_len___2 >= 4UL) {
                  tmp___71 = 1;
                } else {
                  tmp___71 = 0;
                }
              }
            } else {
              tmp___71 = 0;
            }
          }
          if (tmp___71) {
            {
            tmp___63 = __dyc_funcallvar_18;
            }
          } else {
            {
            tmp___68 = __dyc_funcallvar_19;
            tmp___63 = tmp___68;
            }
          }
        } else {
          {
          tmp___68 = __dyc_funcallvar_20;
          tmp___63 = tmp___68;
          }
        }
        if (tmp___63) {
          if (0) {
            {
            tmp___87 = __dyc_funcallvar_21;
            __s1_len___3 = (unsigned long )tmp___87;
            tmp___88 = __dyc_funcallvar_22;
            __s2_len___3 = (unsigned long )tmp___88;
            }
            if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
              goto _L___8;
            } else {
              if (__s1_len___3 >= 4UL) {
                _L___8:  
                if (! ((unsigned long )((void const   *)("--reflog" + 1)) - (unsigned long )((void const   *)"--reflog") == 1UL)) {
                  tmp___89 = 1;
                } else {
                  if (__s2_len___3 >= 4UL) {
                    tmp___89 = 1;
                  } else {
                    tmp___89 = 0;
                  }
                }
              } else {
                tmp___89 = 0;
              }
            }
            if (tmp___89) {
              {
              tmp___81 = __dyc_funcallvar_23;
              }
            } else {
              {
              tmp___86 = __dyc_funcallvar_24;
              tmp___81 = tmp___86;
              }
            }
          } else {
            {
            tmp___86 = __dyc_funcallvar_25;
            tmp___81 = tmp___86;
            }
          }
          if (tmp___81) {
            if (0) {
              {
              tmp___105 = __dyc_funcallvar_26;
              __s1_len___4 = (unsigned long )tmp___105;
              tmp___106 = __dyc_funcallvar_27;
              __s2_len___4 = (unsigned long )tmp___106;
              }
              if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                goto _L___10;
              } else {
                if (__s1_len___4 >= 4UL) {
                  _L___10:  
                  if (! ((unsigned long )((void const   *)("--not" + 1)) - (unsigned long )((void const   *)"--not") == 1UL)) {
                    tmp___107 = 1;
                  } else {
                    if (__s2_len___4 >= 4UL) {
                      tmp___107 = 1;
                    } else {
                      tmp___107 = 0;
                    }
                  }
                } else {
                  tmp___107 = 0;
                }
              }
              if (tmp___107) {
                {
                tmp___99 = __dyc_funcallvar_28;
                }
              } else {
                {
                tmp___104 = __dyc_funcallvar_29;
                tmp___99 = tmp___104;
                }
              }
            } else {
              {
              tmp___104 = __dyc_funcallvar_30;
              tmp___99 = tmp___104;
              }
            }
            if (tmp___99) {
              if (0) {
                {
                tmp___123 = __dyc_funcallvar_31;
                __s1_len___5 = (unsigned long )tmp___123;
                tmp___124 = __dyc_funcallvar_32;
                __s2_len___5 = (unsigned long )tmp___124;
                }
                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                  goto _L___12;
                } else {
                  if (__s1_len___5 >= 4UL) {
                    _L___12:  
                    if (! ((unsigned long )((void const   *)("--no-walk" + 1)) - (unsigned long )((void const   *)"--no-walk") == 1UL)) {
                      tmp___125 = 1;
                    } else {
                      if (__s2_len___5 >= 4UL) {
                        tmp___125 = 1;
                      } else {
                        tmp___125 = 0;
                      }
                    }
                  } else {
                    tmp___125 = 0;
                  }
                }
                if (tmp___125) {
                  {
                  tmp___117 = __dyc_funcallvar_33;
                  }
                } else {
                  {
                  tmp___122 = __dyc_funcallvar_34;
                  tmp___117 = tmp___122;
                  }
                }
              } else {
                {
                tmp___122 = __dyc_funcallvar_35;
                tmp___117 = tmp___122;
                }
              }
              if (tmp___117) {
                if (0) {
                  {
                  tmp___141 = __dyc_funcallvar_36;
                  __s1_len___6 = (unsigned long )tmp___141;
                  tmp___142 = __dyc_funcallvar_37;
                  __s2_len___6 = (unsigned long )tmp___142;
                  }
                  if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                    goto _L___14;
                  } else {
                    if (__s1_len___6 >= 4UL) {
                      _L___14:  
                      if (! ((unsigned long )((void const   *)("--do-walk" + 1)) - (unsigned long )((void const   *)"--do-walk") == 1UL)) {
                        tmp___143 = 1;
                      } else {
                        if (__s2_len___6 >= 4UL) {
                          tmp___143 = 1;
                        } else {
                          tmp___143 = 0;
                        }
                      }
                    } else {
                      tmp___143 = 0;
                    }
                  }
                  if (tmp___143) {
                    {
                    tmp___135 = __dyc_funcallvar_38;
                    }
                  } else {
                    {
                    tmp___140 = __dyc_funcallvar_39;
                    tmp___135 = tmp___140;
                    }
                  }
                } else {
                  {
                  tmp___140 = __dyc_funcallvar_40;
                  tmp___135 = tmp___140;
                  }
                }
                if (tmp___135) {
                  if (0) {
                    {
                    tmp___159 = __dyc_funcallvar_41;
                    __s1_len___7 = (unsigned long )tmp___159;
                    tmp___160 = __dyc_funcallvar_42;
                    __s2_len___7 = (unsigned long )tmp___160;
                    }
                    if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                      goto _L___16;
                    } else {
                      if (__s1_len___7 >= 4UL) {
                        _L___16:  
                        if (! ((unsigned long )((void const   *)("--bisect" + 1)) - (unsigned long )((void const   *)"--bisect") == 1UL)) {
                          tmp___161 = 1;
                        } else {
                          if (__s2_len___7 >= 4UL) {
                            tmp___161 = 1;
                          } else {
                            tmp___161 = 0;
                          }
                        }
                      } else {
                        tmp___161 = 0;
                      }
                    }
                    if (tmp___161) {
                      {
                      tmp___153 = __dyc_funcallvar_43;
                      }
                    } else {
                      {
                      tmp___158 = __dyc_funcallvar_44;
                      tmp___153 = tmp___158;
                      }
                    }
                  } else {
                    {
                    tmp___158 = __dyc_funcallvar_45;
                    tmp___153 = tmp___158;
                    }
                  }
                  if (tmp___153) {
                    {
                    tmp___162 = __dyc_funcallvar_46;
                    }
                    if (tmp___162) {
                      tmp = *unkc;
                      (*unkc) ++;
                      *(unkv + tmp) = arg;
                      goto __dyc_dummy_label;
                    } else {
                      if (0) {
                        {
                        tmp___178 = __dyc_funcallvar_47;
                        __s1_len___8 = (unsigned long )tmp___178;
                        tmp___179 = __dyc_funcallvar_48;
                        __s2_len___8 = (unsigned long )tmp___179;
                        }
                        if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                          goto _L___18;
                        } else {
                          if (__s1_len___8 >= 4UL) {
                            _L___18:  
                            if (! ((unsigned long )((void const   *)("--indexed-objects" + 1)) - (unsigned long )((void const   *)"--indexed-objects") == 1UL)) {
                              tmp___180 = 1;
                            } else {
                              if (__s2_len___8 >= 4UL) {
                                tmp___180 = 1;
                              } else {
                                tmp___180 = 0;
                              }
                            }
                          } else {
                            tmp___180 = 0;
                          }
                        }
                        if (tmp___180) {
                          {
                          tmp___172 = __dyc_funcallvar_49;
                          }
                        } else {
                          {
                          tmp___177 = __dyc_funcallvar_50;
                          tmp___172 = tmp___177;
                          }
                        }
                      } else {
                        {
                        tmp___177 = __dyc_funcallvar_51;
                        tmp___172 = tmp___177;
                        }
                      }
                      if (tmp___172) {
                        if (0) {
                          {
                          tmp___196 = __dyc_funcallvar_52;
                          __s1_len___9 = (unsigned long )tmp___196;
                          tmp___197 = __dyc_funcallvar_53;
                          __s2_len___9 = (unsigned long )tmp___197;
                          }
                          if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                            goto _L___20;
                          } else {
                            if (__s1_len___9 >= 4UL) {
                              _L___20:  
                              if (! ((unsigned long )((void const   *)("--alternate-refs" + 1)) - (unsigned long )((void const   *)"--alternate-refs") == 1UL)) {
                                tmp___198 = 1;
                              } else {
                                if (__s2_len___9 >= 4UL) {
                                  tmp___198 = 1;
                                } else {
                                  tmp___198 = 0;
                                }
                              }
                            } else {
                              tmp___198 = 0;
                            }
                          }
                          if (tmp___198) {
                            {
                            tmp___190 = __dyc_funcallvar_54;
                            }
                          } else {
                            {
                            tmp___195 = __dyc_funcallvar_55;
                            tmp___190 = tmp___195;
                            }
                          }
                        } else {
                          {
                          tmp___195 = __dyc_funcallvar_56;
                          tmp___190 = tmp___195;
                          }
                        }
                        if (tmp___190) {
                          {
                          tmp___199 = __dyc_funcallvar_57;
                          }
                          if (tmp___199) {
                            tmp = *unkc;
                            (*unkc) ++;
                            *(unkv + tmp) = arg;
                            goto __dyc_dummy_label;
                          } else {
                            {
                            tmp___200 = __dyc_funcallvar_58;
                            }
                            if (tmp___200) {
                              tmp = *unkc;
                              (*unkc) ++;
                              *(unkv + tmp) = arg;
                              goto __dyc_dummy_label;
                            } else {
                              {
                              tmp___201 = __dyc_funcallvar_59;
                              }
                              if (tmp___201) {
                                tmp = *unkc;
                                (*unkc) ++;
                                *(unkv + tmp) = arg;
                                goto __dyc_dummy_label;
                              } else {
                                {
                                tmp___202 = __dyc_funcallvar_60;
                                }
                                if (tmp___202) {
                                  tmp = *unkc;
                                  (*unkc) ++;
                                  *(unkv + tmp) = arg;
                                  goto __dyc_dummy_label;
                                } else {
                                  {
                                  tmp___203 = __dyc_funcallvar_61;
                                  }
                                  if (tmp___203) {
                                    tmp = *unkc;
                                    (*unkc) ++;
                                    *(unkv + tmp) = arg;
                                    goto __dyc_dummy_label;
                                  }
                                }
                              }
                            }
                          }
                        } else {
                          tmp = *unkc;
                          (*unkc) ++;
                          *(unkv + tmp) = arg;
                          goto __dyc_dummy_label;
                        }
                      } else {
                        tmp = *unkc;
                        (*unkc) ++;
                        *(unkv + tmp) = arg;
                        goto __dyc_dummy_label;
                      }
                    }
                  } else {
                    tmp = *unkc;
                    (*unkc) ++;
                    *(unkv + tmp) = arg;
                    goto __dyc_dummy_label;
                  }
                } else {
                  tmp = *unkc;
                  (*unkc) ++;
                  *(unkv + tmp) = arg;
                  goto __dyc_dummy_label;
                }
              } else {
                tmp = *unkc;
                (*unkc) ++;
                *(unkv + tmp) = arg;
                goto __dyc_dummy_label;
              }
            } else {
              tmp = *unkc;
              (*unkc) ++;
              *(unkv + tmp) = arg;
              goto __dyc_dummy_label;
            }
          } else {
            tmp = *unkc;
            (*unkc) ++;
            *(unkv + tmp) = arg;
            goto __dyc_dummy_label;
          }
        } else {
          tmp = *unkc;
          (*unkc) ++;
          *(unkv + tmp) = arg;
          goto __dyc_dummy_label;
        }
      } else {
        tmp = *unkc;
        (*unkc) ++;
        *(unkv + tmp) = arg;
        goto __dyc_dummy_label;
      }
    } else {
      tmp = *unkc;
      (*unkc) ++;
      *(unkv + tmp) = arg;
      goto __dyc_dummy_label;
    }
  } else {
    tmp = *unkc;
    (*unkc) ++;
    *(unkv + tmp) = arg;
    goto __dyc_dummy_label;
  }
  argcount = __dyc_funcallvar_62;
  if (argcount) {
    {
    tmp___204 = __dyc_funcallvar_63;
    revs->max_count = (int )tmp___204;
    revs->no_walk = 0U;
    }
    goto __dyc_dummy_label;
  } else {
    {
    argcount = __dyc_funcallvar_64;
    }
    if (argcount) {
      {
      tmp___205 = __dyc_funcallvar_65;
      revs->skip_count = (int )tmp___205;
      }
      goto __dyc_dummy_label;
    } else {
      if ((int const   )*arg == 45) {
        if (((int const   )sane_ctype[(unsigned char )*(arg + 1)] & 2) != 0) {
          {
          tmp___206 = __dyc_funcallvar_66;
          }
          if (tmp___206 < 0) {
            {

            }
          } else {
            if (revs->max_count < 0) {
              {

              }
            }
          }
          revs->no_walk = 0U;
        } else {
          goto _L___192;
        }
      } else {
        _L___192:  
        if (0) {
          {
          tmp___1746 = __dyc_funcallvar_67;
          __s1_len___93 = (unsigned long )tmp___1746;
          tmp___1747 = __dyc_funcallvar_68;
          __s2_len___93 = (unsigned long )tmp___1747;
          }
          if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
            goto _L___191;
          } else {
            if (__s1_len___93 >= 4UL) {
              _L___191:  
              if (! ((unsigned long )((void const   *)("-n" + 1)) - (unsigned long )((void const   *)"-n") == 1UL)) {
                tmp___1748 = 1;
              } else {
                if (__s2_len___93 >= 4UL) {
                  tmp___1748 = 1;
                } else {
                  tmp___1748 = 0;
                }
              }
            } else {
              tmp___1748 = 0;
            }
          }
          if (tmp___1748) {
            {
            tmp___1740 = __dyc_funcallvar_69;
            }
          } else {
            {
            tmp___1745 = __dyc_funcallvar_70;
            tmp___1740 = tmp___1745;
            }
          }
        } else {
          {
          tmp___1745 = __dyc_funcallvar_71;
          tmp___1740 = tmp___1745;
          }
        }
        if (tmp___1740) {
          {
          tmp___1730 = __dyc_funcallvar_72;
          }
          if (tmp___1730) {
            {
            tmp___209 = __dyc_funcallvar_73;
            revs->max_count = (int )tmp___209;
            revs->no_walk = 0U;
            }
          } else {
            {
            argcount = __dyc_funcallvar_74;
            }
            if (argcount) {
              {
              tmp___210 = __dyc_funcallvar_75;
              revs->max_age = (unsigned long )tmp___210;
              }
              goto __dyc_dummy_label;
            } else {
              {
              argcount = __dyc_funcallvar_76;
              }
              if (argcount) {
                {
                revs->max_age = __dyc_funcallvar_77;
                }
                goto __dyc_dummy_label;
              } else {
                {
                argcount = __dyc_funcallvar_78;
                }
                if (argcount) {
                  {
                  revs->max_age = __dyc_funcallvar_79;
                  }
                  goto __dyc_dummy_label;
                } else {
                  {
                  argcount = __dyc_funcallvar_80;
                  }
                  if (argcount) {
                    {
                    tmp___211 = __dyc_funcallvar_81;
                    revs->min_age = (unsigned long )tmp___211;
                    }
                    goto __dyc_dummy_label;
                  } else {
                    {
                    argcount = __dyc_funcallvar_82;
                    }
                    if (argcount) {
                      {
                      revs->min_age = __dyc_funcallvar_83;
                      }
                      goto __dyc_dummy_label;
                    } else {
                      {
                      argcount = __dyc_funcallvar_84;
                      }
                      if (argcount) {
                        {
                        revs->min_age = __dyc_funcallvar_85;
                        }
                        goto __dyc_dummy_label;
                      } else {
                        if (0) {
                          {
                          tmp___1727 = __dyc_funcallvar_86;
                          __s1_len___92 = (unsigned long )tmp___1727;
                          tmp___1728 = __dyc_funcallvar_87;
                          __s2_len___92 = (unsigned long )tmp___1728;
                          }
                          if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                            goto _L___189;
                          } else {
                            if (__s1_len___92 >= 4UL) {
                              _L___189:  
                              if (! ((unsigned long )((void const   *)("--first-parent" + 1)) - (unsigned long )((void const   *)"--first-parent") == 1UL)) {
                                tmp___1729 = 1;
                              } else {
                                if (__s2_len___92 >= 4UL) {
                                  tmp___1729 = 1;
                                } else {
                                  tmp___1729 = 0;
                                }
                              }
                            } else {
                              tmp___1729 = 0;
                            }
                          }
                          if (tmp___1729) {
                            {
                            tmp___1721 = __dyc_funcallvar_88;
                            }
                          } else {
                            {
                            tmp___1726 = __dyc_funcallvar_89;
                            tmp___1721 = tmp___1726;
                            }
                          }
                        } else {
                          {
                          tmp___1726 = __dyc_funcallvar_90;
                          tmp___1721 = tmp___1726;
                          }
                        }
                        if (tmp___1721) {
                          if (0) {
                            {
                            tmp___1709 = __dyc_funcallvar_91;
                            __s1_len___91 = (unsigned long )tmp___1709;
                            tmp___1710 = __dyc_funcallvar_92;
                            __s2_len___91 = (unsigned long )tmp___1710;
                            }
                            if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                              goto _L___187;
                            } else {
                              if (__s1_len___91 >= 4UL) {
                                _L___187:  
                                if (! ((unsigned long )((void const   *)("--ancestry-path" + 1)) - (unsigned long )((void const   *)"--ancestry-path") == 1UL)) {
                                  tmp___1711 = 1;
                                } else {
                                  if (__s2_len___91 >= 4UL) {
                                    tmp___1711 = 1;
                                  } else {
                                    tmp___1711 = 0;
                                  }
                                }
                              } else {
                                tmp___1711 = 0;
                              }
                            }
                            if (tmp___1711) {
                              {
                              tmp___1703 = __dyc_funcallvar_93;
                              }
                            } else {
                              {
                              tmp___1708 = __dyc_funcallvar_94;
                              tmp___1703 = tmp___1708;
                              }
                            }
                          } else {
                            {
                            tmp___1708 = __dyc_funcallvar_95;
                            tmp___1703 = tmp___1708;
                            }
                          }
                          if (tmp___1703) {
                            if (0) {
                              {
                              tmp___1673 = __dyc_funcallvar_96;
                              __s1_len___89 = (unsigned long )tmp___1673;
                              tmp___1674 = __dyc_funcallvar_97;
                              __s2_len___89 = (unsigned long )tmp___1674;
                              }
                              if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                goto _L___183;
                              } else {
                                if (__s1_len___89 >= 4UL) {
                                  _L___183:  
                                  if (! ((unsigned long )((void const   *)("-g" + 1)) - (unsigned long )((void const   *)"-g") == 1UL)) {
                                    tmp___1675 = 1;
                                  } else {
                                    if (__s2_len___89 >= 4UL) {
                                      tmp___1675 = 1;
                                    } else {
                                      tmp___1675 = 0;
                                    }
                                  }
                                } else {
                                  tmp___1675 = 0;
                                }
                              }
                              if (tmp___1675) {
                                {
                                tmp___1667 = __dyc_funcallvar_98;
                                }
                              } else {
                                {
                                tmp___1672 = __dyc_funcallvar_99;
                                tmp___1667 = tmp___1672;
                                }
                              }
                            } else {
                              {
                              tmp___1672 = __dyc_funcallvar_100;
                              tmp___1667 = tmp___1672;
                              }
                            }
                            if (tmp___1667) {
                              if (0) {
                                {
                                tmp___1691 = __dyc_funcallvar_101;
                                __s1_len___90 = (unsigned long )tmp___1691;
                                tmp___1692 = __dyc_funcallvar_102;
                                __s2_len___90 = (unsigned long )tmp___1692;
                                }
                                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                  goto _L___185;
                                } else {
                                  if (__s1_len___90 >= 4UL) {
                                    _L___185:  
                                    if (! ((unsigned long )((void const   *)("--walk-reflogs" + 1)) - (unsigned long )((void const   *)"--walk-reflogs") == 1UL)) {
                                      tmp___1693 = 1;
                                    } else {
                                      if (__s2_len___90 >= 4UL) {
                                        tmp___1693 = 1;
                                      } else {
                                        tmp___1693 = 0;
                                      }
                                    }
                                  } else {
                                    tmp___1693 = 0;
                                  }
                                }
                                if (tmp___1693) {
                                  {
                                  tmp___1685 = __dyc_funcallvar_103;
                                  }
                                } else {
                                  {
                                  tmp___1690 = __dyc_funcallvar_104;
                                  tmp___1685 = tmp___1690;
                                  }
                                }
                              } else {
                                {
                                tmp___1690 = __dyc_funcallvar_105;
                                tmp___1685 = tmp___1690;
                                }
                              }
                              if (tmp___1685) {
                                if (0) {
                                  {
                                  tmp___1655 = __dyc_funcallvar_106;
                                  __s1_len___88 = (unsigned long )tmp___1655;
                                  tmp___1656 = __dyc_funcallvar_107;
                                  __s2_len___88 = (unsigned long )tmp___1656;
                                  }
                                  if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                    goto _L___181;
                                  } else {
                                    if (__s1_len___88 >= 4UL) {
                                      _L___181:  
                                      if (! ((unsigned long )((void const   *)("--default" + 1)) - (unsigned long )((void const   *)"--default") == 1UL)) {
                                        tmp___1657 = 1;
                                      } else {
                                        if (__s2_len___88 >= 4UL) {
                                          tmp___1657 = 1;
                                        } else {
                                          tmp___1657 = 0;
                                        }
                                      }
                                    } else {
                                      tmp___1657 = 0;
                                    }
                                  }
                                  if (tmp___1657) {
                                    {
                                    tmp___1649 = __dyc_funcallvar_108;
                                    }
                                  } else {
                                    {
                                    tmp___1654 = __dyc_funcallvar_109;
                                    tmp___1649 = tmp___1654;
                                    }
                                  }
                                } else {
                                  {
                                  tmp___1654 = __dyc_funcallvar_110;
                                  tmp___1649 = tmp___1654;
                                  }
                                }
                                if (tmp___1649) {
                                  if (0) {
                                    {
                                    tmp___1637 = __dyc_funcallvar_111;
                                    __s1_len___87 = (unsigned long )tmp___1637;
                                    tmp___1638 = __dyc_funcallvar_112;
                                    __s2_len___87 = (unsigned long )tmp___1638;
                                    }
                                    if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                      goto _L___179;
                                    } else {
                                      if (__s1_len___87 >= 4UL) {
                                        _L___179:  
                                        if (! ((unsigned long )((void const   *)("--merge" + 1)) - (unsigned long )((void const   *)"--merge") == 1UL)) {
                                          tmp___1639 = 1;
                                        } else {
                                          if (__s2_len___87 >= 4UL) {
                                            tmp___1639 = 1;
                                          } else {
                                            tmp___1639 = 0;
                                          }
                                        }
                                      } else {
                                        tmp___1639 = 0;
                                      }
                                    }
                                    if (tmp___1639) {
                                      {
                                      tmp___1631 = __dyc_funcallvar_113;
                                      }
                                    } else {
                                      {
                                      tmp___1636 = __dyc_funcallvar_114;
                                      tmp___1631 = tmp___1636;
                                      }
                                    }
                                  } else {
                                    {
                                    tmp___1636 = __dyc_funcallvar_115;
                                    tmp___1631 = tmp___1636;
                                    }
                                  }
                                  if (tmp___1631) {
                                    if (0) {
                                      {
                                      tmp___1619 = __dyc_funcallvar_116;
                                      __s1_len___86 = (unsigned long )tmp___1619;
                                      tmp___1620 = __dyc_funcallvar_117;
                                      __s2_len___86 = (unsigned long )tmp___1620;
                                      }
                                      if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                        goto _L___177;
                                      } else {
                                        if (__s1_len___86 >= 4UL) {
                                          _L___177:  
                                          if (! ((unsigned long )((void const   *)("--topo-order" + 1)) - (unsigned long )((void const   *)"--topo-order") == 1UL)) {
                                            tmp___1621 = 1;
                                          } else {
                                            if (__s2_len___86 >= 4UL) {
                                              tmp___1621 = 1;
                                            } else {
                                              tmp___1621 = 0;
                                            }
                                          }
                                        } else {
                                          tmp___1621 = 0;
                                        }
                                      }
                                      if (tmp___1621) {
                                        {
                                        tmp___1613 = __dyc_funcallvar_118;
                                        }
                                      } else {
                                        {
                                        tmp___1618 = __dyc_funcallvar_119;
                                        tmp___1613 = tmp___1618;
                                        }
                                      }
                                    } else {
                                      {
                                      tmp___1618 = __dyc_funcallvar_120;
                                      tmp___1613 = tmp___1618;
                                      }
                                    }
                                    if (tmp___1613) {
                                      if (0) {
                                        {
                                        tmp___1601 = __dyc_funcallvar_121;
                                        __s1_len___85 = (unsigned long )tmp___1601;
                                        tmp___1602 = __dyc_funcallvar_122;
                                        __s2_len___85 = (unsigned long )tmp___1602;
                                        }
                                        if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                          goto _L___175;
                                        } else {
                                          if (__s1_len___85 >= 4UL) {
                                            _L___175:  
                                            if (! ((unsigned long )((void const   *)("--simplify-merges" + 1)) - (unsigned long )((void const   *)"--simplify-merges") == 1UL)) {
                                              tmp___1603 = 1;
                                            } else {
                                              if (__s2_len___85 >= 4UL) {
                                                tmp___1603 = 1;
                                              } else {
                                                tmp___1603 = 0;
                                              }
                                            }
                                          } else {
                                            tmp___1603 = 0;
                                          }
                                        }
                                        if (tmp___1603) {
                                          {
                                          tmp___1595 = __dyc_funcallvar_123;
                                          }
                                        } else {
                                          {
                                          tmp___1600 = __dyc_funcallvar_124;
                                          tmp___1595 = tmp___1600;
                                          }
                                        }
                                      } else {
                                        {
                                        tmp___1600 = __dyc_funcallvar_125;
                                        tmp___1595 = tmp___1600;
                                        }
                                      }
                                      if (tmp___1595) {
                                        if (0) {
                                          {
                                          tmp___1583 = __dyc_funcallvar_126;
                                          __s1_len___84 = (unsigned long )tmp___1583;
                                          tmp___1584 = __dyc_funcallvar_127;
                                          __s2_len___84 = (unsigned long )tmp___1584;
                                          }
                                          if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                            goto _L___173;
                                          } else {
                                            if (__s1_len___84 >= 4UL) {
                                              _L___173:  
                                              if (! ((unsigned long )((void const   *)("--simplify-by-decoration" + 1)) - (unsigned long )((void const   *)"--simplify-by-decoration") == 1UL)) {
                                                tmp___1585 = 1;
                                              } else {
                                                if (__s2_len___84 >= 4UL) {
                                                  tmp___1585 = 1;
                                                } else {
                                                  tmp___1585 = 0;
                                                }
                                              }
                                            } else {
                                              tmp___1585 = 0;
                                            }
                                          }
                                          if (tmp___1585) {
                                            {
                                            tmp___1577 = __dyc_funcallvar_128;
                                            }
                                          } else {
                                            {
                                            tmp___1582 = __dyc_funcallvar_129;
                                            tmp___1577 = tmp___1582;
                                            }
                                          }
                                        } else {
                                          {
                                          tmp___1582 = __dyc_funcallvar_130;
                                          tmp___1577 = tmp___1582;
                                          }
                                        }
                                        if (tmp___1577) {
                                          if (0) {
                                            {
                                            tmp___1565 = __dyc_funcallvar_131;
                                            __s1_len___83 = (unsigned long )tmp___1565;
                                            tmp___1566 = __dyc_funcallvar_132;
                                            __s2_len___83 = (unsigned long )tmp___1566;
                                            }
                                            if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                              goto _L___171;
                                            } else {
                                              if (__s1_len___83 >= 4UL) {
                                                _L___171:  
                                                if (! ((unsigned long )((void const   *)("--date-order" + 1)) - (unsigned long )((void const   *)"--date-order") == 1UL)) {
                                                  tmp___1567 = 1;
                                                } else {
                                                  if (__s2_len___83 >= 4UL) {
                                                    tmp___1567 = 1;
                                                  } else {
                                                    tmp___1567 = 0;
                                                  }
                                                }
                                              } else {
                                                tmp___1567 = 0;
                                              }
                                            }
                                            if (tmp___1567) {
                                              {
                                              tmp___1559 = __dyc_funcallvar_133;
                                              }
                                            } else {
                                              {
                                              tmp___1564 = __dyc_funcallvar_134;
                                              tmp___1559 = tmp___1564;
                                              }
                                            }
                                          } else {
                                            {
                                            tmp___1564 = __dyc_funcallvar_135;
                                            tmp___1559 = tmp___1564;
                                            }
                                          }
                                          if (tmp___1559) {
                                            if (0) {
                                              {
                                              tmp___1547 = __dyc_funcallvar_136;
                                              __s1_len___82 = (unsigned long )tmp___1547;
                                              tmp___1548 = __dyc_funcallvar_137;
                                              __s2_len___82 = (unsigned long )tmp___1548;
                                              }
                                              if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                goto _L___169;
                                              } else {
                                                if (__s1_len___82 >= 4UL) {
                                                  _L___169:  
                                                  if (! ((unsigned long )((void const   *)("--author-date-order" + 1)) - (unsigned long )((void const   *)"--author-date-order") == 1UL)) {
                                                    tmp___1549 = 1;
                                                  } else {
                                                    if (__s2_len___82 >= 4UL) {
                                                      tmp___1549 = 1;
                                                    } else {
                                                      tmp___1549 = 0;
                                                    }
                                                  }
                                                } else {
                                                  tmp___1549 = 0;
                                                }
                                              }
                                              if (tmp___1549) {
                                                {
                                                tmp___1541 = __dyc_funcallvar_138;
                                                }
                                              } else {
                                                {
                                                tmp___1546 = __dyc_funcallvar_139;
                                                tmp___1541 = tmp___1546;
                                                }
                                              }
                                            } else {
                                              {
                                              tmp___1546 = __dyc_funcallvar_140;
                                              tmp___1541 = tmp___1546;
                                              }
                                            }
                                            if (tmp___1541) {
                                              if (0) {
                                                {
                                                tmp___1529 = __dyc_funcallvar_141;
                                                __s1_len___81 = (unsigned long )tmp___1529;
                                                tmp___1530 = __dyc_funcallvar_142;
                                                __s2_len___81 = (unsigned long )tmp___1530;
                                                }
                                                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                  goto _L___167;
                                                } else {
                                                  if (__s1_len___81 >= 4UL) {
                                                    _L___167:  
                                                    if (! ((unsigned long )((void const   *)("--early-output" + 1)) - (unsigned long )((void const   *)"--early-output") == 1UL)) {
                                                      tmp___1531 = 1;
                                                    } else {
                                                      if (__s2_len___81 >= 4UL) {
                                                        tmp___1531 = 1;
                                                      } else {
                                                        tmp___1531 = 0;
                                                      }
                                                    }
                                                  } else {
                                                    tmp___1531 = 0;
                                                  }
                                                }
                                                if (tmp___1531) {
                                                  {
                                                  tmp___1523 = __dyc_funcallvar_143;
                                                  }
                                                } else {
                                                  {
                                                  tmp___1528 = __dyc_funcallvar_144;
                                                  tmp___1523 = tmp___1528;
                                                  }
                                                }
                                              } else {
                                                {
                                                tmp___1528 = __dyc_funcallvar_145;
                                                tmp___1523 = tmp___1528;
                                                }
                                              }
                                              if (tmp___1523) {
                                                {
                                                tmp___1513 = __dyc_funcallvar_146;
                                                }
                                                if (tmp___1513) {
                                                  {
                                                  tmp___213 = __dyc_funcallvar_147;
                                                  }
                                                  if (tmp___213 < 0) {
                                                    {

                                                    }
                                                  }
                                                  revs->topo_order = 1U;
                                                } else {
                                                  if (0) {
                                                    {
                                                    tmp___1510 = __dyc_funcallvar_148;
                                                    __s1_len___80 = (unsigned long )tmp___1510;
                                                    tmp___1511 = __dyc_funcallvar_149;
                                                    __s2_len___80 = (unsigned long )tmp___1511;
                                                    }
                                                    if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                      goto _L___165;
                                                    } else {
                                                      if (__s1_len___80 >= 4UL) {
                                                        _L___165:  
                                                        if (! ((unsigned long )((void const   *)("--parents" + 1)) - (unsigned long )((void const   *)"--parents") == 1UL)) {
                                                          tmp___1512 = 1;
                                                        } else {
                                                          if (__s2_len___80 >= 4UL) {
                                                            tmp___1512 = 1;
                                                          } else {
                                                            tmp___1512 = 0;
                                                          }
                                                        }
                                                      } else {
                                                        tmp___1512 = 0;
                                                      }
                                                    }
                                                    if (tmp___1512) {
                                                      {
                                                      tmp___1504 = __dyc_funcallvar_150;
                                                      }
                                                    } else {
                                                      {
                                                      tmp___1509 = __dyc_funcallvar_151;
                                                      tmp___1504 = tmp___1509;
                                                      }
                                                    }
                                                  } else {
                                                    {
                                                    tmp___1509 = __dyc_funcallvar_152;
                                                    tmp___1504 = tmp___1509;
                                                    }
                                                  }
                                                  if (tmp___1504) {
                                                    if (0) {
                                                      {
                                                      tmp___1492 = __dyc_funcallvar_153;
                                                      __s1_len___79 = (unsigned long )tmp___1492;
                                                      tmp___1493 = __dyc_funcallvar_154;
                                                      __s2_len___79 = (unsigned long )tmp___1493;
                                                      }
                                                      if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                        goto _L___163;
                                                      } else {
                                                        if (__s1_len___79 >= 4UL) {
                                                          _L___163:  
                                                          if (! ((unsigned long )((void const   *)("--dense" + 1)) - (unsigned long )((void const   *)"--dense") == 1UL)) {
                                                            tmp___1494 = 1;
                                                          } else {
                                                            if (__s2_len___79 >= 4UL) {
                                                              tmp___1494 = 1;
                                                            } else {
                                                              tmp___1494 = 0;
                                                            }
                                                          }
                                                        } else {
                                                          tmp___1494 = 0;
                                                        }
                                                      }
                                                      if (tmp___1494) {
                                                        {
                                                        tmp___1486 = __dyc_funcallvar_155;
                                                        }
                                                      } else {
                                                        {
                                                        tmp___1491 = __dyc_funcallvar_156;
                                                        tmp___1486 = tmp___1491;
                                                        }
                                                      }
                                                    } else {
                                                      {
                                                      tmp___1491 = __dyc_funcallvar_157;
                                                      tmp___1486 = tmp___1491;
                                                      }
                                                    }
                                                    if (tmp___1486) {
                                                      if (0) {
                                                        {
                                                        tmp___1474 = __dyc_funcallvar_158;
                                                        __s1_len___78 = (unsigned long )tmp___1474;
                                                        tmp___1475 = __dyc_funcallvar_159;
                                                        __s2_len___78 = (unsigned long )tmp___1475;
                                                        }
                                                        if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                          goto _L___161;
                                                        } else {
                                                          if (__s1_len___78 >= 4UL) {
                                                            _L___161:  
                                                            if (! ((unsigned long )((void const   *)("--sparse" + 1)) - (unsigned long )((void const   *)"--sparse") == 1UL)) {
                                                              tmp___1476 = 1;
                                                            } else {
                                                              if (__s2_len___78 >= 4UL) {
                                                                tmp___1476 = 1;
                                                              } else {
                                                                tmp___1476 = 0;
                                                              }
                                                            }
                                                          } else {
                                                            tmp___1476 = 0;
                                                          }
                                                        }
                                                        if (tmp___1476) {
                                                          {
                                                          tmp___1468 = __dyc_funcallvar_160;
                                                          }
                                                        } else {
                                                          {
                                                          tmp___1473 = __dyc_funcallvar_161;
                                                          tmp___1468 = tmp___1473;
                                                          }
                                                        }
                                                      } else {
                                                        {
                                                        tmp___1473 = __dyc_funcallvar_162;
                                                        tmp___1468 = tmp___1473;
                                                        }
                                                      }
                                                      if (tmp___1468) {
                                                        if (0) {
                                                          {
                                                          tmp___1456 = __dyc_funcallvar_163;
                                                          __s1_len___77 = (unsigned long )tmp___1456;
                                                          tmp___1457 = __dyc_funcallvar_164;
                                                          __s2_len___77 = (unsigned long )tmp___1457;
                                                          }
                                                          if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                            goto _L___159;
                                                          } else {
                                                            if (__s1_len___77 >= 4UL) {
                                                              _L___159:  
                                                              if (! ((unsigned long )((void const   *)("--in-commit-order" + 1)) - (unsigned long )((void const   *)"--in-commit-order") == 1UL)) {
                                                                tmp___1458 = 1;
                                                              } else {
                                                                if (__s2_len___77 >= 4UL) {
                                                                  tmp___1458 = 1;
                                                                } else {
                                                                  tmp___1458 = 0;
                                                                }
                                                              }
                                                            } else {
                                                              tmp___1458 = 0;
                                                            }
                                                          }
                                                          if (tmp___1458) {
                                                            {
                                                            tmp___1450 = __dyc_funcallvar_165;
                                                            }
                                                          } else {
                                                            {
                                                            tmp___1455 = __dyc_funcallvar_166;
                                                            tmp___1450 = tmp___1455;
                                                            }
                                                          }
                                                        } else {
                                                          {
                                                          tmp___1455 = __dyc_funcallvar_167;
                                                          tmp___1450 = tmp___1455;
                                                          }
                                                        }
                                                        if (tmp___1450) {
                                                          if (0) {
                                                            {
                                                            tmp___1438 = __dyc_funcallvar_168;
                                                            __s1_len___76 = (unsigned long )tmp___1438;
                                                            tmp___1439 = __dyc_funcallvar_169;
                                                            __s2_len___76 = (unsigned long )tmp___1439;
                                                            }
                                                            if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                              goto _L___157;
                                                            } else {
                                                              if (__s1_len___76 >= 4UL) {
                                                                _L___157:  
                                                                if (! ((unsigned long )((void const   *)("--remove-empty" + 1)) - (unsigned long )((void const   *)"--remove-empty") == 1UL)) {
                                                                  tmp___1440 = 1;
                                                                } else {
                                                                  if (__s2_len___76 >= 4UL) {
                                                                    tmp___1440 = 1;
                                                                  } else {
                                                                    tmp___1440 = 0;
                                                                  }
                                                                }
                                                              } else {
                                                                tmp___1440 = 0;
                                                              }
                                                            }
                                                            if (tmp___1440) {
                                                              {
                                                              tmp___1432 = __dyc_funcallvar_170;
                                                              }
                                                            } else {
                                                              {
                                                              tmp___1437 = __dyc_funcallvar_171;
                                                              tmp___1432 = tmp___1437;
                                                              }
                                                            }
                                                          } else {
                                                            {
                                                            tmp___1437 = __dyc_funcallvar_172;
                                                            tmp___1432 = tmp___1437;
                                                            }
                                                          }
                                                          if (tmp___1432) {
                                                            if (0) {
                                                              {
                                                              tmp___1420 = __dyc_funcallvar_173;
                                                              __s1_len___75 = (unsigned long )tmp___1420;
                                                              tmp___1421 = __dyc_funcallvar_174;
                                                              __s2_len___75 = (unsigned long )tmp___1421;
                                                              }
                                                              if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                goto _L___155;
                                                              } else {
                                                                if (__s1_len___75 >= 4UL) {
                                                                  _L___155:  
                                                                  if (! ((unsigned long )((void const   *)("--merges" + 1)) - (unsigned long )((void const   *)"--merges") == 1UL)) {
                                                                    tmp___1422 = 1;
                                                                  } else {
                                                                    if (__s2_len___75 >= 4UL) {
                                                                      tmp___1422 = 1;
                                                                    } else {
                                                                      tmp___1422 = 0;
                                                                    }
                                                                  }
                                                                } else {
                                                                  tmp___1422 = 0;
                                                                }
                                                              }
                                                              if (tmp___1422) {
                                                                {
                                                                tmp___1414 = __dyc_funcallvar_175;
                                                                }
                                                              } else {
                                                                {
                                                                tmp___1419 = __dyc_funcallvar_176;
                                                                tmp___1414 = tmp___1419;
                                                                }
                                                              }
                                                            } else {
                                                              {
                                                              tmp___1419 = __dyc_funcallvar_177;
                                                              tmp___1414 = tmp___1419;
                                                              }
                                                            }
                                                            if (tmp___1414) {
                                                              if (0) {
                                                                {
                                                                tmp___1402 = __dyc_funcallvar_178;
                                                                __s1_len___74 = (unsigned long )tmp___1402;
                                                                tmp___1403 = __dyc_funcallvar_179;
                                                                __s2_len___74 = (unsigned long )tmp___1403;
                                                                }
                                                                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                  goto _L___153;
                                                                } else {
                                                                  if (__s1_len___74 >= 4UL) {
                                                                    _L___153:  
                                                                    if (! ((unsigned long )((void const   *)("--no-merges" + 1)) - (unsigned long )((void const   *)"--no-merges") == 1UL)) {
                                                                      tmp___1404 = 1;
                                                                    } else {
                                                                      if (__s2_len___74 >= 4UL) {
                                                                        tmp___1404 = 1;
                                                                      } else {
                                                                        tmp___1404 = 0;
                                                                      }
                                                                    }
                                                                  } else {
                                                                    tmp___1404 = 0;
                                                                  }
                                                                }
                                                                if (tmp___1404) {
                                                                  {
                                                                  tmp___1396 = __dyc_funcallvar_180;
                                                                  }
                                                                } else {
                                                                  {
                                                                  tmp___1401 = __dyc_funcallvar_181;
                                                                  tmp___1396 = tmp___1401;
                                                                  }
                                                                }
                                                              } else {
                                                                {
                                                                tmp___1401 = __dyc_funcallvar_182;
                                                                tmp___1396 = tmp___1401;
                                                                }
                                                              }
                                                              if (tmp___1396) {
                                                                {
                                                                tmp___1386 = __dyc_funcallvar_183;
                                                                }
                                                                if (tmp___1386) {
                                                                  {
                                                                  tmp___214 = __dyc_funcallvar_184;
                                                                  revs->min_parents = (int )tmp___214;
                                                                  }
                                                                } else {
                                                                  if (0) {
                                                                    {
                                                                    tmp___1383 = __dyc_funcallvar_185;
                                                                    __s1_len___73 = (unsigned long )tmp___1383;
                                                                    tmp___1384 = __dyc_funcallvar_186;
                                                                    __s2_len___73 = (unsigned long )tmp___1384;
                                                                    }
                                                                    if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                      goto _L___151;
                                                                    } else {
                                                                      if (__s1_len___73 >= 4UL) {
                                                                        _L___151:  
                                                                        if (! ((unsigned long )((void const   *)("--no-min-parents" + 1)) - (unsigned long )((void const   *)"--no-min-parents") == 1UL)) {
                                                                          tmp___1385 = 1;
                                                                        } else {
                                                                          if (__s2_len___73 >= 4UL) {
                                                                            tmp___1385 = 1;
                                                                          } else {
                                                                            tmp___1385 = 0;
                                                                          }
                                                                        }
                                                                      } else {
                                                                        tmp___1385 = 0;
                                                                      }
                                                                    }
                                                                    if (tmp___1385) {
                                                                      {
                                                                      tmp___1377 = __dyc_funcallvar_187;
                                                                      }
                                                                    } else {
                                                                      {
                                                                      tmp___1382 = __dyc_funcallvar_188;
                                                                      tmp___1377 = tmp___1382;
                                                                      }
                                                                    }
                                                                  } else {
                                                                    {
                                                                    tmp___1382 = __dyc_funcallvar_189;
                                                                    tmp___1377 = tmp___1382;
                                                                    }
                                                                  }
                                                                  if (tmp___1377) {
                                                                    {
                                                                    tmp___1367 = __dyc_funcallvar_190;
                                                                    }
                                                                    if (tmp___1367) {
                                                                      {
                                                                      tmp___215 = __dyc_funcallvar_191;
                                                                      revs->max_parents = (int )tmp___215;
                                                                      }
                                                                    } else {
                                                                      if (0) {
                                                                        {
                                                                        tmp___1364 = __dyc_funcallvar_192;
                                                                        __s1_len___72 = (unsigned long )tmp___1364;
                                                                        tmp___1365 = __dyc_funcallvar_193;
                                                                        __s2_len___72 = (unsigned long )tmp___1365;
                                                                        }
                                                                        if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                          goto _L___149;
                                                                        } else {
                                                                          if (__s1_len___72 >= 4UL) {
                                                                            _L___149:  
                                                                            if (! ((unsigned long )((void const   *)("--no-max-parents" + 1)) - (unsigned long )((void const   *)"--no-max-parents") == 1UL)) {
                                                                              tmp___1366 = 1;
                                                                            } else {
                                                                              if (__s2_len___72 >= 4UL) {
                                                                                tmp___1366 = 1;
                                                                              } else {
                                                                                tmp___1366 = 0;
                                                                              }
                                                                            }
                                                                          } else {
                                                                            tmp___1366 = 0;
                                                                          }
                                                                        }
                                                                        if (tmp___1366) {
                                                                          {
                                                                          tmp___1358 = __dyc_funcallvar_194;
                                                                          }
                                                                        } else {
                                                                          {
                                                                          tmp___1363 = __dyc_funcallvar_195;
                                                                          tmp___1358 = tmp___1363;
                                                                          }
                                                                        }
                                                                      } else {
                                                                        {
                                                                        tmp___1363 = __dyc_funcallvar_196;
                                                                        tmp___1358 = tmp___1363;
                                                                        }
                                                                      }
                                                                      if (tmp___1358) {
                                                                        if (0) {
                                                                          {
                                                                          tmp___1346 = __dyc_funcallvar_197;
                                                                          __s1_len___71 = (unsigned long )tmp___1346;
                                                                          tmp___1347 = __dyc_funcallvar_198;
                                                                          __s2_len___71 = (unsigned long )tmp___1347;
                                                                          }
                                                                          if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                            goto _L___147;
                                                                          } else {
                                                                            if (__s1_len___71 >= 4UL) {
                                                                              _L___147:  
                                                                              if (! ((unsigned long )((void const   *)("--boundary" + 1)) - (unsigned long )((void const   *)"--boundary") == 1UL)) {
                                                                                tmp___1348 = 1;
                                                                              } else {
                                                                                if (__s2_len___71 >= 4UL) {
                                                                                  tmp___1348 = 1;
                                                                                } else {
                                                                                  tmp___1348 = 0;
                                                                                }
                                                                              }
                                                                            } else {
                                                                              tmp___1348 = 0;
                                                                            }
                                                                          }
                                                                          if (tmp___1348) {
                                                                            {
                                                                            tmp___1340 = __dyc_funcallvar_199;
                                                                            }
                                                                          } else {
                                                                            {
                                                                            tmp___1345 = __dyc_funcallvar_200;
                                                                            tmp___1340 = tmp___1345;
                                                                            }
                                                                          }
                                                                        } else {
                                                                          {
                                                                          tmp___1345 = __dyc_funcallvar_201;
                                                                          tmp___1340 = tmp___1345;
                                                                          }
                                                                        }
                                                                        if (tmp___1340) {
                                                                          if (0) {
                                                                            {
                                                                            tmp___1328 = __dyc_funcallvar_202;
                                                                            __s1_len___70 = (unsigned long )tmp___1328;
                                                                            tmp___1329 = __dyc_funcallvar_203;
                                                                            __s2_len___70 = (unsigned long )tmp___1329;
                                                                            }
                                                                            if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                              goto _L___145;
                                                                            } else {
                                                                              if (__s1_len___70 >= 4UL) {
                                                                                _L___145:  
                                                                                if (! ((unsigned long )((void const   *)("--left-right" + 1)) - (unsigned long )((void const   *)"--left-right") == 1UL)) {
                                                                                  tmp___1330 = 1;
                                                                                } else {
                                                                                  if (__s2_len___70 >= 4UL) {
                                                                                    tmp___1330 = 1;
                                                                                  } else {
                                                                                    tmp___1330 = 0;
                                                                                  }
                                                                                }
                                                                              } else {
                                                                                tmp___1330 = 0;
                                                                              }
                                                                            }
                                                                            if (tmp___1330) {
                                                                              {
                                                                              tmp___1322 = __dyc_funcallvar_204;
                                                                              }
                                                                            } else {
                                                                              {
                                                                              tmp___1327 = __dyc_funcallvar_205;
                                                                              tmp___1322 = tmp___1327;
                                                                              }
                                                                            }
                                                                          } else {
                                                                            {
                                                                            tmp___1327 = __dyc_funcallvar_206;
                                                                            tmp___1322 = tmp___1327;
                                                                            }
                                                                          }
                                                                          if (tmp___1322) {
                                                                            if (0) {
                                                                              {
                                                                              tmp___1310 = __dyc_funcallvar_207;
                                                                              __s1_len___69 = (unsigned long )tmp___1310;
                                                                              tmp___1311 = __dyc_funcallvar_208;
                                                                              __s2_len___69 = (unsigned long )tmp___1311;
                                                                              }
                                                                              if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                goto _L___143;
                                                                              } else {
                                                                                if (__s1_len___69 >= 4UL) {
                                                                                  _L___143:  
                                                                                  if (! ((unsigned long )((void const   *)("--left-only" + 1)) - (unsigned long )((void const   *)"--left-only") == 1UL)) {
                                                                                    tmp___1312 = 1;
                                                                                  } else {
                                                                                    if (__s2_len___69 >= 4UL) {
                                                                                      tmp___1312 = 1;
                                                                                    } else {
                                                                                      tmp___1312 = 0;
                                                                                    }
                                                                                  }
                                                                                } else {
                                                                                  tmp___1312 = 0;
                                                                                }
                                                                              }
                                                                              if (tmp___1312) {
                                                                                {
                                                                                tmp___1304 = __dyc_funcallvar_209;
                                                                                }
                                                                              } else {
                                                                                {
                                                                                tmp___1309 = __dyc_funcallvar_210;
                                                                                tmp___1304 = tmp___1309;
                                                                                }
                                                                              }
                                                                            } else {
                                                                              {
                                                                              tmp___1309 = __dyc_funcallvar_211;
                                                                              tmp___1304 = tmp___1309;
                                                                              }
                                                                            }
                                                                            if (tmp___1304) {
                                                                              if (0) {
                                                                                {
                                                                                tmp___1292 = __dyc_funcallvar_212;
                                                                                __s1_len___68 = (unsigned long )tmp___1292;
                                                                                tmp___1293 = __dyc_funcallvar_213;
                                                                                __s2_len___68 = (unsigned long )tmp___1293;
                                                                                }
                                                                                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                  goto _L___141;
                                                                                } else {
                                                                                  if (__s1_len___68 >= 4UL) {
                                                                                    _L___141:  
                                                                                    if (! ((unsigned long )((void const   *)("--right-only" + 1)) - (unsigned long )((void const   *)"--right-only") == 1UL)) {
                                                                                      tmp___1294 = 1;
                                                                                    } else {
                                                                                      if (__s2_len___68 >= 4UL) {
                                                                                        tmp___1294 = 1;
                                                                                      } else {
                                                                                        tmp___1294 = 0;
                                                                                      }
                                                                                    }
                                                                                  } else {
                                                                                    tmp___1294 = 0;
                                                                                  }
                                                                                }
                                                                                if (tmp___1294) {
                                                                                  {
                                                                                  tmp___1286 = __dyc_funcallvar_214;
                                                                                  }
                                                                                } else {
                                                                                  {
                                                                                  tmp___1291 = __dyc_funcallvar_215;
                                                                                  tmp___1286 = tmp___1291;
                                                                                  }
                                                                                }
                                                                              } else {
                                                                                {
                                                                                tmp___1291 = __dyc_funcallvar_216;
                                                                                tmp___1286 = tmp___1291;
                                                                                }
                                                                              }
                                                                              if (tmp___1286) {
                                                                                if (0) {
                                                                                  {
                                                                                  tmp___1274 = __dyc_funcallvar_217;
                                                                                  __s1_len___67 = (unsigned long )tmp___1274;
                                                                                  tmp___1275 = __dyc_funcallvar_218;
                                                                                  __s2_len___67 = (unsigned long )tmp___1275;
                                                                                  }
                                                                                  if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                    goto _L___139;
                                                                                  } else {
                                                                                    if (__s1_len___67 >= 4UL) {
                                                                                      _L___139:  
                                                                                      if (! ((unsigned long )((void const   *)("--cherry" + 1)) - (unsigned long )((void const   *)"--cherry") == 1UL)) {
                                                                                        tmp___1276 = 1;
                                                                                      } else {
                                                                                        if (__s2_len___67 >= 4UL) {
                                                                                          tmp___1276 = 1;
                                                                                        } else {
                                                                                          tmp___1276 = 0;
                                                                                        }
                                                                                      }
                                                                                    } else {
                                                                                      tmp___1276 = 0;
                                                                                    }
                                                                                  }
                                                                                  if (tmp___1276) {
                                                                                    {
                                                                                    tmp___1268 = __dyc_funcallvar_219;
                                                                                    }
                                                                                  } else {
                                                                                    {
                                                                                    tmp___1273 = __dyc_funcallvar_220;
                                                                                    tmp___1268 = tmp___1273;
                                                                                    }
                                                                                  }
                                                                                } else {
                                                                                  {
                                                                                  tmp___1273 = __dyc_funcallvar_221;
                                                                                  tmp___1268 = tmp___1273;
                                                                                  }
                                                                                }
                                                                                if (tmp___1268) {
                                                                                  if (0) {
                                                                                    {
                                                                                    tmp___1256 = __dyc_funcallvar_222;
                                                                                    __s1_len___66 = (unsigned long )tmp___1256;
                                                                                    tmp___1257 = __dyc_funcallvar_223;
                                                                                    __s2_len___66 = (unsigned long )tmp___1257;
                                                                                    }
                                                                                    if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                      goto _L___137;
                                                                                    } else {
                                                                                      if (__s1_len___66 >= 4UL) {
                                                                                        _L___137:  
                                                                                        if (! ((unsigned long )((void const   *)("--count" + 1)) - (unsigned long )((void const   *)"--count") == 1UL)) {
                                                                                          tmp___1258 = 1;
                                                                                        } else {
                                                                                          if (__s2_len___66 >= 4UL) {
                                                                                            tmp___1258 = 1;
                                                                                          } else {
                                                                                            tmp___1258 = 0;
                                                                                          }
                                                                                        }
                                                                                      } else {
                                                                                        tmp___1258 = 0;
                                                                                      }
                                                                                    }
                                                                                    if (tmp___1258) {
                                                                                      {
                                                                                      tmp___1250 = __dyc_funcallvar_224;
                                                                                      }
                                                                                    } else {
                                                                                      {
                                                                                      tmp___1255 = __dyc_funcallvar_225;
                                                                                      tmp___1250 = tmp___1255;
                                                                                      }
                                                                                    }
                                                                                  } else {
                                                                                    {
                                                                                    tmp___1255 = __dyc_funcallvar_226;
                                                                                    tmp___1250 = tmp___1255;
                                                                                    }
                                                                                  }
                                                                                  if (tmp___1250) {
                                                                                    if (0) {
                                                                                      {
                                                                                      tmp___1238 = __dyc_funcallvar_227;
                                                                                      __s1_len___65 = (unsigned long )tmp___1238;
                                                                                      tmp___1239 = __dyc_funcallvar_228;
                                                                                      __s2_len___65 = (unsigned long )tmp___1239;
                                                                                      }
                                                                                      if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                        goto _L___135;
                                                                                      } else {
                                                                                        if (__s1_len___65 >= 4UL) {
                                                                                          _L___135:  
                                                                                          if (! ((unsigned long )((void const   *)("--cherry-mark" + 1)) - (unsigned long )((void const   *)"--cherry-mark") == 1UL)) {
                                                                                            tmp___1240 = 1;
                                                                                          } else {
                                                                                            if (__s2_len___65 >= 4UL) {
                                                                                              tmp___1240 = 1;
                                                                                            } else {
                                                                                              tmp___1240 = 0;
                                                                                            }
                                                                                          }
                                                                                        } else {
                                                                                          tmp___1240 = 0;
                                                                                        }
                                                                                      }
                                                                                      if (tmp___1240) {
                                                                                        {
                                                                                        tmp___1232 = __dyc_funcallvar_229;
                                                                                        }
                                                                                      } else {
                                                                                        {
                                                                                        tmp___1237 = __dyc_funcallvar_230;
                                                                                        tmp___1232 = tmp___1237;
                                                                                        }
                                                                                      }
                                                                                    } else {
                                                                                      {
                                                                                      tmp___1237 = __dyc_funcallvar_231;
                                                                                      tmp___1232 = tmp___1237;
                                                                                      }
                                                                                    }
                                                                                    if (tmp___1232) {
                                                                                      if (0) {
                                                                                        {
                                                                                        tmp___1220 = __dyc_funcallvar_232;
                                                                                        __s1_len___64 = (unsigned long )tmp___1220;
                                                                                        tmp___1221 = __dyc_funcallvar_233;
                                                                                        __s2_len___64 = (unsigned long )tmp___1221;
                                                                                        }
                                                                                        if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                          goto _L___133;
                                                                                        } else {
                                                                                          if (__s1_len___64 >= 4UL) {
                                                                                            _L___133:  
                                                                                            if (! ((unsigned long )((void const   *)("--cherry-pick" + 1)) - (unsigned long )((void const   *)"--cherry-pick") == 1UL)) {
                                                                                              tmp___1222 = 1;
                                                                                            } else {
                                                                                              if (__s2_len___64 >= 4UL) {
                                                                                                tmp___1222 = 1;
                                                                                              } else {
                                                                                                tmp___1222 = 0;
                                                                                              }
                                                                                            }
                                                                                          } else {
                                                                                            tmp___1222 = 0;
                                                                                          }
                                                                                        }
                                                                                        if (tmp___1222) {
                                                                                          {
                                                                                          tmp___1214 = __dyc_funcallvar_234;
                                                                                          }
                                                                                        } else {
                                                                                          {
                                                                                          tmp___1219 = __dyc_funcallvar_235;
                                                                                          tmp___1214 = tmp___1219;
                                                                                          }
                                                                                        }
                                                                                      } else {
                                                                                        {
                                                                                        tmp___1219 = __dyc_funcallvar_236;
                                                                                        tmp___1214 = tmp___1219;
                                                                                        }
                                                                                      }
                                                                                      if (tmp___1214) {
                                                                                        if (0) {
                                                                                          {
                                                                                          tmp___1202 = __dyc_funcallvar_237;
                                                                                          __s1_len___63 = (unsigned long )tmp___1202;
                                                                                          tmp___1203 = __dyc_funcallvar_238;
                                                                                          __s2_len___63 = (unsigned long )tmp___1203;
                                                                                          }
                                                                                          if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                            goto _L___131;
                                                                                          } else {
                                                                                            if (__s1_len___63 >= 4UL) {
                                                                                              _L___131:  
                                                                                              if (! ((unsigned long )((void const   *)("--objects" + 1)) - (unsigned long )((void const   *)"--objects") == 1UL)) {
                                                                                                tmp___1204 = 1;
                                                                                              } else {
                                                                                                if (__s2_len___63 >= 4UL) {
                                                                                                  tmp___1204 = 1;
                                                                                                } else {
                                                                                                  tmp___1204 = 0;
                                                                                                }
                                                                                              }
                                                                                            } else {
                                                                                              tmp___1204 = 0;
                                                                                            }
                                                                                          }
                                                                                          if (tmp___1204) {
                                                                                            {
                                                                                            tmp___1196 = __dyc_funcallvar_239;
                                                                                            }
                                                                                          } else {
                                                                                            {
                                                                                            tmp___1201 = __dyc_funcallvar_240;
                                                                                            tmp___1196 = tmp___1201;
                                                                                            }
                                                                                          }
                                                                                        } else {
                                                                                          {
                                                                                          tmp___1201 = __dyc_funcallvar_241;
                                                                                          tmp___1196 = tmp___1201;
                                                                                          }
                                                                                        }
                                                                                        if (tmp___1196) {
                                                                                          if (0) {
                                                                                            {
                                                                                            tmp___1184 = __dyc_funcallvar_242;
                                                                                            __s1_len___62 = (unsigned long )tmp___1184;
                                                                                            tmp___1185 = __dyc_funcallvar_243;
                                                                                            __s2_len___62 = (unsigned long )tmp___1185;
                                                                                            }
                                                                                            if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                              goto _L___129;
                                                                                            } else {
                                                                                              if (__s1_len___62 >= 4UL) {
                                                                                                _L___129:  
                                                                                                if (! ((unsigned long )((void const   *)("--objects-edge" + 1)) - (unsigned long )((void const   *)"--objects-edge") == 1UL)) {
                                                                                                  tmp___1186 = 1;
                                                                                                } else {
                                                                                                  if (__s2_len___62 >= 4UL) {
                                                                                                    tmp___1186 = 1;
                                                                                                  } else {
                                                                                                    tmp___1186 = 0;
                                                                                                  }
                                                                                                }
                                                                                              } else {
                                                                                                tmp___1186 = 0;
                                                                                              }
                                                                                            }
                                                                                            if (tmp___1186) {
                                                                                              {
                                                                                              tmp___1178 = __dyc_funcallvar_244;
                                                                                              }
                                                                                            } else {
                                                                                              {
                                                                                              tmp___1183 = __dyc_funcallvar_245;
                                                                                              tmp___1178 = tmp___1183;
                                                                                              }
                                                                                            }
                                                                                          } else {
                                                                                            {
                                                                                            tmp___1183 = __dyc_funcallvar_246;
                                                                                            tmp___1178 = tmp___1183;
                                                                                            }
                                                                                          }
                                                                                          if (tmp___1178) {
                                                                                            if (0) {
                                                                                              {
                                                                                              tmp___1166 = __dyc_funcallvar_247;
                                                                                              __s1_len___61 = (unsigned long )tmp___1166;
                                                                                              tmp___1167 = __dyc_funcallvar_248;
                                                                                              __s2_len___61 = (unsigned long )tmp___1167;
                                                                                              }
                                                                                              if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                goto _L___127;
                                                                                              } else {
                                                                                                if (__s1_len___61 >= 4UL) {
                                                                                                  _L___127:  
                                                                                                  if (! ((unsigned long )((void const   *)("--objects-edge-aggressive" + 1)) - (unsigned long )((void const   *)"--objects-edge-aggressive") == 1UL)) {
                                                                                                    tmp___1168 = 1;
                                                                                                  } else {
                                                                                                    if (__s2_len___61 >= 4UL) {
                                                                                                      tmp___1168 = 1;
                                                                                                    } else {
                                                                                                      tmp___1168 = 0;
                                                                                                    }
                                                                                                  }
                                                                                                } else {
                                                                                                  tmp___1168 = 0;
                                                                                                }
                                                                                              }
                                                                                              if (tmp___1168) {
                                                                                                {
                                                                                                tmp___1160 = __dyc_funcallvar_249;
                                                                                                }
                                                                                              } else {
                                                                                                {
                                                                                                tmp___1165 = __dyc_funcallvar_250;
                                                                                                tmp___1160 = tmp___1165;
                                                                                                }
                                                                                              }
                                                                                            } else {
                                                                                              {
                                                                                              tmp___1165 = __dyc_funcallvar_251;
                                                                                              tmp___1160 = tmp___1165;
                                                                                              }
                                                                                            }
                                                                                            if (tmp___1160) {
                                                                                              if (0) {
                                                                                                {
                                                                                                tmp___1148 = __dyc_funcallvar_252;
                                                                                                __s1_len___60 = (unsigned long )tmp___1148;
                                                                                                tmp___1149 = __dyc_funcallvar_253;
                                                                                                __s2_len___60 = (unsigned long )tmp___1149;
                                                                                                }
                                                                                                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                  goto _L___125;
                                                                                                } else {
                                                                                                  if (__s1_len___60 >= 4UL) {
                                                                                                    _L___125:  
                                                                                                    if (! ((unsigned long )((void const   *)("--verify-objects" + 1)) - (unsigned long )((void const   *)"--verify-objects") == 1UL)) {
                                                                                                      tmp___1150 = 1;
                                                                                                    } else {
                                                                                                      if (__s2_len___60 >= 4UL) {
                                                                                                        tmp___1150 = 1;
                                                                                                      } else {
                                                                                                        tmp___1150 = 0;
                                                                                                      }
                                                                                                    }
                                                                                                  } else {
                                                                                                    tmp___1150 = 0;
                                                                                                  }
                                                                                                }
                                                                                                if (tmp___1150) {
                                                                                                  {
                                                                                                  tmp___1142 = __dyc_funcallvar_254;
                                                                                                  }
                                                                                                } else {
                                                                                                  {
                                                                                                  tmp___1147 = __dyc_funcallvar_255;
                                                                                                  tmp___1142 = tmp___1147;
                                                                                                  }
                                                                                                }
                                                                                              } else {
                                                                                                {
                                                                                                tmp___1147 = __dyc_funcallvar_256;
                                                                                                tmp___1142 = tmp___1147;
                                                                                                }
                                                                                              }
                                                                                              if (tmp___1142) {
                                                                                                if (0) {
                                                                                                  {
                                                                                                  tmp___1130 = __dyc_funcallvar_257;
                                                                                                  __s1_len___59 = (unsigned long )tmp___1130;
                                                                                                  tmp___1131 = __dyc_funcallvar_258;
                                                                                                  __s2_len___59 = (unsigned long )tmp___1131;
                                                                                                  }
                                                                                                  if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                    goto _L___123;
                                                                                                  } else {
                                                                                                    if (__s1_len___59 >= 4UL) {
                                                                                                      _L___123:  
                                                                                                      if (! ((unsigned long )((void const   *)("--unpacked" + 1)) - (unsigned long )((void const   *)"--unpacked") == 1UL)) {
                                                                                                        tmp___1132 = 1;
                                                                                                      } else {
                                                                                                        if (__s2_len___59 >= 4UL) {
                                                                                                          tmp___1132 = 1;
                                                                                                        } else {
                                                                                                          tmp___1132 = 0;
                                                                                                        }
                                                                                                      }
                                                                                                    } else {
                                                                                                      tmp___1132 = 0;
                                                                                                    }
                                                                                                  }
                                                                                                  if (tmp___1132) {
                                                                                                    {
                                                                                                    tmp___1124 = __dyc_funcallvar_259;
                                                                                                    }
                                                                                                  } else {
                                                                                                    {
                                                                                                    tmp___1129 = __dyc_funcallvar_260;
                                                                                                    tmp___1124 = tmp___1129;
                                                                                                    }
                                                                                                  }
                                                                                                } else {
                                                                                                  {
                                                                                                  tmp___1129 = __dyc_funcallvar_261;
                                                                                                  tmp___1124 = tmp___1129;
                                                                                                  }
                                                                                                }
                                                                                                if (tmp___1124) {
                                                                                                  {
                                                                                                  tmp___1114 = __dyc_funcallvar_262;
                                                                                                  }
                                                                                                  if (tmp___1114) {
                                                                                                    {
                                                                                                    tmp___216 = __dyc_funcallvar_263;

                                                                                                    }
                                                                                                  } else {
                                                                                                    if (0) {
                                                                                                      {
                                                                                                      tmp___1111 = __dyc_funcallvar_264;
                                                                                                      __s1_len___58 = (unsigned long )tmp___1111;
                                                                                                      tmp___1112 = __dyc_funcallvar_265;
                                                                                                      __s2_len___58 = (unsigned long )tmp___1112;
                                                                                                      }
                                                                                                      if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                        goto _L___121;
                                                                                                      } else {
                                                                                                        if (__s1_len___58 >= 4UL) {
                                                                                                          _L___121:  
                                                                                                          if (! ((unsigned long )((void const   *)("--no-kept-objects" + 1)) - (unsigned long )((void const   *)"--no-kept-objects") == 1UL)) {
                                                                                                            tmp___1113 = 1;
                                                                                                          } else {
                                                                                                            if (__s2_len___58 >= 4UL) {
                                                                                                              tmp___1113 = 1;
                                                                                                            } else {
                                                                                                              tmp___1113 = 0;
                                                                                                            }
                                                                                                          }
                                                                                                        } else {
                                                                                                          tmp___1113 = 0;
                                                                                                        }
                                                                                                      }
                                                                                                      if (tmp___1113) {
                                                                                                        {
                                                                                                        tmp___1105 = __dyc_funcallvar_266;
                                                                                                        }
                                                                                                      } else {
                                                                                                        {
                                                                                                        tmp___1110 = __dyc_funcallvar_267;
                                                                                                        tmp___1105 = tmp___1110;
                                                                                                        }
                                                                                                      }
                                                                                                    } else {
                                                                                                      {
                                                                                                      tmp___1110 = __dyc_funcallvar_268;
                                                                                                      tmp___1105 = tmp___1110;
                                                                                                      }
                                                                                                    }
                                                                                                    if (tmp___1105) {
                                                                                                      {
                                                                                                      tmp___1095 = __dyc_funcallvar_269;
                                                                                                      }
                                                                                                      if (tmp___1095) {
                                                                                                        revs->no_kept_objects = 1U;
                                                                                                        if (0) {
                                                                                                          {
                                                                                                          tmp___232 = __dyc_funcallvar_270;
                                                                                                          __s1_len___10 = (unsigned long )tmp___232;
                                                                                                          tmp___233 = __dyc_funcallvar_271;
                                                                                                          __s2_len___10 = (unsigned long )tmp___233;
                                                                                                          }
                                                                                                          if (! ((unsigned long )((void const   *)(optarg___0 + 1)) - (unsigned long )((void const   *)optarg___0) == 1UL)) {
                                                                                                            goto _L___22;
                                                                                                          } else {
                                                                                                            if (__s1_len___10 >= 4UL) {
                                                                                                              _L___22:  
                                                                                                              if (! ((unsigned long )((void const   *)("in-core" + 1)) - (unsigned long )((void const   *)"in-core") == 1UL)) {
                                                                                                                tmp___234 = 1;
                                                                                                              } else {
                                                                                                                if (__s2_len___10 >= 4UL) {
                                                                                                                  tmp___234 = 1;
                                                                                                                } else {
                                                                                                                  tmp___234 = 0;
                                                                                                                }
                                                                                                              }
                                                                                                            } else {
                                                                                                              tmp___234 = 0;
                                                                                                            }
                                                                                                          }
                                                                                                          if (tmp___234) {
                                                                                                            {
                                                                                                            tmp___226 = __dyc_funcallvar_272;
                                                                                                            }
                                                                                                          } else {
                                                                                                            {
                                                                                                            tmp___231 = __dyc_funcallvar_273;
                                                                                                            tmp___226 = tmp___231;
                                                                                                            }
                                                                                                          }
                                                                                                        } else {
                                                                                                          {
                                                                                                          tmp___231 = __dyc_funcallvar_274;
                                                                                                          tmp___226 = tmp___231;
                                                                                                          }
                                                                                                        }
                                                                                                        if (! tmp___226) {
                                                                                                          revs->keep_pack_cache_flags |= 2U;
                                                                                                        }
                                                                                                        if (0) {
                                                                                                          {
                                                                                                          tmp___250 = __dyc_funcallvar_275;
                                                                                                          __s1_len___11 = (unsigned long )tmp___250;
                                                                                                          tmp___251 = __dyc_funcallvar_276;
                                                                                                          __s2_len___11 = (unsigned long )tmp___251;
                                                                                                          }
                                                                                                          if (! ((unsigned long )((void const   *)(optarg___0 + 1)) - (unsigned long )((void const   *)optarg___0) == 1UL)) {
                                                                                                            goto _L___24;
                                                                                                          } else {
                                                                                                            if (__s1_len___11 >= 4UL) {
                                                                                                              _L___24:  
                                                                                                              if (! ((unsigned long )((void const   *)("on-disk" + 1)) - (unsigned long )((void const   *)"on-disk") == 1UL)) {
                                                                                                                tmp___252 = 1;
                                                                                                              } else {
                                                                                                                if (__s2_len___11 >= 4UL) {
                                                                                                                  tmp___252 = 1;
                                                                                                                } else {
                                                                                                                  tmp___252 = 0;
                                                                                                                }
                                                                                                              }
                                                                                                            } else {
                                                                                                              tmp___252 = 0;
                                                                                                            }
                                                                                                          }
                                                                                                          if (tmp___252) {
                                                                                                            {
                                                                                                            tmp___244 = __dyc_funcallvar_277;
                                                                                                            }
                                                                                                          } else {
                                                                                                            {
                                                                                                            tmp___249 = __dyc_funcallvar_278;
                                                                                                            tmp___244 = tmp___249;
                                                                                                            }
                                                                                                          }
                                                                                                        } else {
                                                                                                          {
                                                                                                          tmp___249 = __dyc_funcallvar_279;
                                                                                                          tmp___244 = tmp___249;
                                                                                                          }
                                                                                                        }
                                                                                                        if (! tmp___244) {
                                                                                                          revs->keep_pack_cache_flags |= 1U;
                                                                                                        }
                                                                                                      } else {
                                                                                                        if (0) {
                                                                                                          {
                                                                                                          tmp___1092 = __dyc_funcallvar_280;
                                                                                                          __s1_len___57 = (unsigned long )tmp___1092;
                                                                                                          tmp___1093 = __dyc_funcallvar_281;
                                                                                                          __s2_len___57 = (unsigned long )tmp___1093;
                                                                                                          }
                                                                                                          if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                            goto _L___119;
                                                                                                          } else {
                                                                                                            if (__s1_len___57 >= 4UL) {
                                                                                                              _L___119:  
                                                                                                              if (! ((unsigned long )((void const   *)("-r" + 1)) - (unsigned long )((void const   *)"-r") == 1UL)) {
                                                                                                                tmp___1094 = 1;
                                                                                                              } else {
                                                                                                                if (__s2_len___57 >= 4UL) {
                                                                                                                  tmp___1094 = 1;
                                                                                                                } else {
                                                                                                                  tmp___1094 = 0;
                                                                                                                }
                                                                                                              }
                                                                                                            } else {
                                                                                                              tmp___1094 = 0;
                                                                                                            }
                                                                                                          }
                                                                                                          if (tmp___1094) {
                                                                                                            {
                                                                                                            tmp___1086 = __dyc_funcallvar_282;
                                                                                                            }
                                                                                                          } else {
                                                                                                            {
                                                                                                            tmp___1091 = __dyc_funcallvar_283;
                                                                                                            tmp___1086 = tmp___1091;
                                                                                                            }
                                                                                                          }
                                                                                                        } else {
                                                                                                          {
                                                                                                          tmp___1091 = __dyc_funcallvar_284;
                                                                                                          tmp___1086 = tmp___1091;
                                                                                                          }
                                                                                                        }
                                                                                                        if (tmp___1086) {
                                                                                                          if (0) {
                                                                                                            {
                                                                                                            tmp___1074 = __dyc_funcallvar_285;
                                                                                                            __s1_len___56 = (unsigned long )tmp___1074;
                                                                                                            tmp___1075 = __dyc_funcallvar_286;
                                                                                                            __s2_len___56 = (unsigned long )tmp___1075;
                                                                                                            }
                                                                                                            if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                              goto _L___117;
                                                                                                            } else {
                                                                                                              if (__s1_len___56 >= 4UL) {
                                                                                                                _L___117:  
                                                                                                                if (! ((unsigned long )((void const   *)("-t" + 1)) - (unsigned long )((void const   *)"-t") == 1UL)) {
                                                                                                                  tmp___1076 = 1;
                                                                                                                } else {
                                                                                                                  if (__s2_len___56 >= 4UL) {
                                                                                                                    tmp___1076 = 1;
                                                                                                                  } else {
                                                                                                                    tmp___1076 = 0;
                                                                                                                  }
                                                                                                                }
                                                                                                              } else {
                                                                                                                tmp___1076 = 0;
                                                                                                              }
                                                                                                            }
                                                                                                            if (tmp___1076) {
                                                                                                              {
                                                                                                              tmp___1068 = __dyc_funcallvar_287;
                                                                                                              }
                                                                                                            } else {
                                                                                                              {
                                                                                                              tmp___1073 = __dyc_funcallvar_288;
                                                                                                              tmp___1068 = tmp___1073;
                                                                                                              }
                                                                                                            }
                                                                                                          } else {
                                                                                                            {
                                                                                                            tmp___1073 = __dyc_funcallvar_289;
                                                                                                            tmp___1068 = tmp___1073;
                                                                                                            }
                                                                                                          }
                                                                                                          if (tmp___1068) {
                                                                                                            {
                                                                                                            argcount = __dyc_funcallvar_290;
                                                                                                            }
                                                                                                            if (argcount) {
                                                                                                              goto __dyc_dummy_label;
                                                                                                            } else {
                                                                                                              if (0) {
                                                                                                                {
                                                                                                                tmp___1056 = __dyc_funcallvar_291;
                                                                                                                __s1_len___55 = (unsigned long )tmp___1056;
                                                                                                                tmp___1057 = __dyc_funcallvar_292;
                                                                                                                __s2_len___55 = (unsigned long )tmp___1057;
                                                                                                                }
                                                                                                                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                  goto _L___115;
                                                                                                                } else {
                                                                                                                  if (__s1_len___55 >= 4UL) {
                                                                                                                    _L___115:  
                                                                                                                    if (! ((unsigned long )((void const   *)("-v" + 1)) - (unsigned long )((void const   *)"-v") == 1UL)) {
                                                                                                                      tmp___1058 = 1;
                                                                                                                    } else {
                                                                                                                      if (__s2_len___55 >= 4UL) {
                                                                                                                        tmp___1058 = 1;
                                                                                                                      } else {
                                                                                                                        tmp___1058 = 0;
                                                                                                                      }
                                                                                                                    }
                                                                                                                  } else {
                                                                                                                    tmp___1058 = 0;
                                                                                                                  }
                                                                                                                }
                                                                                                                if (tmp___1058) {
                                                                                                                  {
                                                                                                                  tmp___1050 = __dyc_funcallvar_293;
                                                                                                                  }
                                                                                                                } else {
                                                                                                                  {
                                                                                                                  tmp___1055 = __dyc_funcallvar_294;
                                                                                                                  tmp___1050 = tmp___1055;
                                                                                                                  }
                                                                                                                }
                                                                                                              } else {
                                                                                                                {
                                                                                                                tmp___1055 = __dyc_funcallvar_295;
                                                                                                                tmp___1050 = tmp___1055;
                                                                                                                }
                                                                                                              }
                                                                                                              if (tmp___1050) {
                                                                                                                if (0) {
                                                                                                                  {
                                                                                                                  tmp___1038 = __dyc_funcallvar_296;
                                                                                                                  __s1_len___54 = (unsigned long )tmp___1038;
                                                                                                                  tmp___1039 = __dyc_funcallvar_297;
                                                                                                                  __s2_len___54 = (unsigned long )tmp___1039;
                                                                                                                  }
                                                                                                                  if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                    goto _L___113;
                                                                                                                  } else {
                                                                                                                    if (__s1_len___54 >= 4UL) {
                                                                                                                      _L___113:  
                                                                                                                      if (! ((unsigned long )((void const   *)("--pretty" + 1)) - (unsigned long )((void const   *)"--pretty") == 1UL)) {
                                                                                                                        tmp___1040 = 1;
                                                                                                                      } else {
                                                                                                                        if (__s2_len___54 >= 4UL) {
                                                                                                                          tmp___1040 = 1;
                                                                                                                        } else {
                                                                                                                          tmp___1040 = 0;
                                                                                                                        }
                                                                                                                      }
                                                                                                                    } else {
                                                                                                                      tmp___1040 = 0;
                                                                                                                    }
                                                                                                                  }
                                                                                                                  if (tmp___1040) {
                                                                                                                    {
                                                                                                                    tmp___1032 = __dyc_funcallvar_298;
                                                                                                                    }
                                                                                                                  } else {
                                                                                                                    {
                                                                                                                    tmp___1037 = __dyc_funcallvar_299;
                                                                                                                    tmp___1032 = tmp___1037;
                                                                                                                    }
                                                                                                                  }
                                                                                                                } else {
                                                                                                                  {
                                                                                                                  tmp___1037 = __dyc_funcallvar_300;
                                                                                                                  tmp___1032 = tmp___1037;
                                                                                                                  }
                                                                                                                }
                                                                                                                if (tmp___1032) {
                                                                                                                  {
                                                                                                                  tmp___1021 = __dyc_funcallvar_301;
                                                                                                                  }
                                                                                                                  if (tmp___1021) {
                                                                                                                    {
                                                                                                                    revs->verbose_header = 1U;
                                                                                                                    revs->pretty_given = 1U;

                                                                                                                    }
                                                                                                                  } else {
                                                                                                                    {
                                                                                                                    tmp___1022 = __dyc_funcallvar_302;
                                                                                                                    }
                                                                                                                    if (tmp___1022) {
                                                                                                                      {
                                                                                                                      revs->verbose_header = 1U;
                                                                                                                      revs->pretty_given = 1U;

                                                                                                                      }
                                                                                                                    } else {
                                                                                                                      if (0) {
                                                                                                                        {
                                                                                                                        tmp___1018 = __dyc_funcallvar_303;
                                                                                                                        __s1_len___53 = (unsigned long )tmp___1018;
                                                                                                                        tmp___1019 = __dyc_funcallvar_304;
                                                                                                                        __s2_len___53 = (unsigned long )tmp___1019;
                                                                                                                        }
                                                                                                                        if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                          goto _L___111;
                                                                                                                        } else {
                                                                                                                          if (__s1_len___53 >= 4UL) {
                                                                                                                            _L___111:  
                                                                                                                            if (! ((unsigned long )((void const   *)("--expand-tabs" + 1)) - (unsigned long )((void const   *)"--expand-tabs") == 1UL)) {
                                                                                                                              tmp___1020 = 1;
                                                                                                                            } else {
                                                                                                                              if (__s2_len___53 >= 4UL) {
                                                                                                                                tmp___1020 = 1;
                                                                                                                              } else {
                                                                                                                                tmp___1020 = 0;
                                                                                                                              }
                                                                                                                            }
                                                                                                                          } else {
                                                                                                                            tmp___1020 = 0;
                                                                                                                          }
                                                                                                                        }
                                                                                                                        if (tmp___1020) {
                                                                                                                          {
                                                                                                                          tmp___1012 = __dyc_funcallvar_305;
                                                                                                                          }
                                                                                                                        } else {
                                                                                                                          {
                                                                                                                          tmp___1017 = __dyc_funcallvar_306;
                                                                                                                          tmp___1012 = tmp___1017;
                                                                                                                          }
                                                                                                                        }
                                                                                                                      } else {
                                                                                                                        {
                                                                                                                        tmp___1017 = __dyc_funcallvar_307;
                                                                                                                        tmp___1012 = tmp___1017;
                                                                                                                        }
                                                                                                                      }
                                                                                                                      if (tmp___1012) {
                                                                                                                        if (0) {
                                                                                                                          {
                                                                                                                          tmp___1000 = __dyc_funcallvar_308;
                                                                                                                          __s1_len___52 = (unsigned long )tmp___1000;
                                                                                                                          tmp___1001 = __dyc_funcallvar_309;
                                                                                                                          __s2_len___52 = (unsigned long )tmp___1001;
                                                                                                                          }
                                                                                                                          if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                            goto _L___109;
                                                                                                                          } else {
                                                                                                                            if (__s1_len___52 >= 4UL) {
                                                                                                                              _L___109:  
                                                                                                                              if (! ((unsigned long )((void const   *)("--no-expand-tabs" + 1)) - (unsigned long )((void const   *)"--no-expand-tabs") == 1UL)) {
                                                                                                                                tmp___1002 = 1;
                                                                                                                              } else {
                                                                                                                                if (__s2_len___52 >= 4UL) {
                                                                                                                                  tmp___1002 = 1;
                                                                                                                                } else {
                                                                                                                                  tmp___1002 = 0;
                                                                                                                                }
                                                                                                                              }
                                                                                                                            } else {
                                                                                                                              tmp___1002 = 0;
                                                                                                                            }
                                                                                                                          }
                                                                                                                          if (tmp___1002) {
                                                                                                                            {
                                                                                                                            tmp___994 = __dyc_funcallvar_310;
                                                                                                                            }
                                                                                                                          } else {
                                                                                                                            {
                                                                                                                            tmp___999 = __dyc_funcallvar_311;
                                                                                                                            tmp___994 = tmp___999;
                                                                                                                            }
                                                                                                                          }
                                                                                                                        } else {
                                                                                                                          {
                                                                                                                          tmp___999 = __dyc_funcallvar_312;
                                                                                                                          tmp___994 = tmp___999;
                                                                                                                          }
                                                                                                                        }
                                                                                                                        if (tmp___994) {
                                                                                                                          {
                                                                                                                          tmp___984 = __dyc_funcallvar_313;
                                                                                                                          }
                                                                                                                          if (tmp___984) {
                                                                                                                            {
                                                                                                                            tmp___253 = __dyc_funcallvar_314;
                                                                                                                            }
                                                                                                                            if (tmp___253 < 0) {
                                                                                                                              {

                                                                                                                              }
                                                                                                                            } else {
                                                                                                                              if (val < 0) {
                                                                                                                                {

                                                                                                                                }
                                                                                                                              }
                                                                                                                            }
                                                                                                                            revs->expand_tabs_in_log = val;
                                                                                                                          } else {
                                                                                                                            if (0) {
                                                                                                                              {
                                                                                                                              tmp___963 = __dyc_funcallvar_315;
                                                                                                                              __s1_len___50 = (unsigned long )tmp___963;
                                                                                                                              tmp___964 = __dyc_funcallvar_316;
                                                                                                                              __s2_len___50 = (unsigned long )tmp___964;
                                                                                                                              }
                                                                                                                              if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                goto _L___105;
                                                                                                                              } else {
                                                                                                                                if (__s1_len___50 >= 4UL) {
                                                                                                                                  _L___105:  
                                                                                                                                  if (! ((unsigned long )((void const   *)("--show-notes" + 1)) - (unsigned long )((void const   *)"--show-notes") == 1UL)) {
                                                                                                                                    tmp___965 = 1;
                                                                                                                                  } else {
                                                                                                                                    if (__s2_len___50 >= 4UL) {
                                                                                                                                      tmp___965 = 1;
                                                                                                                                    } else {
                                                                                                                                      tmp___965 = 0;
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                } else {
                                                                                                                                  tmp___965 = 0;
                                                                                                                                }
                                                                                                                              }
                                                                                                                              if (tmp___965) {
                                                                                                                                {
                                                                                                                                tmp___957 = __dyc_funcallvar_317;
                                                                                                                                }
                                                                                                                              } else {
                                                                                                                                {
                                                                                                                                tmp___962 = __dyc_funcallvar_318;
                                                                                                                                tmp___957 = tmp___962;
                                                                                                                                }
                                                                                                                              }
                                                                                                                            } else {
                                                                                                                              {
                                                                                                                              tmp___962 = __dyc_funcallvar_319;
                                                                                                                              tmp___957 = tmp___962;
                                                                                                                              }
                                                                                                                            }
                                                                                                                            if (tmp___957) {
                                                                                                                              if (0) {
                                                                                                                                {
                                                                                                                                tmp___981 = __dyc_funcallvar_320;
                                                                                                                                __s1_len___51 = (unsigned long )tmp___981;
                                                                                                                                tmp___982 = __dyc_funcallvar_321;
                                                                                                                                __s2_len___51 = (unsigned long )tmp___982;
                                                                                                                                }
                                                                                                                                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                  goto _L___107;
                                                                                                                                } else {
                                                                                                                                  if (__s1_len___51 >= 4UL) {
                                                                                                                                    _L___107:  
                                                                                                                                    if (! ((unsigned long )((void const   *)("--notes" + 1)) - (unsigned long )((void const   *)"--notes") == 1UL)) {
                                                                                                                                      tmp___983 = 1;
                                                                                                                                    } else {
                                                                                                                                      if (__s2_len___51 >= 4UL) {
                                                                                                                                        tmp___983 = 1;
                                                                                                                                      } else {
                                                                                                                                        tmp___983 = 0;
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                  } else {
                                                                                                                                    tmp___983 = 0;
                                                                                                                                  }
                                                                                                                                }
                                                                                                                                if (tmp___983) {
                                                                                                                                  {
                                                                                                                                  tmp___975 = __dyc_funcallvar_322;
                                                                                                                                  }
                                                                                                                                } else {
                                                                                                                                  {
                                                                                                                                  tmp___980 = __dyc_funcallvar_323;
                                                                                                                                  tmp___975 = tmp___980;
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              } else {
                                                                                                                                {
                                                                                                                                tmp___980 = __dyc_funcallvar_324;
                                                                                                                                tmp___975 = tmp___980;
                                                                                                                                }
                                                                                                                              }
                                                                                                                              if (tmp___975) {
                                                                                                                                if (0) {
                                                                                                                                  {
                                                                                                                                  tmp___945 = __dyc_funcallvar_325;
                                                                                                                                  __s1_len___49 = (unsigned long )tmp___945;
                                                                                                                                  tmp___946 = __dyc_funcallvar_326;
                                                                                                                                  __s2_len___49 = (unsigned long )tmp___946;
                                                                                                                                  }
                                                                                                                                  if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                    goto _L___103;
                                                                                                                                  } else {
                                                                                                                                    if (__s1_len___49 >= 4UL) {
                                                                                                                                      _L___103:  
                                                                                                                                      if (! ((unsigned long )((void const   *)("--show-signature" + 1)) - (unsigned long )((void const   *)"--show-signature") == 1UL)) {
                                                                                                                                        tmp___947 = 1;
                                                                                                                                      } else {
                                                                                                                                        if (__s2_len___49 >= 4UL) {
                                                                                                                                          tmp___947 = 1;
                                                                                                                                        } else {
                                                                                                                                          tmp___947 = 0;
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                    } else {
                                                                                                                                      tmp___947 = 0;
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                  if (tmp___947) {
                                                                                                                                    {
                                                                                                                                    tmp___939 = __dyc_funcallvar_327;
                                                                                                                                    }
                                                                                                                                  } else {
                                                                                                                                    {
                                                                                                                                    tmp___944 = __dyc_funcallvar_328;
                                                                                                                                    tmp___939 = tmp___944;
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                } else {
                                                                                                                                  {
                                                                                                                                  tmp___944 = __dyc_funcallvar_329;
                                                                                                                                  tmp___939 = tmp___944;
                                                                                                                                  }
                                                                                                                                }
                                                                                                                                if (tmp___939) {
                                                                                                                                  if (0) {
                                                                                                                                    {
                                                                                                                                    tmp___927 = __dyc_funcallvar_330;
                                                                                                                                    __s1_len___48 = (unsigned long )tmp___927;
                                                                                                                                    tmp___928 = __dyc_funcallvar_331;
                                                                                                                                    __s2_len___48 = (unsigned long )tmp___928;
                                                                                                                                    }
                                                                                                                                    if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                      goto _L___101;
                                                                                                                                    } else {
                                                                                                                                      if (__s1_len___48 >= 4UL) {
                                                                                                                                        _L___101:  
                                                                                                                                        if (! ((unsigned long )((void const   *)("--no-show-signature" + 1)) - (unsigned long )((void const   *)"--no-show-signature") == 1UL)) {
                                                                                                                                          tmp___929 = 1;
                                                                                                                                        } else {
                                                                                                                                          if (__s2_len___48 >= 4UL) {
                                                                                                                                            tmp___929 = 1;
                                                                                                                                          } else {
                                                                                                                                            tmp___929 = 0;
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                      } else {
                                                                                                                                        tmp___929 = 0;
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                    if (tmp___929) {
                                                                                                                                      {
                                                                                                                                      tmp___921 = __dyc_funcallvar_332;
                                                                                                                                      }
                                                                                                                                    } else {
                                                                                                                                      {
                                                                                                                                      tmp___926 = __dyc_funcallvar_333;
                                                                                                                                      tmp___921 = tmp___926;
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                  } else {
                                                                                                                                    {
                                                                                                                                    tmp___926 = __dyc_funcallvar_334;
                                                                                                                                    tmp___921 = tmp___926;
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                  if (tmp___921) {
                                                                                                                                    if (0) {
                                                                                                                                      {
                                                                                                                                      tmp___909 = __dyc_funcallvar_335;
                                                                                                                                      __s1_len___47 = (unsigned long )tmp___909;
                                                                                                                                      tmp___910 = __dyc_funcallvar_336;
                                                                                                                                      __s2_len___47 = (unsigned long )tmp___910;
                                                                                                                                      }
                                                                                                                                      if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                        goto _L___99;
                                                                                                                                      } else {
                                                                                                                                        if (__s1_len___47 >= 4UL) {
                                                                                                                                          _L___99:  
                                                                                                                                          if (! ((unsigned long )((void const   *)("--show-linear-break" + 1)) - (unsigned long )((void const   *)"--show-linear-break") == 1UL)) {
                                                                                                                                            tmp___911 = 1;
                                                                                                                                          } else {
                                                                                                                                            if (__s2_len___47 >= 4UL) {
                                                                                                                                              tmp___911 = 1;
                                                                                                                                            } else {
                                                                                                                                              tmp___911 = 0;
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                        } else {
                                                                                                                                          tmp___911 = 0;
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                      if (tmp___911) {
                                                                                                                                        {
                                                                                                                                        tmp___903 = __dyc_funcallvar_337;
                                                                                                                                        }
                                                                                                                                      } else {
                                                                                                                                        {
                                                                                                                                        tmp___908 = __dyc_funcallvar_338;
                                                                                                                                        tmp___903 = tmp___908;
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                    } else {
                                                                                                                                      {
                                                                                                                                      tmp___908 = __dyc_funcallvar_339;
                                                                                                                                      tmp___903 = tmp___908;
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                    if (tmp___903) {
                                                                                                                                      {
                                                                                                                                      tmp___893 = __dyc_funcallvar_340;
                                                                                                                                      }
                                                                                                                                      if (tmp___893) {
                                                                                                                                        {
                                                                                                                                        tmp___254 = __dyc_funcallvar_341;
                                                                                                                                        revs->break_bar = (char const   *)tmp___254;
                                                                                                                                        revs->track_linear = 1U;
                                                                                                                                        revs->track_first_time = 1U;
                                                                                                                                        }
                                                                                                                                      } else {
                                                                                                                                        {
                                                                                                                                        tmp___891 = __dyc_funcallvar_342;
                                                                                                                                        }
                                                                                                                                        if (tmp___891) {
                                                                                                                                          goto _L___97;
                                                                                                                                        } else {
                                                                                                                                          {
                                                                                                                                          tmp___892 = __dyc_funcallvar_343;
                                                                                                                                          }
                                                                                                                                          if (tmp___892) {
                                                                                                                                            _L___97:  
                                                                                                                                            {
                                                                                                                                            tmp___255 = __dyc_funcallvar_344;
                                                                                                                                            }
                                                                                                                                            if (tmp___255) {
                                                                                                                                              if (revs->notes_opt.use_default_notes < 0) {
                                                                                                                                                revs->notes_opt.use_default_notes = 1;
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                            {

                                                                                                                                            revs->show_notes_given = 1U;
                                                                                                                                            }
                                                                                                                                          } else {
                                                                                                                                            if (0) {
                                                                                                                                              {
                                                                                                                                              tmp___888 = __dyc_funcallvar_345;
                                                                                                                                              __s1_len___46 = (unsigned long )tmp___888;
                                                                                                                                              tmp___889 = __dyc_funcallvar_346;
                                                                                                                                              __s2_len___46 = (unsigned long )tmp___889;
                                                                                                                                              }
                                                                                                                                              if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                goto _L___96;
                                                                                                                                              } else {
                                                                                                                                                if (__s1_len___46 >= 4UL) {
                                                                                                                                                  _L___96:  
                                                                                                                                                  if (! ((unsigned long )((void const   *)("--no-notes" + 1)) - (unsigned long )((void const   *)"--no-notes") == 1UL)) {
                                                                                                                                                    tmp___890 = 1;
                                                                                                                                                  } else {
                                                                                                                                                    if (__s2_len___46 >= 4UL) {
                                                                                                                                                      tmp___890 = 1;
                                                                                                                                                    } else {
                                                                                                                                                      tmp___890 = 0;
                                                                                                                                                    }
                                                                                                                                                  }
                                                                                                                                                } else {
                                                                                                                                                  tmp___890 = 0;
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                              if (tmp___890) {
                                                                                                                                                {
                                                                                                                                                tmp___882 = __dyc_funcallvar_347;
                                                                                                                                                }
                                                                                                                                              } else {
                                                                                                                                                {
                                                                                                                                                tmp___887 = __dyc_funcallvar_348;
                                                                                                                                                tmp___882 = tmp___887;
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                            } else {
                                                                                                                                              {
                                                                                                                                              tmp___887 = __dyc_funcallvar_349;
                                                                                                                                              tmp___882 = tmp___887;
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                            if (tmp___882) {
                                                                                                                                              if (0) {
                                                                                                                                                {
                                                                                                                                                tmp___870 = __dyc_funcallvar_350;
                                                                                                                                                __s1_len___45 = (unsigned long )tmp___870;
                                                                                                                                                tmp___871 = __dyc_funcallvar_351;
                                                                                                                                                __s2_len___45 = (unsigned long )tmp___871;
                                                                                                                                                }
                                                                                                                                                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                  goto _L___94;
                                                                                                                                                } else {
                                                                                                                                                  if (__s1_len___45 >= 4UL) {
                                                                                                                                                    _L___94:  
                                                                                                                                                    if (! ((unsigned long )((void const   *)("--standard-notes" + 1)) - (unsigned long )((void const   *)"--standard-notes") == 1UL)) {
                                                                                                                                                      tmp___872 = 1;
                                                                                                                                                    } else {
                                                                                                                                                      if (__s2_len___45 >= 4UL) {
                                                                                                                                                        tmp___872 = 1;
                                                                                                                                                      } else {
                                                                                                                                                        tmp___872 = 0;
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                  } else {
                                                                                                                                                    tmp___872 = 0;
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                                if (tmp___872) {
                                                                                                                                                  {
                                                                                                                                                  tmp___864 = __dyc_funcallvar_352;
                                                                                                                                                  }
                                                                                                                                                } else {
                                                                                                                                                  {
                                                                                                                                                  tmp___869 = __dyc_funcallvar_353;
                                                                                                                                                  tmp___864 = tmp___869;
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                              } else {
                                                                                                                                                {
                                                                                                                                                tmp___869 = __dyc_funcallvar_354;
                                                                                                                                                tmp___864 = tmp___869;
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                              if (tmp___864) {
                                                                                                                                                if (0) {
                                                                                                                                                  {
                                                                                                                                                  tmp___852 = __dyc_funcallvar_355;
                                                                                                                                                  __s1_len___44 = (unsigned long )tmp___852;
                                                                                                                                                  tmp___853 = __dyc_funcallvar_356;
                                                                                                                                                  __s2_len___44 = (unsigned long )tmp___853;
                                                                                                                                                  }
                                                                                                                                                  if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                    goto _L___92;
                                                                                                                                                  } else {
                                                                                                                                                    if (__s1_len___44 >= 4UL) {
                                                                                                                                                      _L___92:  
                                                                                                                                                      if (! ((unsigned long )((void const   *)("--no-standard-notes" + 1)) - (unsigned long )((void const   *)"--no-standard-notes") == 1UL)) {
                                                                                                                                                        tmp___854 = 1;
                                                                                                                                                      } else {
                                                                                                                                                        if (__s2_len___44 >= 4UL) {
                                                                                                                                                          tmp___854 = 1;
                                                                                                                                                        } else {
                                                                                                                                                          tmp___854 = 0;
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                    } else {
                                                                                                                                                      tmp___854 = 0;
                                                                                                                                                    }
                                                                                                                                                  }
                                                                                                                                                  if (tmp___854) {
                                                                                                                                                    {
                                                                                                                                                    tmp___846 = __dyc_funcallvar_357;
                                                                                                                                                    }
                                                                                                                                                  } else {
                                                                                                                                                    {
                                                                                                                                                    tmp___851 = __dyc_funcallvar_358;
                                                                                                                                                    tmp___846 = tmp___851;
                                                                                                                                                    }
                                                                                                                                                  }
                                                                                                                                                } else {
                                                                                                                                                  {
                                                                                                                                                  tmp___851 = __dyc_funcallvar_359;
                                                                                                                                                  tmp___846 = tmp___851;
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                                if (tmp___846) {
                                                                                                                                                  if (0) {
                                                                                                                                                    {
                                                                                                                                                    tmp___834 = __dyc_funcallvar_360;
                                                                                                                                                    __s1_len___43 = (unsigned long )tmp___834;
                                                                                                                                                    tmp___835 = __dyc_funcallvar_361;
                                                                                                                                                    __s2_len___43 = (unsigned long )tmp___835;
                                                                                                                                                    }
                                                                                                                                                    if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                      goto _L___90;
                                                                                                                                                    } else {
                                                                                                                                                      if (__s1_len___43 >= 4UL) {
                                                                                                                                                        _L___90:  
                                                                                                                                                        if (! ((unsigned long )((void const   *)("--oneline" + 1)) - (unsigned long )((void const   *)"--oneline") == 1UL)) {
                                                                                                                                                          tmp___836 = 1;
                                                                                                                                                        } else {
                                                                                                                                                          if (__s2_len___43 >= 4UL) {
                                                                                                                                                            tmp___836 = 1;
                                                                                                                                                          } else {
                                                                                                                                                            tmp___836 = 0;
                                                                                                                                                          }
                                                                                                                                                        }
                                                                                                                                                      } else {
                                                                                                                                                        tmp___836 = 0;
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                    if (tmp___836) {
                                                                                                                                                      {
                                                                                                                                                      tmp___828 = __dyc_funcallvar_362;
                                                                                                                                                      }
                                                                                                                                                    } else {
                                                                                                                                                      {
                                                                                                                                                      tmp___833 = __dyc_funcallvar_363;
                                                                                                                                                      tmp___828 = tmp___833;
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                  } else {
                                                                                                                                                    {
                                                                                                                                                    tmp___833 = __dyc_funcallvar_364;
                                                                                                                                                    tmp___828 = tmp___833;
                                                                                                                                                    }
                                                                                                                                                  }
                                                                                                                                                  if (tmp___828) {
                                                                                                                                                    if (0) {
                                                                                                                                                      {
                                                                                                                                                      tmp___816 = __dyc_funcallvar_365;
                                                                                                                                                      __s1_len___42 = (unsigned long )tmp___816;
                                                                                                                                                      tmp___817 = __dyc_funcallvar_366;
                                                                                                                                                      __s2_len___42 = (unsigned long )tmp___817;
                                                                                                                                                      }
                                                                                                                                                      if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                        goto _L___88;
                                                                                                                                                      } else {
                                                                                                                                                        if (__s1_len___42 >= 4UL) {
                                                                                                                                                          _L___88:  
                                                                                                                                                          if (! ((unsigned long )((void const   *)("--graph" + 1)) - (unsigned long )((void const   *)"--graph") == 1UL)) {
                                                                                                                                                            tmp___818 = 1;
                                                                                                                                                          } else {
                                                                                                                                                            if (__s2_len___42 >= 4UL) {
                                                                                                                                                              tmp___818 = 1;
                                                                                                                                                            } else {
                                                                                                                                                              tmp___818 = 0;
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                        } else {
                                                                                                                                                          tmp___818 = 0;
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                      if (tmp___818) {
                                                                                                                                                        {
                                                                                                                                                        tmp___810 = __dyc_funcallvar_367;
                                                                                                                                                        }
                                                                                                                                                      } else {
                                                                                                                                                        {
                                                                                                                                                        tmp___815 = __dyc_funcallvar_368;
                                                                                                                                                        tmp___810 = tmp___815;
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                    } else {
                                                                                                                                                      {
                                                                                                                                                      tmp___815 = __dyc_funcallvar_369;
                                                                                                                                                      tmp___810 = tmp___815;
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                    if (tmp___810) {
                                                                                                                                                      if (0) {
                                                                                                                                                        {
                                                                                                                                                        tmp___798 = __dyc_funcallvar_370;
                                                                                                                                                        __s1_len___41 = (unsigned long )tmp___798;
                                                                                                                                                        tmp___799 = __dyc_funcallvar_371;
                                                                                                                                                        __s2_len___41 = (unsigned long )tmp___799;
                                                                                                                                                        }
                                                                                                                                                        if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                          goto _L___86;
                                                                                                                                                        } else {
                                                                                                                                                          if (__s1_len___41 >= 4UL) {
                                                                                                                                                            _L___86:  
                                                                                                                                                            if (! ((unsigned long )((void const   *)("--encode-email-headers" + 1)) - (unsigned long )((void const   *)"--encode-email-headers") == 1UL)) {
                                                                                                                                                              tmp___800 = 1;
                                                                                                                                                            } else {
                                                                                                                                                              if (__s2_len___41 >= 4UL) {
                                                                                                                                                                tmp___800 = 1;
                                                                                                                                                              } else {
                                                                                                                                                                tmp___800 = 0;
                                                                                                                                                              }
                                                                                                                                                            }
                                                                                                                                                          } else {
                                                                                                                                                            tmp___800 = 0;
                                                                                                                                                          }
                                                                                                                                                        }
                                                                                                                                                        if (tmp___800) {
                                                                                                                                                          {
                                                                                                                                                          tmp___792 = __dyc_funcallvar_372;
                                                                                                                                                          }
                                                                                                                                                        } else {
                                                                                                                                                          {
                                                                                                                                                          tmp___797 = __dyc_funcallvar_373;
                                                                                                                                                          tmp___792 = tmp___797;
                                                                                                                                                          }
                                                                                                                                                        }
                                                                                                                                                      } else {
                                                                                                                                                        {
                                                                                                                                                        tmp___797 = __dyc_funcallvar_374;
                                                                                                                                                        tmp___792 = tmp___797;
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                      if (tmp___792) {
                                                                                                                                                        if (0) {
                                                                                                                                                          {
                                                                                                                                                          tmp___780 = __dyc_funcallvar_375;
                                                                                                                                                          __s1_len___40 = (unsigned long )tmp___780;
                                                                                                                                                          tmp___781 = __dyc_funcallvar_376;
                                                                                                                                                          __s2_len___40 = (unsigned long )tmp___781;
                                                                                                                                                          }
                                                                                                                                                          if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                            goto _L___84;
                                                                                                                                                          } else {
                                                                                                                                                            if (__s1_len___40 >= 4UL) {
                                                                                                                                                              _L___84:  
                                                                                                                                                              if (! ((unsigned long )((void const   *)("--no-encode-email-headers" + 1)) - (unsigned long )((void const   *)"--no-encode-email-headers") == 1UL)) {
                                                                                                                                                                tmp___782 = 1;
                                                                                                                                                              } else {
                                                                                                                                                                if (__s2_len___40 >= 4UL) {
                                                                                                                                                                  tmp___782 = 1;
                                                                                                                                                                } else {
                                                                                                                                                                  tmp___782 = 0;
                                                                                                                                                                }
                                                                                                                                                              }
                                                                                                                                                            } else {
                                                                                                                                                              tmp___782 = 0;
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                          if (tmp___782) {
                                                                                                                                                            {
                                                                                                                                                            tmp___774 = __dyc_funcallvar_377;
                                                                                                                                                            }
                                                                                                                                                          } else {
                                                                                                                                                            {
                                                                                                                                                            tmp___779 = __dyc_funcallvar_378;
                                                                                                                                                            tmp___774 = tmp___779;
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                        } else {
                                                                                                                                                          {
                                                                                                                                                          tmp___779 = __dyc_funcallvar_379;
                                                                                                                                                          tmp___774 = tmp___779;
                                                                                                                                                          }
                                                                                                                                                        }
                                                                                                                                                        if (tmp___774) {
                                                                                                                                                          if (0) {
                                                                                                                                                            {
                                                                                                                                                            tmp___762 = __dyc_funcallvar_380;
                                                                                                                                                            __s1_len___39 = (unsigned long )tmp___762;
                                                                                                                                                            tmp___763 = __dyc_funcallvar_381;
                                                                                                                                                            __s2_len___39 = (unsigned long )tmp___763;
                                                                                                                                                            }
                                                                                                                                                            if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                              goto _L___82;
                                                                                                                                                            } else {
                                                                                                                                                              if (__s1_len___39 >= 4UL) {
                                                                                                                                                                _L___82:  
                                                                                                                                                                if (! ((unsigned long )((void const   *)("--root" + 1)) - (unsigned long )((void const   *)"--root") == 1UL)) {
                                                                                                                                                                  tmp___764 = 1;
                                                                                                                                                                } else {
                                                                                                                                                                  if (__s2_len___39 >= 4UL) {
                                                                                                                                                                    tmp___764 = 1;
                                                                                                                                                                  } else {
                                                                                                                                                                    tmp___764 = 0;
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                              } else {
                                                                                                                                                                tmp___764 = 0;
                                                                                                                                                              }
                                                                                                                                                            }
                                                                                                                                                            if (tmp___764) {
                                                                                                                                                              {
                                                                                                                                                              tmp___756 = __dyc_funcallvar_382;
                                                                                                                                                              }
                                                                                                                                                            } else {
                                                                                                                                                              {
                                                                                                                                                              tmp___761 = __dyc_funcallvar_383;
                                                                                                                                                              tmp___756 = tmp___761;
                                                                                                                                                              }
                                                                                                                                                            }
                                                                                                                                                          } else {
                                                                                                                                                            {
                                                                                                                                                            tmp___761 = __dyc_funcallvar_384;
                                                                                                                                                            tmp___756 = tmp___761;
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                          if (tmp___756) {
                                                                                                                                                            if (0) {
                                                                                                                                                              {
                                                                                                                                                              tmp___744 = __dyc_funcallvar_385;
                                                                                                                                                              __s1_len___38 = (unsigned long )tmp___744;
                                                                                                                                                              tmp___745 = __dyc_funcallvar_386;
                                                                                                                                                              __s2_len___38 = (unsigned long )tmp___745;
                                                                                                                                                              }
                                                                                                                                                              if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                goto _L___80;
                                                                                                                                                              } else {
                                                                                                                                                                if (__s1_len___38 >= 4UL) {
                                                                                                                                                                  _L___80:  
                                                                                                                                                                  if (! ((unsigned long )((void const   *)("--no-commit-id" + 1)) - (unsigned long )((void const   *)"--no-commit-id") == 1UL)) {
                                                                                                                                                                    tmp___746 = 1;
                                                                                                                                                                  } else {
                                                                                                                                                                    if (__s2_len___38 >= 4UL) {
                                                                                                                                                                      tmp___746 = 1;
                                                                                                                                                                    } else {
                                                                                                                                                                      tmp___746 = 0;
                                                                                                                                                                    }
                                                                                                                                                                  }
                                                                                                                                                                } else {
                                                                                                                                                                  tmp___746 = 0;
                                                                                                                                                                }
                                                                                                                                                              }
                                                                                                                                                              if (tmp___746) {
                                                                                                                                                                {
                                                                                                                                                                tmp___738 = __dyc_funcallvar_387;
                                                                                                                                                                }
                                                                                                                                                              } else {
                                                                                                                                                                {
                                                                                                                                                                tmp___743 = __dyc_funcallvar_388;
                                                                                                                                                                tmp___738 = tmp___743;
                                                                                                                                                                }
                                                                                                                                                              }
                                                                                                                                                            } else {
                                                                                                                                                              {
                                                                                                                                                              tmp___743 = __dyc_funcallvar_389;
                                                                                                                                                              tmp___738 = tmp___743;
                                                                                                                                                              }
                                                                                                                                                            }
                                                                                                                                                            if (tmp___738) {
                                                                                                                                                              if (0) {
                                                                                                                                                                {
                                                                                                                                                                tmp___726 = __dyc_funcallvar_390;
                                                                                                                                                                __s1_len___37 = (unsigned long )tmp___726;
                                                                                                                                                                tmp___727 = __dyc_funcallvar_391;
                                                                                                                                                                __s2_len___37 = (unsigned long )tmp___727;
                                                                                                                                                                }
                                                                                                                                                                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                  goto _L___78;
                                                                                                                                                                } else {
                                                                                                                                                                  if (__s1_len___37 >= 4UL) {
                                                                                                                                                                    _L___78:  
                                                                                                                                                                    if (! ((unsigned long )((void const   *)("--always" + 1)) - (unsigned long )((void const   *)"--always") == 1UL)) {
                                                                                                                                                                      tmp___728 = 1;
                                                                                                                                                                    } else {
                                                                                                                                                                      if (__s2_len___37 >= 4UL) {
                                                                                                                                                                        tmp___728 = 1;
                                                                                                                                                                      } else {
                                                                                                                                                                        tmp___728 = 0;
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  } else {
                                                                                                                                                                    tmp___728 = 0;
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                                if (tmp___728) {
                                                                                                                                                                  {
                                                                                                                                                                  tmp___720 = __dyc_funcallvar_392;
                                                                                                                                                                  }
                                                                                                                                                                } else {
                                                                                                                                                                  {
                                                                                                                                                                  tmp___725 = __dyc_funcallvar_393;
                                                                                                                                                                  tmp___720 = tmp___725;
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                              } else {
                                                                                                                                                                {
                                                                                                                                                                tmp___725 = __dyc_funcallvar_394;
                                                                                                                                                                tmp___720 = tmp___725;
                                                                                                                                                                }
                                                                                                                                                              }
                                                                                                                                                              if (tmp___720) {
                                                                                                                                                                if (0) {
                                                                                                                                                                  {
                                                                                                                                                                  tmp___708 = __dyc_funcallvar_395;
                                                                                                                                                                  __s1_len___36 = (unsigned long )tmp___708;
                                                                                                                                                                  tmp___709 = __dyc_funcallvar_396;
                                                                                                                                                                  __s2_len___36 = (unsigned long )tmp___709;
                                                                                                                                                                  }
                                                                                                                                                                  if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                    goto _L___76;
                                                                                                                                                                  } else {
                                                                                                                                                                    if (__s1_len___36 >= 4UL) {
                                                                                                                                                                      _L___76:  
                                                                                                                                                                      if (! ((unsigned long )((void const   *)("--no-abbrev" + 1)) - (unsigned long )((void const   *)"--no-abbrev") == 1UL)) {
                                                                                                                                                                        tmp___710 = 1;
                                                                                                                                                                      } else {
                                                                                                                                                                        if (__s2_len___36 >= 4UL) {
                                                                                                                                                                          tmp___710 = 1;
                                                                                                                                                                        } else {
                                                                                                                                                                          tmp___710 = 0;
                                                                                                                                                                        }
                                                                                                                                                                      }
                                                                                                                                                                    } else {
                                                                                                                                                                      tmp___710 = 0;
                                                                                                                                                                    }
                                                                                                                                                                  }
                                                                                                                                                                  if (tmp___710) {
                                                                                                                                                                    {
                                                                                                                                                                    tmp___702 = __dyc_funcallvar_397;
                                                                                                                                                                    }
                                                                                                                                                                  } else {
                                                                                                                                                                    {
                                                                                                                                                                    tmp___707 = __dyc_funcallvar_398;
                                                                                                                                                                    tmp___702 = tmp___707;
                                                                                                                                                                    }
                                                                                                                                                                  }
                                                                                                                                                                } else {
                                                                                                                                                                  {
                                                                                                                                                                  tmp___707 = __dyc_funcallvar_399;
                                                                                                                                                                  tmp___702 = tmp___707;
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                                if (tmp___702) {
                                                                                                                                                                  if (0) {
                                                                                                                                                                    {
                                                                                                                                                                    tmp___690 = __dyc_funcallvar_400;
                                                                                                                                                                    __s1_len___35 = (unsigned long )tmp___690;
                                                                                                                                                                    tmp___691 = __dyc_funcallvar_401;
                                                                                                                                                                    __s2_len___35 = (unsigned long )tmp___691;
                                                                                                                                                                    }
                                                                                                                                                                    if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                      goto _L___74;
                                                                                                                                                                    } else {
                                                                                                                                                                      if (__s1_len___35 >= 4UL) {
                                                                                                                                                                        _L___74:  
                                                                                                                                                                        if (! ((unsigned long )((void const   *)("--abbrev" + 1)) - (unsigned long )((void const   *)"--abbrev") == 1UL)) {
                                                                                                                                                                          tmp___692 = 1;
                                                                                                                                                                        } else {
                                                                                                                                                                          if (__s2_len___35 >= 4UL) {
                                                                                                                                                                            tmp___692 = 1;
                                                                                                                                                                          } else {
                                                                                                                                                                            tmp___692 = 0;
                                                                                                                                                                          }
                                                                                                                                                                        }
                                                                                                                                                                      } else {
                                                                                                                                                                        tmp___692 = 0;
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                    if (tmp___692) {
                                                                                                                                                                      {
                                                                                                                                                                      tmp___684 = __dyc_funcallvar_402;
                                                                                                                                                                      }
                                                                                                                                                                    } else {
                                                                                                                                                                      {
                                                                                                                                                                      tmp___689 = __dyc_funcallvar_403;
                                                                                                                                                                      tmp___684 = tmp___689;
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  } else {
                                                                                                                                                                    {
                                                                                                                                                                    tmp___689 = __dyc_funcallvar_404;
                                                                                                                                                                    tmp___684 = tmp___689;
                                                                                                                                                                    }
                                                                                                                                                                  }
                                                                                                                                                                  if (tmp___684) {
                                                                                                                                                                    {
                                                                                                                                                                    tmp___674 = __dyc_funcallvar_405;
                                                                                                                                                                    }
                                                                                                                                                                    if (tmp___674) {
                                                                                                                                                                      {
                                                                                                                                                                      tmp___256 = __dyc_funcallvar_406;
                                                                                                                                                                      revs->abbrev = (unsigned int )tmp___256;
                                                                                                                                                                      }
                                                                                                                                                                      if (revs->abbrev < (unsigned int )minimum_abbrev) {
                                                                                                                                                                        revs->abbrev = (unsigned int )minimum_abbrev;
                                                                                                                                                                      } else {
                                                                                                                                                                        if (revs->abbrev > hexsz) {
                                                                                                                                                                          revs->abbrev = hexsz;
                                                                                                                                                                        }
                                                                                                                                                                      }
                                                                                                                                                                    } else {
                                                                                                                                                                      if (0) {
                                                                                                                                                                        {
                                                                                                                                                                        tmp___671 = __dyc_funcallvar_407;
                                                                                                                                                                        __s1_len___34 = (unsigned long )tmp___671;
                                                                                                                                                                        tmp___672 = __dyc_funcallvar_408;
                                                                                                                                                                        __s2_len___34 = (unsigned long )tmp___672;
                                                                                                                                                                        }
                                                                                                                                                                        if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                          goto _L___72;
                                                                                                                                                                        } else {
                                                                                                                                                                          if (__s1_len___34 >= 4UL) {
                                                                                                                                                                            _L___72:  
                                                                                                                                                                            if (! ((unsigned long )((void const   *)("--abbrev-commit" + 1)) - (unsigned long )((void const   *)"--abbrev-commit") == 1UL)) {
                                                                                                                                                                              tmp___673 = 1;
                                                                                                                                                                            } else {
                                                                                                                                                                              if (__s2_len___34 >= 4UL) {
                                                                                                                                                                                tmp___673 = 1;
                                                                                                                                                                              } else {
                                                                                                                                                                                tmp___673 = 0;
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                          } else {
                                                                                                                                                                            tmp___673 = 0;
                                                                                                                                                                          }
                                                                                                                                                                        }
                                                                                                                                                                        if (tmp___673) {
                                                                                                                                                                          {
                                                                                                                                                                          tmp___665 = __dyc_funcallvar_409;
                                                                                                                                                                          }
                                                                                                                                                                        } else {
                                                                                                                                                                          {
                                                                                                                                                                          tmp___670 = __dyc_funcallvar_410;
                                                                                                                                                                          tmp___665 = tmp___670;
                                                                                                                                                                          }
                                                                                                                                                                        }
                                                                                                                                                                      } else {
                                                                                                                                                                        {
                                                                                                                                                                        tmp___670 = __dyc_funcallvar_411;
                                                                                                                                                                        tmp___665 = tmp___670;
                                                                                                                                                                        }
                                                                                                                                                                      }
                                                                                                                                                                      if (tmp___665) {
                                                                                                                                                                        if (0) {
                                                                                                                                                                          {
                                                                                                                                                                          tmp___653 = __dyc_funcallvar_412;
                                                                                                                                                                          __s1_len___33 = (unsigned long )tmp___653;
                                                                                                                                                                          tmp___654 = __dyc_funcallvar_413;
                                                                                                                                                                          __s2_len___33 = (unsigned long )tmp___654;
                                                                                                                                                                          }
                                                                                                                                                                          if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                            goto _L___70;
                                                                                                                                                                          } else {
                                                                                                                                                                            if (__s1_len___33 >= 4UL) {
                                                                                                                                                                              _L___70:  
                                                                                                                                                                              if (! ((unsigned long )((void const   *)("--no-abbrev-commit" + 1)) - (unsigned long )((void const   *)"--no-abbrev-commit") == 1UL)) {
                                                                                                                                                                                tmp___655 = 1;
                                                                                                                                                                              } else {
                                                                                                                                                                                if (__s2_len___33 >= 4UL) {
                                                                                                                                                                                  tmp___655 = 1;
                                                                                                                                                                                } else {
                                                                                                                                                                                  tmp___655 = 0;
                                                                                                                                                                                }
                                                                                                                                                                              }
                                                                                                                                                                            } else {
                                                                                                                                                                              tmp___655 = 0;
                                                                                                                                                                            }
                                                                                                                                                                          }
                                                                                                                                                                          if (tmp___655) {
                                                                                                                                                                            {
                                                                                                                                                                            tmp___647 = __dyc_funcallvar_414;
                                                                                                                                                                            }
                                                                                                                                                                          } else {
                                                                                                                                                                            {
                                                                                                                                                                            tmp___652 = __dyc_funcallvar_415;
                                                                                                                                                                            tmp___647 = tmp___652;
                                                                                                                                                                            }
                                                                                                                                                                          }
                                                                                                                                                                        } else {
                                                                                                                                                                          {
                                                                                                                                                                          tmp___652 = __dyc_funcallvar_416;
                                                                                                                                                                          tmp___647 = tmp___652;
                                                                                                                                                                          }
                                                                                                                                                                        }
                                                                                                                                                                        if (tmp___647) {
                                                                                                                                                                          if (0) {
                                                                                                                                                                            {
                                                                                                                                                                            tmp___635 = __dyc_funcallvar_417;
                                                                                                                                                                            __s1_len___32 = (unsigned long )tmp___635;
                                                                                                                                                                            tmp___636 = __dyc_funcallvar_418;
                                                                                                                                                                            __s2_len___32 = (unsigned long )tmp___636;
                                                                                                                                                                            }
                                                                                                                                                                            if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                              goto _L___68;
                                                                                                                                                                            } else {
                                                                                                                                                                              if (__s1_len___32 >= 4UL) {
                                                                                                                                                                                _L___68:  
                                                                                                                                                                                if (! ((unsigned long )((void const   *)("--full-diff" + 1)) - (unsigned long )((void const   *)"--full-diff") == 1UL)) {
                                                                                                                                                                                  tmp___637 = 1;
                                                                                                                                                                                } else {
                                                                                                                                                                                  if (__s2_len___32 >= 4UL) {
                                                                                                                                                                                    tmp___637 = 1;
                                                                                                                                                                                  } else {
                                                                                                                                                                                    tmp___637 = 0;
                                                                                                                                                                                  }
                                                                                                                                                                                }
                                                                                                                                                                              } else {
                                                                                                                                                                                tmp___637 = 0;
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                            if (tmp___637) {
                                                                                                                                                                              {
                                                                                                                                                                              tmp___629 = __dyc_funcallvar_419;
                                                                                                                                                                              }
                                                                                                                                                                            } else {
                                                                                                                                                                              {
                                                                                                                                                                              tmp___634 = __dyc_funcallvar_420;
                                                                                                                                                                              tmp___629 = tmp___634;
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                          } else {
                                                                                                                                                                            {
                                                                                                                                                                            tmp___634 = __dyc_funcallvar_421;
                                                                                                                                                                            tmp___629 = tmp___634;
                                                                                                                                                                            }
                                                                                                                                                                          }
                                                                                                                                                                          if (tmp___629) {
                                                                                                                                                                            if (0) {
                                                                                                                                                                              {
                                                                                                                                                                              tmp___617 = __dyc_funcallvar_422;
                                                                                                                                                                              __s1_len___31 = (unsigned long )tmp___617;
                                                                                                                                                                              tmp___618 = __dyc_funcallvar_423;
                                                                                                                                                                              __s2_len___31 = (unsigned long )tmp___618;
                                                                                                                                                                              }
                                                                                                                                                                              if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                goto _L___66;
                                                                                                                                                                              } else {
                                                                                                                                                                                if (__s1_len___31 >= 4UL) {
                                                                                                                                                                                  _L___66:  
                                                                                                                                                                                  if (! ((unsigned long )((void const   *)("--show-pulls" + 1)) - (unsigned long )((void const   *)"--show-pulls") == 1UL)) {
                                                                                                                                                                                    tmp___619 = 1;
                                                                                                                                                                                  } else {
                                                                                                                                                                                    if (__s2_len___31 >= 4UL) {
                                                                                                                                                                                      tmp___619 = 1;
                                                                                                                                                                                    } else {
                                                                                                                                                                                      tmp___619 = 0;
                                                                                                                                                                                    }
                                                                                                                                                                                  }
                                                                                                                                                                                } else {
                                                                                                                                                                                  tmp___619 = 0;
                                                                                                                                                                                }
                                                                                                                                                                              }
                                                                                                                                                                              if (tmp___619) {
                                                                                                                                                                                {
                                                                                                                                                                                tmp___611 = __dyc_funcallvar_424;
                                                                                                                                                                                }
                                                                                                                                                                              } else {
                                                                                                                                                                                {
                                                                                                                                                                                tmp___616 = __dyc_funcallvar_425;
                                                                                                                                                                                tmp___611 = tmp___616;
                                                                                                                                                                                }
                                                                                                                                                                              }
                                                                                                                                                                            } else {
                                                                                                                                                                              {
                                                                                                                                                                              tmp___616 = __dyc_funcallvar_426;
                                                                                                                                                                              tmp___611 = tmp___616;
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                            if (tmp___611) {
                                                                                                                                                                              if (0) {
                                                                                                                                                                                {
                                                                                                                                                                                tmp___599 = __dyc_funcallvar_427;
                                                                                                                                                                                __s1_len___30 = (unsigned long )tmp___599;
                                                                                                                                                                                tmp___600 = __dyc_funcallvar_428;
                                                                                                                                                                                __s2_len___30 = (unsigned long )tmp___600;
                                                                                                                                                                                }
                                                                                                                                                                                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                  goto _L___64;
                                                                                                                                                                                } else {
                                                                                                                                                                                  if (__s1_len___30 >= 4UL) {
                                                                                                                                                                                    _L___64:  
                                                                                                                                                                                    if (! ((unsigned long )((void const   *)("--full-history" + 1)) - (unsigned long )((void const   *)"--full-history") == 1UL)) {
                                                                                                                                                                                      tmp___601 = 1;
                                                                                                                                                                                    } else {
                                                                                                                                                                                      if (__s2_len___30 >= 4UL) {
                                                                                                                                                                                        tmp___601 = 1;
                                                                                                                                                                                      } else {
                                                                                                                                                                                        tmp___601 = 0;
                                                                                                                                                                                      }
                                                                                                                                                                                    }
                                                                                                                                                                                  } else {
                                                                                                                                                                                    tmp___601 = 0;
                                                                                                                                                                                  }
                                                                                                                                                                                }
                                                                                                                                                                                if (tmp___601) {
                                                                                                                                                                                  {
                                                                                                                                                                                  tmp___593 = __dyc_funcallvar_429;
                                                                                                                                                                                  }
                                                                                                                                                                                } else {
                                                                                                                                                                                  {
                                                                                                                                                                                  tmp___598 = __dyc_funcallvar_430;
                                                                                                                                                                                  tmp___593 = tmp___598;
                                                                                                                                                                                  }
                                                                                                                                                                                }
                                                                                                                                                                              } else {
                                                                                                                                                                                {
                                                                                                                                                                                tmp___598 = __dyc_funcallvar_431;
                                                                                                                                                                                tmp___593 = tmp___598;
                                                                                                                                                                                }
                                                                                                                                                                              }
                                                                                                                                                                              if (tmp___593) {
                                                                                                                                                                                if (0) {
                                                                                                                                                                                  {
                                                                                                                                                                                  tmp___581 = __dyc_funcallvar_432;
                                                                                                                                                                                  __s1_len___29 = (unsigned long )tmp___581;
                                                                                                                                                                                  tmp___582 = __dyc_funcallvar_433;
                                                                                                                                                                                  __s2_len___29 = (unsigned long )tmp___582;
                                                                                                                                                                                  }
                                                                                                                                                                                  if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                    goto _L___62;
                                                                                                                                                                                  } else {
                                                                                                                                                                                    if (__s1_len___29 >= 4UL) {
                                                                                                                                                                                      _L___62:  
                                                                                                                                                                                      if (! ((unsigned long )((void const   *)("--relative-date" + 1)) - (unsigned long )((void const   *)"--relative-date") == 1UL)) {
                                                                                                                                                                                        tmp___583 = 1;
                                                                                                                                                                                      } else {
                                                                                                                                                                                        if (__s2_len___29 >= 4UL) {
                                                                                                                                                                                          tmp___583 = 1;
                                                                                                                                                                                        } else {
                                                                                                                                                                                          tmp___583 = 0;
                                                                                                                                                                                        }
                                                                                                                                                                                      }
                                                                                                                                                                                    } else {
                                                                                                                                                                                      tmp___583 = 0;
                                                                                                                                                                                    }
                                                                                                                                                                                  }
                                                                                                                                                                                  if (tmp___583) {
                                                                                                                                                                                    {
                                                                                                                                                                                    tmp___575 = __dyc_funcallvar_434;
                                                                                                                                                                                    }
                                                                                                                                                                                  } else {
                                                                                                                                                                                    {
                                                                                                                                                                                    tmp___580 = __dyc_funcallvar_435;
                                                                                                                                                                                    tmp___575 = tmp___580;
                                                                                                                                                                                    }
                                                                                                                                                                                  }
                                                                                                                                                                                } else {
                                                                                                                                                                                  {
                                                                                                                                                                                  tmp___580 = __dyc_funcallvar_436;
                                                                                                                                                                                  tmp___575 = tmp___580;
                                                                                                                                                                                  }
                                                                                                                                                                                }
                                                                                                                                                                                if (tmp___575) {
                                                                                                                                                                                  {
                                                                                                                                                                                  argcount = __dyc_funcallvar_437;
                                                                                                                                                                                  }
                                                                                                                                                                                  if (argcount) {
                                                                                                                                                                                    {

                                                                                                                                                                                    revs->date_mode_explicit = 1U;
                                                                                                                                                                                    }
                                                                                                                                                                                    goto __dyc_dummy_label;
                                                                                                                                                                                  } else {
                                                                                                                                                                                    if (0) {
                                                                                                                                                                                      {
                                                                                                                                                                                      tmp___563 = __dyc_funcallvar_438;
                                                                                                                                                                                      __s1_len___28 = (unsigned long )tmp___563;
                                                                                                                                                                                      tmp___564 = __dyc_funcallvar_439;
                                                                                                                                                                                      __s2_len___28 = (unsigned long )tmp___564;
                                                                                                                                                                                      }
                                                                                                                                                                                      if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                        goto _L___60;
                                                                                                                                                                                      } else {
                                                                                                                                                                                        if (__s1_len___28 >= 4UL) {
                                                                                                                                                                                          _L___60:  
                                                                                                                                                                                          if (! ((unsigned long )((void const   *)("--log-size" + 1)) - (unsigned long )((void const   *)"--log-size") == 1UL)) {
                                                                                                                                                                                            tmp___565 = 1;
                                                                                                                                                                                          } else {
                                                                                                                                                                                            if (__s2_len___28 >= 4UL) {
                                                                                                                                                                                              tmp___565 = 1;
                                                                                                                                                                                            } else {
                                                                                                                                                                                              tmp___565 = 0;
                                                                                                                                                                                            }
                                                                                                                                                                                          }
                                                                                                                                                                                        } else {
                                                                                                                                                                                          tmp___565 = 0;
                                                                                                                                                                                        }
                                                                                                                                                                                      }
                                                                                                                                                                                      if (tmp___565) {
                                                                                                                                                                                        {
                                                                                                                                                                                        tmp___557 = __dyc_funcallvar_440;
                                                                                                                                                                                        }
                                                                                                                                                                                      } else {
                                                                                                                                                                                        {
                                                                                                                                                                                        tmp___562 = __dyc_funcallvar_441;
                                                                                                                                                                                        tmp___557 = tmp___562;
                                                                                                                                                                                        }
                                                                                                                                                                                      }
                                                                                                                                                                                    } else {
                                                                                                                                                                                      {
                                                                                                                                                                                      tmp___562 = __dyc_funcallvar_442;
                                                                                                                                                                                      tmp___557 = tmp___562;
                                                                                                                                                                                      }
                                                                                                                                                                                    }
                                                                                                                                                                                    if (tmp___557) {
                                                                                                                                                                                      {
                                                                                                                                                                                      argcount = __dyc_funcallvar_443;
                                                                                                                                                                                      }
                                                                                                                                                                                      if (argcount) {
                                                                                                                                                                                        {

                                                                                                                                                                                        }
                                                                                                                                                                                        goto __dyc_dummy_label;
                                                                                                                                                                                      } else {
                                                                                                                                                                                        {
                                                                                                                                                                                        argcount = __dyc_funcallvar_444;
                                                                                                                                                                                        }
                                                                                                                                                                                        if (argcount) {
                                                                                                                                                                                          {

                                                                                                                                                                                          }
                                                                                                                                                                                          goto __dyc_dummy_label;
                                                                                                                                                                                        } else {
                                                                                                                                                                                          {
                                                                                                                                                                                          argcount = __dyc_funcallvar_445;
                                                                                                                                                                                          }
                                                                                                                                                                                          if (argcount) {
                                                                                                                                                                                            {

                                                                                                                                                                                            }
                                                                                                                                                                                            goto __dyc_dummy_label;
                                                                                                                                                                                          } else {
                                                                                                                                                                                            {
                                                                                                                                                                                            argcount = __dyc_funcallvar_446;
                                                                                                                                                                                            }
                                                                                                                                                                                            if (argcount) {
                                                                                                                                                                                              {

                                                                                                                                                                                              }
                                                                                                                                                                                              goto __dyc_dummy_label;
                                                                                                                                                                                            } else {
                                                                                                                                                                                              if (0) {
                                                                                                                                                                                                {
                                                                                                                                                                                                tmp___545 = __dyc_funcallvar_447;
                                                                                                                                                                                                __s1_len___27 = (unsigned long )tmp___545;
                                                                                                                                                                                                tmp___546 = __dyc_funcallvar_448;
                                                                                                                                                                                                __s2_len___27 = (unsigned long )tmp___546;
                                                                                                                                                                                                }
                                                                                                                                                                                                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                                  goto _L___58;
                                                                                                                                                                                                } else {
                                                                                                                                                                                                  if (__s1_len___27 >= 4UL) {
                                                                                                                                                                                                    _L___58:  
                                                                                                                                                                                                    if (! ((unsigned long )((void const   *)("--basic-regexp" + 1)) - (unsigned long )((void const   *)"--basic-regexp") == 1UL)) {
                                                                                                                                                                                                      tmp___547 = 1;
                                                                                                                                                                                                    } else {
                                                                                                                                                                                                      if (__s2_len___27 >= 4UL) {
                                                                                                                                                                                                        tmp___547 = 1;
                                                                                                                                                                                                      } else {
                                                                                                                                                                                                        tmp___547 = 0;
                                                                                                                                                                                                      }
                                                                                                                                                                                                    }
                                                                                                                                                                                                  } else {
                                                                                                                                                                                                    tmp___547 = 0;
                                                                                                                                                                                                  }
                                                                                                                                                                                                }
                                                                                                                                                                                                if (tmp___547) {
                                                                                                                                                                                                  {
                                                                                                                                                                                                  tmp___539 = __dyc_funcallvar_449;
                                                                                                                                                                                                  }
                                                                                                                                                                                                } else {
                                                                                                                                                                                                  {
                                                                                                                                                                                                  tmp___544 = __dyc_funcallvar_450;
                                                                                                                                                                                                  tmp___539 = tmp___544;
                                                                                                                                                                                                  }
                                                                                                                                                                                                }
                                                                                                                                                                                              } else {
                                                                                                                                                                                                {
                                                                                                                                                                                                tmp___544 = __dyc_funcallvar_451;
                                                                                                                                                                                                tmp___539 = tmp___544;
                                                                                                                                                                                                }
                                                                                                                                                                                              }
                                                                                                                                                                                              if (tmp___539) {
                                                                                                                                                                                                if (0) {
                                                                                                                                                                                                  {
                                                                                                                                                                                                  tmp___509 = __dyc_funcallvar_452;
                                                                                                                                                                                                  __s1_len___25 = (unsigned long )tmp___509;
                                                                                                                                                                                                  tmp___510 = __dyc_funcallvar_453;
                                                                                                                                                                                                  __s2_len___25 = (unsigned long )tmp___510;
                                                                                                                                                                                                  }
                                                                                                                                                                                                  if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                                    goto _L___54;
                                                                                                                                                                                                  } else {
                                                                                                                                                                                                    if (__s1_len___25 >= 4UL) {
                                                                                                                                                                                                      _L___54:  
                                                                                                                                                                                                      if (! ((unsigned long )((void const   *)("--extended-regexp" + 1)) - (unsigned long )((void const   *)"--extended-regexp") == 1UL)) {
                                                                                                                                                                                                        tmp___511 = 1;
                                                                                                                                                                                                      } else {
                                                                                                                                                                                                        if (__s2_len___25 >= 4UL) {
                                                                                                                                                                                                          tmp___511 = 1;
                                                                                                                                                                                                        } else {
                                                                                                                                                                                                          tmp___511 = 0;
                                                                                                                                                                                                        }
                                                                                                                                                                                                      }
                                                                                                                                                                                                    } else {
                                                                                                                                                                                                      tmp___511 = 0;
                                                                                                                                                                                                    }
                                                                                                                                                                                                  }
                                                                                                                                                                                                  if (tmp___511) {
                                                                                                                                                                                                    {
                                                                                                                                                                                                    tmp___503 = __dyc_funcallvar_454;
                                                                                                                                                                                                    }
                                                                                                                                                                                                  } else {
                                                                                                                                                                                                    {
                                                                                                                                                                                                    tmp___508 = __dyc_funcallvar_455;
                                                                                                                                                                                                    tmp___503 = tmp___508;
                                                                                                                                                                                                    }
                                                                                                                                                                                                  }
                                                                                                                                                                                                } else {
                                                                                                                                                                                                  {
                                                                                                                                                                                                  tmp___508 = __dyc_funcallvar_456;
                                                                                                                                                                                                  tmp___503 = tmp___508;
                                                                                                                                                                                                  }
                                                                                                                                                                                                }
                                                                                                                                                                                                if (tmp___503) {
                                                                                                                                                                                                  if (0) {
                                                                                                                                                                                                    {
                                                                                                                                                                                                    tmp___527 = __dyc_funcallvar_457;
                                                                                                                                                                                                    __s1_len___26 = (unsigned long )tmp___527;
                                                                                                                                                                                                    tmp___528 = __dyc_funcallvar_458;
                                                                                                                                                                                                    __s2_len___26 = (unsigned long )tmp___528;
                                                                                                                                                                                                    }
                                                                                                                                                                                                    if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                                      goto _L___56;
                                                                                                                                                                                                    } else {
                                                                                                                                                                                                      if (__s1_len___26 >= 4UL) {
                                                                                                                                                                                                        _L___56:  
                                                                                                                                                                                                        if (! ((unsigned long )((void const   *)("-E" + 1)) - (unsigned long )((void const   *)"-E") == 1UL)) {
                                                                                                                                                                                                          tmp___529 = 1;
                                                                                                                                                                                                        } else {
                                                                                                                                                                                                          if (__s2_len___26 >= 4UL) {
                                                                                                                                                                                                            tmp___529 = 1;
                                                                                                                                                                                                          } else {
                                                                                                                                                                                                            tmp___529 = 0;
                                                                                                                                                                                                          }
                                                                                                                                                                                                        }
                                                                                                                                                                                                      } else {
                                                                                                                                                                                                        tmp___529 = 0;
                                                                                                                                                                                                      }
                                                                                                                                                                                                    }
                                                                                                                                                                                                    if (tmp___529) {
                                                                                                                                                                                                      {
                                                                                                                                                                                                      tmp___521 = __dyc_funcallvar_459;
                                                                                                                                                                                                      }
                                                                                                                                                                                                    } else {
                                                                                                                                                                                                      {
                                                                                                                                                                                                      tmp___526 = __dyc_funcallvar_460;
                                                                                                                                                                                                      tmp___521 = tmp___526;
                                                                                                                                                                                                      }
                                                                                                                                                                                                    }
                                                                                                                                                                                                  } else {
                                                                                                                                                                                                    {
                                                                                                                                                                                                    tmp___526 = __dyc_funcallvar_461;
                                                                                                                                                                                                    tmp___521 = tmp___526;
                                                                                                                                                                                                    }
                                                                                                                                                                                                  }
                                                                                                                                                                                                  if (tmp___521) {
                                                                                                                                                                                                    if (0) {
                                                                                                                                                                                                      {
                                                                                                                                                                                                      tmp___473 = __dyc_funcallvar_462;
                                                                                                                                                                                                      __s1_len___23 = (unsigned long )tmp___473;
                                                                                                                                                                                                      tmp___474 = __dyc_funcallvar_463;
                                                                                                                                                                                                      __s2_len___23 = (unsigned long )tmp___474;
                                                                                                                                                                                                      }
                                                                                                                                                                                                      if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                                        goto _L___50;
                                                                                                                                                                                                      } else {
                                                                                                                                                                                                        if (__s1_len___23 >= 4UL) {
                                                                                                                                                                                                          _L___50:  
                                                                                                                                                                                                          if (! ((unsigned long )((void const   *)("--regexp-ignore-case" + 1)) - (unsigned long )((void const   *)"--regexp-ignore-case") == 1UL)) {
                                                                                                                                                                                                            tmp___475 = 1;
                                                                                                                                                                                                          } else {
                                                                                                                                                                                                            if (__s2_len___23 >= 4UL) {
                                                                                                                                                                                                              tmp___475 = 1;
                                                                                                                                                                                                            } else {
                                                                                                                                                                                                              tmp___475 = 0;
                                                                                                                                                                                                            }
                                                                                                                                                                                                          }
                                                                                                                                                                                                        } else {
                                                                                                                                                                                                          tmp___475 = 0;
                                                                                                                                                                                                        }
                                                                                                                                                                                                      }
                                                                                                                                                                                                      if (tmp___475) {
                                                                                                                                                                                                        {
                                                                                                                                                                                                        tmp___467 = __dyc_funcallvar_464;
                                                                                                                                                                                                        }
                                                                                                                                                                                                      } else {
                                                                                                                                                                                                        {
                                                                                                                                                                                                        tmp___472 = __dyc_funcallvar_465;
                                                                                                                                                                                                        tmp___467 = tmp___472;
                                                                                                                                                                                                        }
                                                                                                                                                                                                      }
                                                                                                                                                                                                    } else {
                                                                                                                                                                                                      {
                                                                                                                                                                                                      tmp___472 = __dyc_funcallvar_466;
                                                                                                                                                                                                      tmp___467 = tmp___472;
                                                                                                                                                                                                      }
                                                                                                                                                                                                    }
                                                                                                                                                                                                    if (tmp___467) {
                                                                                                                                                                                                      if (0) {
                                                                                                                                                                                                        {
                                                                                                                                                                                                        tmp___491 = __dyc_funcallvar_467;
                                                                                                                                                                                                        __s1_len___24 = (unsigned long )tmp___491;
                                                                                                                                                                                                        tmp___492 = __dyc_funcallvar_468;
                                                                                                                                                                                                        __s2_len___24 = (unsigned long )tmp___492;
                                                                                                                                                                                                        }
                                                                                                                                                                                                        if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                                          goto _L___52;
                                                                                                                                                                                                        } else {
                                                                                                                                                                                                          if (__s1_len___24 >= 4UL) {
                                                                                                                                                                                                            _L___52:  
                                                                                                                                                                                                            if (! ((unsigned long )((void const   *)("-i" + 1)) - (unsigned long )((void const   *)"-i") == 1UL)) {
                                                                                                                                                                                                              tmp___493 = 1;
                                                                                                                                                                                                            } else {
                                                                                                                                                                                                              if (__s2_len___24 >= 4UL) {
                                                                                                                                                                                                                tmp___493 = 1;
                                                                                                                                                                                                              } else {
                                                                                                                                                                                                                tmp___493 = 0;
                                                                                                                                                                                                              }
                                                                                                                                                                                                            }
                                                                                                                                                                                                          } else {
                                                                                                                                                                                                            tmp___493 = 0;
                                                                                                                                                                                                          }
                                                                                                                                                                                                        }
                                                                                                                                                                                                        if (tmp___493) {
                                                                                                                                                                                                          {
                                                                                                                                                                                                          tmp___485 = __dyc_funcallvar_469;
                                                                                                                                                                                                          }
                                                                                                                                                                                                        } else {
                                                                                                                                                                                                          {
                                                                                                                                                                                                          tmp___490 = __dyc_funcallvar_470;
                                                                                                                                                                                                          tmp___485 = tmp___490;
                                                                                                                                                                                                          }
                                                                                                                                                                                                        }
                                                                                                                                                                                                      } else {
                                                                                                                                                                                                        {
                                                                                                                                                                                                        tmp___490 = __dyc_funcallvar_471;
                                                                                                                                                                                                        tmp___485 = tmp___490;
                                                                                                                                                                                                        }
                                                                                                                                                                                                      }
                                                                                                                                                                                                      if (tmp___485) {
                                                                                                                                                                                                        if (0) {
                                                                                                                                                                                                          {
                                                                                                                                                                                                          tmp___437 = __dyc_funcallvar_472;
                                                                                                                                                                                                          __s1_len___21 = (unsigned long )tmp___437;
                                                                                                                                                                                                          tmp___438 = __dyc_funcallvar_473;
                                                                                                                                                                                                          __s2_len___21 = (unsigned long )tmp___438;
                                                                                                                                                                                                          }
                                                                                                                                                                                                          if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                                            goto _L___46;
                                                                                                                                                                                                          } else {
                                                                                                                                                                                                            if (__s1_len___21 >= 4UL) {
                                                                                                                                                                                                              _L___46:  
                                                                                                                                                                                                              if (! ((unsigned long )((void const   *)("--fixed-strings" + 1)) - (unsigned long )((void const   *)"--fixed-strings") == 1UL)) {
                                                                                                                                                                                                                tmp___439 = 1;
                                                                                                                                                                                                              } else {
                                                                                                                                                                                                                if (__s2_len___21 >= 4UL) {
                                                                                                                                                                                                                  tmp___439 = 1;
                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                  tmp___439 = 0;
                                                                                                                                                                                                                }
                                                                                                                                                                                                              }
                                                                                                                                                                                                            } else {
                                                                                                                                                                                                              tmp___439 = 0;
                                                                                                                                                                                                            }
                                                                                                                                                                                                          }
                                                                                                                                                                                                          if (tmp___439) {
                                                                                                                                                                                                            {
                                                                                                                                                                                                            tmp___431 = __dyc_funcallvar_474;
                                                                                                                                                                                                            }
                                                                                                                                                                                                          } else {
                                                                                                                                                                                                            {
                                                                                                                                                                                                            tmp___436 = __dyc_funcallvar_475;
                                                                                                                                                                                                            tmp___431 = tmp___436;
                                                                                                                                                                                                            }
                                                                                                                                                                                                          }
                                                                                                                                                                                                        } else {
                                                                                                                                                                                                          {
                                                                                                                                                                                                          tmp___436 = __dyc_funcallvar_476;
                                                                                                                                                                                                          tmp___431 = tmp___436;
                                                                                                                                                                                                          }
                                                                                                                                                                                                        }
                                                                                                                                                                                                        if (tmp___431) {
                                                                                                                                                                                                          if (0) {
                                                                                                                                                                                                            {
                                                                                                                                                                                                            tmp___455 = __dyc_funcallvar_477;
                                                                                                                                                                                                            __s1_len___22 = (unsigned long )tmp___455;
                                                                                                                                                                                                            tmp___456 = __dyc_funcallvar_478;
                                                                                                                                                                                                            __s2_len___22 = (unsigned long )tmp___456;
                                                                                                                                                                                                            }
                                                                                                                                                                                                            if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                                              goto _L___48;
                                                                                                                                                                                                            } else {
                                                                                                                                                                                                              if (__s1_len___22 >= 4UL) {
                                                                                                                                                                                                                _L___48:  
                                                                                                                                                                                                                if (! ((unsigned long )((void const   *)("-F" + 1)) - (unsigned long )((void const   *)"-F") == 1UL)) {
                                                                                                                                                                                                                  tmp___457 = 1;
                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                  if (__s2_len___22 >= 4UL) {
                                                                                                                                                                                                                    tmp___457 = 1;
                                                                                                                                                                                                                  } else {
                                                                                                                                                                                                                    tmp___457 = 0;
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                }
                                                                                                                                                                                                              } else {
                                                                                                                                                                                                                tmp___457 = 0;
                                                                                                                                                                                                              }
                                                                                                                                                                                                            }
                                                                                                                                                                                                            if (tmp___457) {
                                                                                                                                                                                                              {
                                                                                                                                                                                                              tmp___449 = __dyc_funcallvar_479;
                                                                                                                                                                                                              }
                                                                                                                                                                                                            } else {
                                                                                                                                                                                                              {
                                                                                                                                                                                                              tmp___454 = __dyc_funcallvar_480;
                                                                                                                                                                                                              tmp___449 = tmp___454;
                                                                                                                                                                                                              }
                                                                                                                                                                                                            }
                                                                                                                                                                                                          } else {
                                                                                                                                                                                                            {
                                                                                                                                                                                                            tmp___454 = __dyc_funcallvar_481;
                                                                                                                                                                                                            tmp___449 = tmp___454;
                                                                                                                                                                                                            }
                                                                                                                                                                                                          }
                                                                                                                                                                                                          if (tmp___449) {
                                                                                                                                                                                                            if (0) {
                                                                                                                                                                                                              {
                                                                                                                                                                                                              tmp___401 = __dyc_funcallvar_482;
                                                                                                                                                                                                              __s1_len___19 = (unsigned long )tmp___401;
                                                                                                                                                                                                              tmp___402 = __dyc_funcallvar_483;
                                                                                                                                                                                                              __s2_len___19 = (unsigned long )tmp___402;
                                                                                                                                                                                                              }
                                                                                                                                                                                                              if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                                                goto _L___42;
                                                                                                                                                                                                              } else {
                                                                                                                                                                                                                if (__s1_len___19 >= 4UL) {
                                                                                                                                                                                                                  _L___42:  
                                                                                                                                                                                                                  if (! ((unsigned long )((void const   *)("--perl-regexp" + 1)) - (unsigned long )((void const   *)"--perl-regexp") == 1UL)) {
                                                                                                                                                                                                                    tmp___403 = 1;
                                                                                                                                                                                                                  } else {
                                                                                                                                                                                                                    if (__s2_len___19 >= 4UL) {
                                                                                                                                                                                                                      tmp___403 = 1;
                                                                                                                                                                                                                    } else {
                                                                                                                                                                                                                      tmp___403 = 0;
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                  tmp___403 = 0;
                                                                                                                                                                                                                }
                                                                                                                                                                                                              }
                                                                                                                                                                                                              if (tmp___403) {
                                                                                                                                                                                                                {
                                                                                                                                                                                                                tmp___395 = __dyc_funcallvar_484;
                                                                                                                                                                                                                }
                                                                                                                                                                                                              } else {
                                                                                                                                                                                                                {
                                                                                                                                                                                                                tmp___400 = __dyc_funcallvar_485;
                                                                                                                                                                                                                tmp___395 = tmp___400;
                                                                                                                                                                                                                }
                                                                                                                                                                                                              }
                                                                                                                                                                                                            } else {
                                                                                                                                                                                                              {
                                                                                                                                                                                                              tmp___400 = __dyc_funcallvar_486;
                                                                                                                                                                                                              tmp___395 = tmp___400;
                                                                                                                                                                                                              }
                                                                                                                                                                                                            }
                                                                                                                                                                                                            if (tmp___395) {
                                                                                                                                                                                                              if (0) {
                                                                                                                                                                                                                {
                                                                                                                                                                                                                tmp___419 = __dyc_funcallvar_487;
                                                                                                                                                                                                                __s1_len___20 = (unsigned long )tmp___419;
                                                                                                                                                                                                                tmp___420 = __dyc_funcallvar_488;
                                                                                                                                                                                                                __s2_len___20 = (unsigned long )tmp___420;
                                                                                                                                                                                                                }
                                                                                                                                                                                                                if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                                                  goto _L___44;
                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                  if (__s1_len___20 >= 4UL) {
                                                                                                                                                                                                                    _L___44:  
                                                                                                                                                                                                                    if (! ((unsigned long )((void const   *)("-P" + 1)) - (unsigned long )((void const   *)"-P") == 1UL)) {
                                                                                                                                                                                                                      tmp___421 = 1;
                                                                                                                                                                                                                    } else {
                                                                                                                                                                                                                      if (__s2_len___20 >= 4UL) {
                                                                                                                                                                                                                        tmp___421 = 1;
                                                                                                                                                                                                                      } else {
                                                                                                                                                                                                                        tmp___421 = 0;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  } else {
                                                                                                                                                                                                                    tmp___421 = 0;
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                }
                                                                                                                                                                                                                if (tmp___421) {
                                                                                                                                                                                                                  {
                                                                                                                                                                                                                  tmp___413 = __dyc_funcallvar_489;
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                  {
                                                                                                                                                                                                                  tmp___418 = __dyc_funcallvar_490;
                                                                                                                                                                                                                  tmp___413 = tmp___418;
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                }
                                                                                                                                                                                                              } else {
                                                                                                                                                                                                                {
                                                                                                                                                                                                                tmp___418 = __dyc_funcallvar_491;
                                                                                                                                                                                                                tmp___413 = tmp___418;
                                                                                                                                                                                                                }
                                                                                                                                                                                                              }
                                                                                                                                                                                                              if (tmp___413) {
                                                                                                                                                                                                                if (0) {
                                                                                                                                                                                                                  {
                                                                                                                                                                                                                  tmp___383 = __dyc_funcallvar_492;
                                                                                                                                                                                                                  __s1_len___18 = (unsigned long )tmp___383;
                                                                                                                                                                                                                  tmp___384 = __dyc_funcallvar_493;
                                                                                                                                                                                                                  __s2_len___18 = (unsigned long )tmp___384;
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                  if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                                                    goto _L___40;
                                                                                                                                                                                                                  } else {
                                                                                                                                                                                                                    if (__s1_len___18 >= 4UL) {
                                                                                                                                                                                                                      _L___40:  
                                                                                                                                                                                                                      if (! ((unsigned long )((void const   *)("--all-match" + 1)) - (unsigned long )((void const   *)"--all-match") == 1UL)) {
                                                                                                                                                                                                                        tmp___385 = 1;
                                                                                                                                                                                                                      } else {
                                                                                                                                                                                                                        if (__s2_len___18 >= 4UL) {
                                                                                                                                                                                                                          tmp___385 = 1;
                                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                          tmp___385 = 0;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                    } else {
                                                                                                                                                                                                                      tmp___385 = 0;
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                  if (tmp___385) {
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                    tmp___377 = __dyc_funcallvar_494;
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  } else {
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                    tmp___382 = __dyc_funcallvar_495;
                                                                                                                                                                                                                    tmp___377 = tmp___382;
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                  {
                                                                                                                                                                                                                  tmp___382 = __dyc_funcallvar_496;
                                                                                                                                                                                                                  tmp___377 = tmp___382;
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                }
                                                                                                                                                                                                                if (tmp___377) {
                                                                                                                                                                                                                  if (0) {
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                    tmp___365 = __dyc_funcallvar_497;
                                                                                                                                                                                                                    __s1_len___17 = (unsigned long )tmp___365;
                                                                                                                                                                                                                    tmp___366 = __dyc_funcallvar_498;
                                                                                                                                                                                                                    __s2_len___17 = (unsigned long )tmp___366;
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                    if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                                                      goto _L___38;
                                                                                                                                                                                                                    } else {
                                                                                                                                                                                                                      if (__s1_len___17 >= 4UL) {
                                                                                                                                                                                                                        _L___38:  
                                                                                                                                                                                                                        if (! ((unsigned long )((void const   *)("--invert-grep" + 1)) - (unsigned long )((void const   *)"--invert-grep") == 1UL)) {
                                                                                                                                                                                                                          tmp___367 = 1;
                                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                          if (__s2_len___17 >= 4UL) {
                                                                                                                                                                                                                            tmp___367 = 1;
                                                                                                                                                                                                                          } else {
                                                                                                                                                                                                                            tmp___367 = 0;
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      } else {
                                                                                                                                                                                                                        tmp___367 = 0;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                    if (tmp___367) {
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___359 = __dyc_funcallvar_499;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                    } else {
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___364 = __dyc_funcallvar_500;
                                                                                                                                                                                                                      tmp___359 = tmp___364;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  } else {
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                    tmp___364 = __dyc_funcallvar_501;
                                                                                                                                                                                                                    tmp___359 = tmp___364;
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                  if (tmp___359) {
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                    argcount = __dyc_funcallvar_502;
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                    if (argcount) {
                                                                                                                                                                                                                      if (0) {
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                        tmp___273 = __dyc_funcallvar_503;
                                                                                                                                                                                                                        __s1_len___12 = (unsigned long )tmp___273;
                                                                                                                                                                                                                        tmp___274 = __dyc_funcallvar_504;
                                                                                                                                                                                                                        __s2_len___12 = (unsigned long )tmp___274;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        if (! ((unsigned long )((void const   *)(optarg___0 + 1)) - (unsigned long )((void const   *)optarg___0) == 1UL)) {
                                                                                                                                                                                                                          goto _L___26;
                                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                          if (__s1_len___12 >= 4UL) {
                                                                                                                                                                                                                            _L___26:  
                                                                                                                                                                                                                            if (! ((unsigned long )((void const   *)("none" + 1)) - (unsigned long )((void const   *)"none") == 1UL)) {
                                                                                                                                                                                                                              tmp___275 = 1;
                                                                                                                                                                                                                            } else {
                                                                                                                                                                                                                              if (__s2_len___12 >= 4UL) {
                                                                                                                                                                                                                                tmp___275 = 1;
                                                                                                                                                                                                                              } else {
                                                                                                                                                                                                                                tmp___275 = 0;
                                                                                                                                                                                                                              }
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          } else {
                                                                                                                                                                                                                            tmp___275 = 0;
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        if (tmp___275) {
                                                                                                                                                                                                                          {
                                                                                                                                                                                                                          tmp___267 = __dyc_funcallvar_505;
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                          {
                                                                                                                                                                                                                          tmp___272 = __dyc_funcallvar_506;
                                                                                                                                                                                                                          tmp___267 = tmp___272;
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      } else {
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                        tmp___272 = __dyc_funcallvar_507;
                                                                                                                                                                                                                        tmp___267 = tmp___272;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      if (tmp___267) {
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                        tmp___257 = __dyc_funcallvar_508;
                                                                                                                                                                                                                        git_log_output_encoding = (char const   *)tmp___257;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      } else {
                                                                                                                                                                                                                        git_log_output_encoding = "";
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto __dyc_dummy_label;
                                                                                                                                                                                                                    } else {
                                                                                                                                                                                                                      if (0) {
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                        tmp___347 = __dyc_funcallvar_509;
                                                                                                                                                                                                                        __s1_len___16 = (unsigned long )tmp___347;
                                                                                                                                                                                                                        tmp___348 = __dyc_funcallvar_510;
                                                                                                                                                                                                                        __s2_len___16 = (unsigned long )tmp___348;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                                                          goto _L___36;
                                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                          if (__s1_len___16 >= 4UL) {
                                                                                                                                                                                                                            _L___36:  
                                                                                                                                                                                                                            if (! ((unsigned long )((void const   *)("--reverse" + 1)) - (unsigned long )((void const   *)"--reverse") == 1UL)) {
                                                                                                                                                                                                                              tmp___349 = 1;
                                                                                                                                                                                                                            } else {
                                                                                                                                                                                                                              if (__s2_len___16 >= 4UL) {
                                                                                                                                                                                                                                tmp___349 = 1;
                                                                                                                                                                                                                              } else {
                                                                                                                                                                                                                                tmp___349 = 0;
                                                                                                                                                                                                                              }
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          } else {
                                                                                                                                                                                                                            tmp___349 = 0;
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        if (tmp___349) {
                                                                                                                                                                                                                          {
                                                                                                                                                                                                                          tmp___341 = __dyc_funcallvar_511;
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                          {
                                                                                                                                                                                                                          tmp___346 = __dyc_funcallvar_512;
                                                                                                                                                                                                                          tmp___341 = tmp___346;
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      } else {
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                        tmp___346 = __dyc_funcallvar_513;
                                                                                                                                                                                                                        tmp___341 = tmp___346;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      if (tmp___341) {
                                                                                                                                                                                                                        if (0) {
                                                                                                                                                                                                                          {
                                                                                                                                                                                                                          tmp___329 = __dyc_funcallvar_514;
                                                                                                                                                                                                                          __s1_len___15 = (unsigned long )tmp___329;
                                                                                                                                                                                                                          tmp___330 = __dyc_funcallvar_515;
                                                                                                                                                                                                                          __s2_len___15 = (unsigned long )tmp___330;
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                          if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                                                            goto _L___34;
                                                                                                                                                                                                                          } else {
                                                                                                                                                                                                                            if (__s1_len___15 >= 4UL) {
                                                                                                                                                                                                                              _L___34:  
                                                                                                                                                                                                                              if (! ((unsigned long )((void const   *)("--children" + 1)) - (unsigned long )((void const   *)"--children") == 1UL)) {
                                                                                                                                                                                                                                tmp___331 = 1;
                                                                                                                                                                                                                              } else {
                                                                                                                                                                                                                                if (__s2_len___15 >= 4UL) {
                                                                                                                                                                                                                                  tmp___331 = 1;
                                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                                  tmp___331 = 0;
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              }
                                                                                                                                                                                                                            } else {
                                                                                                                                                                                                                              tmp___331 = 0;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                          if (tmp___331) {
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                            tmp___323 = __dyc_funcallvar_516;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          } else {
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                            tmp___328 = __dyc_funcallvar_517;
                                                                                                                                                                                                                            tmp___323 = tmp___328;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                          {
                                                                                                                                                                                                                          tmp___328 = __dyc_funcallvar_518;
                                                                                                                                                                                                                          tmp___323 = tmp___328;
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        if (tmp___323) {
                                                                                                                                                                                                                          if (0) {
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                            tmp___311 = __dyc_funcallvar_519;
                                                                                                                                                                                                                            __s1_len___14 = (unsigned long )tmp___311;
                                                                                                                                                                                                                            tmp___312 = __dyc_funcallvar_520;
                                                                                                                                                                                                                            __s2_len___14 = (unsigned long )tmp___312;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                            if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                                                              goto _L___32;
                                                                                                                                                                                                                            } else {
                                                                                                                                                                                                                              if (__s1_len___14 >= 4UL) {
                                                                                                                                                                                                                                _L___32:  
                                                                                                                                                                                                                                if (! ((unsigned long )((void const   *)("--ignore-missing" + 1)) - (unsigned long )((void const   *)"--ignore-missing") == 1UL)) {
                                                                                                                                                                                                                                  tmp___313 = 1;
                                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                                  if (__s2_len___14 >= 4UL) {
                                                                                                                                                                                                                                    tmp___313 = 1;
                                                                                                                                                                                                                                  } else {
                                                                                                                                                                                                                                    tmp___313 = 0;
                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              } else {
                                                                                                                                                                                                                                tmp___313 = 0;
                                                                                                                                                                                                                              }
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                            if (tmp___313) {
                                                                                                                                                                                                                              {
                                                                                                                                                                                                                              tmp___305 = __dyc_funcallvar_521;
                                                                                                                                                                                                                              }
                                                                                                                                                                                                                            } else {
                                                                                                                                                                                                                              {
                                                                                                                                                                                                                              tmp___310 = __dyc_funcallvar_522;
                                                                                                                                                                                                                              tmp___305 = tmp___310;
                                                                                                                                                                                                                              }
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          } else {
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                            tmp___310 = __dyc_funcallvar_523;
                                                                                                                                                                                                                            tmp___305 = tmp___310;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                          if (tmp___305) {
                                                                                                                                                                                                                            if (opt) {
                                                                                                                                                                                                                              if (opt->allow_exclude_promisor_objects) {
                                                                                                                                                                                                                                if (0) {
                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                  tmp___293 = __dyc_funcallvar_524;
                                                                                                                                                                                                                                  __s1_len___13 = (unsigned long )tmp___293;
                                                                                                                                                                                                                                  tmp___294 = __dyc_funcallvar_525;
                                                                                                                                                                                                                                  __s2_len___13 = (unsigned long )tmp___294;
                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                  if (! ((unsigned long )((void const   *)(arg + 1)) - (unsigned long )((void const   *)arg) == 1UL)) {
                                                                                                                                                                                                                                    goto _L___28;
                                                                                                                                                                                                                                  } else {
                                                                                                                                                                                                                                    if (__s1_len___13 >= 4UL) {
                                                                                                                                                                                                                                      _L___28:  
                                                                                                                                                                                                                                      if (! ((unsigned long )((void const   *)("--exclude-promisor-objects" + 1)) - (unsigned long )((void const   *)"--exclude-promisor-objects") == 1UL)) {
                                                                                                                                                                                                                                        tmp___295 = 1;
                                                                                                                                                                                                                                      } else {
                                                                                                                                                                                                                                        if (__s2_len___13 >= 4UL) {
                                                                                                                                                                                                                                          tmp___295 = 1;
                                                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                                          tmp___295 = 0;
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                    } else {
                                                                                                                                                                                                                                      tmp___295 = 0;
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                  if (tmp___295) {
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                    tmp___287 = __dyc_funcallvar_526;
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  } else {
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                    tmp___292 = __dyc_funcallvar_527;
                                                                                                                                                                                                                                    tmp___287 = tmp___292;
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                  tmp___292 = __dyc_funcallvar_528;
                                                                                                                                                                                                                                  tmp___287 = tmp___292;
                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                if (tmp___287) {
                                                                                                                                                                                                                                  goto _L___30;
                                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                                  if (fetch_if_missing) {
                                                                                                                                                                                                                                    {

                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                  revs->exclude_promisor_objects = 1U;
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                              } else {
                                                                                                                                                                                                                                goto _L___30;
                                                                                                                                                                                                                              }
                                                                                                                                                                                                                            } else {
                                                                                                                                                                                                                              _L___30:  
                                                                                                                                                                                                                              {
                                                                                                                                                                                                                              tmp___276 = __dyc_funcallvar_529;
                                                                                                                                                                                                                              opts = tmp___276;
                                                                                                                                                                                                                              }
                                                                                                                                                                                                                              if (! opts) {
                                                                                                                                                                                                                                tmp___277 = *unkc;
                                                                                                                                                                                                                                (*unkc) ++;
                                                                                                                                                                                                                                *(unkv + tmp___277) = arg;
                                                                                                                                                                                                                              }
                                                                                                                                                                                                                              goto __dyc_dummy_label;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          } else {
                                                                                                                                                                                                                            revs->ignore_missing = 1U;
                                                                                                                                                                                                                          }
                                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                          revs->children.name = "children";
                                                                                                                                                                                                                          revs->limited = 1U;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                      } else {
                                                                                                                                                                                                                        revs->reverse ^= 1U;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                  } else {
                                                                                                                                                                                                                    revs->invert_grep = 1;
                                                                                                                                                                                                                  }
                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                  revs->grep_filter.all_match = 1;
                                                                                                                                                                                                                }
                                                                                                                                                                                                              } else {
                                                                                                                                                                                                                revs->grep_filter.pattern_type_option = 4;
                                                                                                                                                                                                              }
                                                                                                                                                                                                            } else {
                                                                                                                                                                                                              revs->grep_filter.pattern_type_option = 4;
                                                                                                                                                                                                            }
                                                                                                                                                                                                          } else {
                                                                                                                                                                                                            revs->grep_filter.pattern_type_option = 3;
                                                                                                                                                                                                          }
                                                                                                                                                                                                        } else {
                                                                                                                                                                                                          revs->grep_filter.pattern_type_option = 3;
                                                                                                                                                                                                        }
                                                                                                                                                                                                      } else {
                                                                                                                                                                                                        revs->grep_filter.ignore_case = 1;
                                                                                                                                                                                                        revs->diffopt.pickaxe_opts |= 32U;
                                                                                                                                                                                                      }
                                                                                                                                                                                                    } else {
                                                                                                                                                                                                      revs->grep_filter.ignore_case = 1;
                                                                                                                                                                                                      revs->diffopt.pickaxe_opts |= 32U;
                                                                                                                                                                                                    }
                                                                                                                                                                                                  } else {
                                                                                                                                                                                                    revs->grep_filter.pattern_type_option = 2;
                                                                                                                                                                                                  }
                                                                                                                                                                                                } else {
                                                                                                                                                                                                  revs->grep_filter.pattern_type_option = 2;
                                                                                                                                                                                                }
                                                                                                                                                                                              } else {
                                                                                                                                                                                                revs->grep_filter.pattern_type_option = 1;
                                                                                                                                                                                              }
                                                                                                                                                                                            }
                                                                                                                                                                                          }
                                                                                                                                                                                        }
                                                                                                                                                                                      }
                                                                                                                                                                                    } else {
                                                                                                                                                                                      revs->show_log_size = 1;
                                                                                                                                                                                    }
                                                                                                                                                                                  }
                                                                                                                                                                                } else {
                                                                                                                                                                                  revs->date_mode.type = 2;
                                                                                                                                                                                  revs->date_mode_explicit = 1U;
                                                                                                                                                                                }
                                                                                                                                                                              } else {
                                                                                                                                                                                revs->simplify_history = 0U;
                                                                                                                                                                              }
                                                                                                                                                                            } else {
                                                                                                                                                                              revs->show_pulls = 1U;
                                                                                                                                                                            }
                                                                                                                                                                          } else {
                                                                                                                                                                            revs->diff = 1U;
                                                                                                                                                                            revs->full_diff = 1U;
                                                                                                                                                                          }
                                                                                                                                                                        } else {
                                                                                                                                                                          revs->abbrev_commit = 0U;
                                                                                                                                                                        }
                                                                                                                                                                      } else {
                                                                                                                                                                        revs->abbrev_commit = 1U;
                                                                                                                                                                        revs->abbrev_commit_given = 1U;
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  } else {
                                                                                                                                                                    revs->abbrev = (unsigned int )default_abbrev;
                                                                                                                                                                  }
                                                                                                                                                                } else {
                                                                                                                                                                  revs->abbrev = 0U;
                                                                                                                                                                }
                                                                                                                                                              } else {
                                                                                                                                                                revs->always_show_header = 1U;
                                                                                                                                                              }
                                                                                                                                                            } else {
                                                                                                                                                              revs->no_commit_id = 1U;
                                                                                                                                                            }
                                                                                                                                                          } else {
                                                                                                                                                            revs->show_root_diff = 1U;
                                                                                                                                                          }
                                                                                                                                                        } else {
                                                                                                                                                          revs->encode_email_headers = 0U;
                                                                                                                                                        }
                                                                                                                                                      } else {
                                                                                                                                                        revs->encode_email_headers = 1U;
                                                                                                                                                      }
                                                                                                                                                    } else {
                                                                                                                                                      {
                                                                                                                                                      revs->topo_order = 1U;
                                                                                                                                                      revs->rewrite_parents = 1U;
                                                                                                                                                      revs->graph = __dyc_funcallvar_530;
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                  } else {
                                                                                                                                                    {
                                                                                                                                                    revs->verbose_header = 1U;

                                                                                                                                                    revs->pretty_given = 1U;
                                                                                                                                                    revs->abbrev_commit = 1U;
                                                                                                                                                    }
                                                                                                                                                  }
                                                                                                                                                } else {
                                                                                                                                                  revs->notes_opt.use_default_notes = 0;
                                                                                                                                                }
                                                                                                                                              } else {
                                                                                                                                                revs->show_notes_given = 1U;
                                                                                                                                                revs->notes_opt.use_default_notes = 1;
                                                                                                                                              }
                                                                                                                                            } else {
                                                                                                                                              {

                                                                                                                                              revs->show_notes_given = 1U;
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                    } else {
                                                                                                                                      revs->break_bar = "                    ..........";
                                                                                                                                      revs->track_linear = 1U;
                                                                                                                                      revs->track_first_time = 1U;
                                                                                                                                    }
                                                                                                                                  } else {
                                                                                                                                    revs->show_signature = 0U;
                                                                                                                                  }
                                                                                                                                } else {
                                                                                                                                  revs->show_signature = 1U;
                                                                                                                                }
                                                                                                                              } else {
                                                                                                                                {

                                                                                                                                revs->show_notes_given = 1U;
                                                                                                                                }
                                                                                                                              }
                                                                                                                            } else {
                                                                                                                              {

                                                                                                                              revs->show_notes_given = 1U;
                                                                                                                              }
                                                                                                                            }
                                                                                                                          }
                                                                                                                        } else {
                                                                                                                          revs->expand_tabs_in_log = 0;
                                                                                                                        }
                                                                                                                      } else {
                                                                                                                        revs->expand_tabs_in_log = 8;
                                                                                                                      }
                                                                                                                    }
                                                                                                                  }
                                                                                                                } else {
                                                                                                                  {
                                                                                                                  revs->verbose_header = 1U;
                                                                                                                  revs->pretty_given = 1U;

                                                                                                                  }
                                                                                                                }
                                                                                                              } else {
                                                                                                                revs->verbose_header = 1U;
                                                                                                              }
                                                                                                            }
                                                                                                          } else {
                                                                                                            revs->diff = 1U;
                                                                                                            revs->diffopt.flags.recursive = 1U;
                                                                                                            revs->diffopt.flags.tree_in_recursive = 1U;
                                                                                                          }
                                                                                                        } else {
                                                                                                          revs->diff = 1U;
                                                                                                          revs->diffopt.flags.recursive = 1U;
                                                                                                        }
                                                                                                      }
                                                                                                    } else {
                                                                                                      revs->no_kept_objects = 1U;
                                                                                                      revs->keep_pack_cache_flags |= 2U;
                                                                                                      revs->keep_pack_cache_flags |= 1U;
                                                                                                    }
                                                                                                  }
                                                                                                } else {
                                                                                                  revs->unpacked = 1U;
                                                                                                }
                                                                                              } else {
                                                                                                revs->tag_objects = 1U;
                                                                                                revs->tree_objects = 1U;
                                                                                                revs->blob_objects = 1U;
                                                                                                revs->verify_objects = 1U;
                                                                                              }
                                                                                            } else {
                                                                                              revs->tag_objects = 1U;
                                                                                              revs->tree_objects = 1U;
                                                                                              revs->blob_objects = 1U;
                                                                                              revs->edge_hint = 1U;
                                                                                              revs->edge_hint_aggressive = 1U;
                                                                                            }
                                                                                          } else {
                                                                                            revs->tag_objects = 1U;
                                                                                            revs->tree_objects = 1U;
                                                                                            revs->blob_objects = 1U;
                                                                                            revs->edge_hint = 1U;
                                                                                          }
                                                                                        } else {
                                                                                          revs->tag_objects = 1U;
                                                                                          revs->tree_objects = 1U;
                                                                                          revs->blob_objects = 1U;
                                                                                        }
                                                                                      } else {
                                                                                        if (revs->cherry_mark) {
                                                                                          {

                                                                                          }
                                                                                        }
                                                                                        revs->cherry_pick = 1U;
                                                                                        revs->limited = 1U;
                                                                                      }
                                                                                    } else {
                                                                                      if (revs->cherry_pick) {
                                                                                        {

                                                                                        }
                                                                                      }
                                                                                      revs->cherry_mark = 1U;
                                                                                      revs->limited = 1U;
                                                                                    }
                                                                                  } else {
                                                                                    revs->count = 1U;
                                                                                  }
                                                                                } else {
                                                                                  if (revs->left_only) {
                                                                                    {

                                                                                    }
                                                                                  }
                                                                                  revs->cherry_mark = 1U;
                                                                                  revs->right_only = 1U;
                                                                                  revs->max_parents = 1;
                                                                                  revs->limited = 1U;
                                                                                }
                                                                              } else {
                                                                                if (revs->left_only) {
                                                                                  {

                                                                                  }
                                                                                }
                                                                                revs->right_only = 1U;
                                                                              }
                                                                            } else {
                                                                              if (revs->right_only) {
                                                                                {

                                                                                }
                                                                              }
                                                                              revs->left_only = 1U;
                                                                            }
                                                                          } else {
                                                                            revs->left_right = 1U;
                                                                          }
                                                                        } else {
                                                                          revs->boundary = 1U;
                                                                        }
                                                                      } else {
                                                                        revs->max_parents = -1;
                                                                      }
                                                                    }
                                                                  } else {
                                                                    revs->min_parents = 0;
                                                                  }
                                                                }
                                                              } else {
                                                                revs->max_parents = 1;
                                                              }
                                                            } else {
                                                              revs->min_parents = 2;
                                                            }
                                                          } else {
                                                            revs->remove_empty_trees = 1U;
                                                          }
                                                        } else {
                                                          revs->tree_blobs_in_commit_order = 1U;
                                                        }
                                                      } else {
                                                        revs->dense = 0U;
                                                      }
                                                    } else {
                                                      revs->dense = 1U;
                                                    }
                                                  } else {
                                                    revs->rewrite_parents = 1U;
                                                    revs->print_parents = 1U;
                                                  }
                                                }
                                              } else {
                                                revs->early_output = 100U;
                                                revs->topo_order = 1U;
                                              }
                                            } else {
                                              revs->sort_order = 2;
                                              revs->topo_order = 1U;
                                            }
                                          } else {
                                            revs->sort_order = 1;
                                            revs->topo_order = 1U;
                                          }
                                        } else {
                                          revs->simplify_merges = 1U;
                                          revs->topo_order = 1U;
                                          revs->rewrite_parents = 1U;
                                          revs->simplify_history = 0U;
                                          revs->simplify_by_decoration = 1U;
                                          revs->limited = 1U;
                                          revs->prune = 1U;
                                        }
                                      } else {
                                        revs->simplify_merges = 1U;
                                        revs->topo_order = 1U;
                                        revs->rewrite_parents = 1U;
                                        revs->simplify_history = 0U;
                                        revs->limited = 1U;
                                      }
                                    } else {
                                      revs->sort_order = 0;
                                      revs->topo_order = 1U;
                                    }
                                  } else {
                                    revs->show_merge = 1U;
                                  }
                                } else {
                                  if (argc <= 1) {
                                    {

                                    tmp___212 = __dyc_funcallvar_531;
                                    }
                                    goto __dyc_dummy_label;
                                  }
                                  revs->def = *(argv + 1);
                                  goto __dyc_dummy_label;
                                }
                              } else {
                                {

                                }
                              }
                            } else {
                              {

                              }
                            }
                          } else {
                            revs->ancestry_path = 1U;
                            revs->simplify_history = 0U;
                            revs->limited = 1U;
                          }
                        } else {
                          revs->first_parent_only = 1U;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        } else {
          if (argc <= 1) {
            {

            tmp___207 = __dyc_funcallvar_532;
            }
            goto __dyc_dummy_label;
          }
          {
          tmp___208 = __dyc_funcallvar_533;
          revs->max_count = (int )tmp___208;
          revs->no_walk = 0U;
          }
          goto __dyc_dummy_label;
        }
      }
    }
  }
  if (revs->graph) {
    if (revs->track_linear) {
      {

      }
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(git_log_output_encoding);
  __dyc_print_ptr__char(arg);
  __dyc_printpre_byte(hexsz);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_printpre_byte(__s1_len___3);
  __dyc_printpre_byte(__s2_len___3);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
  __dyc_printpre_byte(__s1_len___5);
  __dyc_printpre_byte(__s2_len___5);
  __dyc_printpre_byte(__s1_len___6);
  __dyc_printpre_byte(__s2_len___6);
  __dyc_printpre_byte(__s1_len___7);
  __dyc_printpre_byte(__s2_len___7);
  __dyc_printpre_byte(__s1_len___8);
  __dyc_printpre_byte(__s2_len___8);
  __dyc_printpre_byte(__s1_len___9);
  __dyc_printpre_byte(__s2_len___9);
  __dyc_printpre_byte(tmp___207);
  __dyc_printpre_byte(tmp___212);
  __dyc_print_ptr__char(tmp___216);
  __dyc_printpre_byte(__s1_len___10);
  __dyc_printpre_byte(__s2_len___10);
  __dyc_printpre_byte(__s1_len___11);
  __dyc_printpre_byte(__s2_len___11);
  __dyc_printpre_byte(__s1_len___12);
  __dyc_printpre_byte(__s2_len___12);
  __dyc_printpre_byte(__s1_len___13);
  __dyc_printpre_byte(__s2_len___13);
  __dyc_printpre_byte(__s1_len___14);
  __dyc_printpre_byte(__s2_len___14);
  __dyc_printpre_byte(__s1_len___15);
  __dyc_printpre_byte(__s2_len___15);
  __dyc_printpre_byte(__s1_len___16);
  __dyc_printpre_byte(__s2_len___16);
  __dyc_printpre_byte(__s1_len___17);
  __dyc_printpre_byte(__s2_len___17);
  __dyc_printpre_byte(__s1_len___18);
  __dyc_printpre_byte(__s2_len___18);
  __dyc_printpre_byte(__s1_len___19);
  __dyc_printpre_byte(__s2_len___19);
  __dyc_printpre_byte(__s1_len___20);
  __dyc_printpre_byte(__s2_len___20);
  __dyc_printpre_byte(__s1_len___21);
  __dyc_printpre_byte(__s2_len___21);
  __dyc_printpre_byte(__s1_len___22);
  __dyc_printpre_byte(__s2_len___22);
  __dyc_printpre_byte(__s1_len___23);
  __dyc_printpre_byte(__s2_len___23);
  __dyc_printpre_byte(__s1_len___24);
  __dyc_printpre_byte(__s2_len___24);
  __dyc_printpre_byte(__s1_len___25);
  __dyc_printpre_byte(__s2_len___25);
  __dyc_printpre_byte(__s1_len___26);
  __dyc_printpre_byte(__s2_len___26);
  __dyc_printpre_byte(__s1_len___27);
  __dyc_printpre_byte(__s2_len___27);
  __dyc_printpre_byte(__s1_len___28);
  __dyc_printpre_byte(__s2_len___28);
  __dyc_printpre_byte(__s1_len___29);
  __dyc_printpre_byte(__s2_len___29);
  __dyc_printpre_byte(__s1_len___30);
  __dyc_printpre_byte(__s2_len___30);
  __dyc_printpre_byte(__s1_len___31);
  __dyc_printpre_byte(__s2_len___31);
  __dyc_printpre_byte(__s1_len___32);
  __dyc_printpre_byte(__s2_len___32);
  __dyc_printpre_byte(__s1_len___33);
  __dyc_printpre_byte(__s2_len___33);
  __dyc_printpre_byte(__s1_len___34);
  __dyc_printpre_byte(__s2_len___34);
  __dyc_printpre_byte(__s1_len___35);
  __dyc_printpre_byte(__s2_len___35);
  __dyc_printpre_byte(__s1_len___36);
  __dyc_printpre_byte(__s2_len___36);
  __dyc_printpre_byte(__s1_len___37);
  __dyc_printpre_byte(__s2_len___37);
  __dyc_printpre_byte(__s1_len___38);
  __dyc_printpre_byte(__s2_len___38);
  __dyc_printpre_byte(__s1_len___39);
  __dyc_printpre_byte(__s2_len___39);
  __dyc_printpre_byte(__s1_len___40);
  __dyc_printpre_byte(__s2_len___40);
  __dyc_printpre_byte(__s1_len___41);
  __dyc_printpre_byte(__s2_len___41);
  __dyc_printpre_byte(__s1_len___42);
  __dyc_printpre_byte(__s2_len___42);
  __dyc_printpre_byte(__s1_len___43);
  __dyc_printpre_byte(__s2_len___43);
  __dyc_printpre_byte(__s1_len___44);
  __dyc_printpre_byte(__s2_len___44);
  __dyc_printpre_byte(__s1_len___45);
  __dyc_printpre_byte(__s2_len___45);
  __dyc_printpre_byte(__s1_len___46);
  __dyc_printpre_byte(__s2_len___46);
  __dyc_printpre_byte(__s1_len___47);
  __dyc_printpre_byte(__s2_len___47);
  __dyc_printpre_byte(__s1_len___48);
  __dyc_printpre_byte(__s2_len___48);
  __dyc_printpre_byte(__s1_len___49);
  __dyc_printpre_byte(__s2_len___49);
  __dyc_printpre_byte(__s1_len___50);
  __dyc_printpre_byte(__s2_len___50);
  __dyc_printpre_byte(__s1_len___51);
  __dyc_printpre_byte(__s2_len___51);
  __dyc_printpre_byte(__s1_len___52);
  __dyc_printpre_byte(__s2_len___52);
  __dyc_printpre_byte(__s1_len___53);
  __dyc_printpre_byte(__s2_len___53);
  __dyc_printpre_byte(__s1_len___54);
  __dyc_printpre_byte(__s2_len___54);
  __dyc_printpre_byte(__s1_len___55);
  __dyc_printpre_byte(__s2_len___55);
  __dyc_printpre_byte(__s1_len___56);
  __dyc_printpre_byte(__s2_len___56);
  __dyc_printpre_byte(__s1_len___57);
  __dyc_printpre_byte(__s2_len___57);
  __dyc_printpre_byte(__s1_len___58);
  __dyc_printpre_byte(__s2_len___58);
  __dyc_printpre_byte(__s1_len___59);
  __dyc_printpre_byte(__s2_len___59);
  __dyc_printpre_byte(__s1_len___60);
  __dyc_printpre_byte(__s2_len___60);
  __dyc_printpre_byte(__s1_len___61);
  __dyc_printpre_byte(__s2_len___61);
  __dyc_printpre_byte(__s1_len___62);
  __dyc_printpre_byte(__s2_len___62);
  __dyc_printpre_byte(__s1_len___63);
  __dyc_printpre_byte(__s2_len___63);
  __dyc_printpre_byte(__s1_len___64);
  __dyc_printpre_byte(__s2_len___64);
  __dyc_printpre_byte(__s1_len___65);
  __dyc_printpre_byte(__s2_len___65);
  __dyc_printpre_byte(__s1_len___66);
  __dyc_printpre_byte(__s2_len___66);
  __dyc_printpre_byte(__s1_len___67);
  __dyc_printpre_byte(__s2_len___67);
  __dyc_printpre_byte(__s1_len___68);
  __dyc_printpre_byte(__s2_len___68);
  __dyc_printpre_byte(__s1_len___69);
  __dyc_printpre_byte(__s2_len___69);
  __dyc_printpre_byte(__s1_len___70);
  __dyc_printpre_byte(__s2_len___70);
  __dyc_printpre_byte(__s1_len___71);
  __dyc_printpre_byte(__s2_len___71);
  __dyc_printpre_byte(__s1_len___72);
  __dyc_printpre_byte(__s2_len___72);
  __dyc_printpre_byte(__s1_len___73);
  __dyc_printpre_byte(__s2_len___73);
  __dyc_printpre_byte(__s1_len___74);
  __dyc_printpre_byte(__s2_len___74);
  __dyc_printpre_byte(__s1_len___75);
  __dyc_printpre_byte(__s2_len___75);
  __dyc_printpre_byte(__s1_len___76);
  __dyc_printpre_byte(__s2_len___76);
  __dyc_printpre_byte(__s1_len___77);
  __dyc_printpre_byte(__s2_len___77);
  __dyc_printpre_byte(__s1_len___78);
  __dyc_printpre_byte(__s2_len___78);
  __dyc_printpre_byte(__s1_len___79);
  __dyc_printpre_byte(__s2_len___79);
  __dyc_printpre_byte(__s1_len___80);
  __dyc_printpre_byte(__s2_len___80);
  __dyc_printpre_byte(__s1_len___81);
  __dyc_printpre_byte(__s2_len___81);
  __dyc_printpre_byte(__s1_len___82);
  __dyc_printpre_byte(__s2_len___82);
  __dyc_printpre_byte(__s1_len___83);
  __dyc_printpre_byte(__s2_len___83);
  __dyc_printpre_byte(__s1_len___84);
  __dyc_printpre_byte(__s2_len___84);
  __dyc_printpre_byte(__s1_len___85);
  __dyc_printpre_byte(__s2_len___85);
  __dyc_printpre_byte(__s1_len___86);
  __dyc_printpre_byte(__s2_len___86);
  __dyc_printpre_byte(__s1_len___87);
  __dyc_printpre_byte(__s2_len___87);
  __dyc_printpre_byte(__s1_len___88);
  __dyc_printpre_byte(__s2_len___88);
  __dyc_printpre_byte(__s1_len___89);
  __dyc_printpre_byte(__s2_len___89);
  __dyc_printpre_byte(__s1_len___90);
  __dyc_printpre_byte(__s2_len___90);
  __dyc_printpre_byte(__s1_len___91);
  __dyc_printpre_byte(__s2_len___91);
  __dyc_printpre_byte(__s1_len___92);
  __dyc_printpre_byte(__s2_len___92);
  __dyc_printpre_byte(__s1_len___93);
  __dyc_printpre_byte(__s2_len___93);
}
}

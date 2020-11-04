/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf -m 1 ../../lib/uninorm/composition-table.gperf  */
/* Computed positions: -k'2-3,6' */


#define TOTAL_KEYWORDS 940
#define MIN_WORD_LENGTH 6
#define MAX_WORD_LENGTH 6
#define MIN_HASH_VALUE 1
#define MAX_HASH_VALUE 1565
/* maximum key range = 1565, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
/*ARGSUSED*/
static unsigned int
gl_uninorm_compose_hash (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
         7,    1,    0,    3,   58,  132,  531,   62,    4,   33,
       117,  268,  476,  135,  509,  481,  103,  265,  249,  495,
        61,  124,  336,  409,  703,  241,  435,  462,  738, 1566,
        48,   13,  901,  766,  322,  635,  192,  621,  846,   13,
       337,   65,  161,  130,  103,   28,  255,  640,  133,  342,
       172,   52, 1566,  818,  201,   34,  695,   50,   31, 1566,
        16,   35,  438,  139,   63,   89,  272,    2,  588,  167,
        12,  375,  289,   61,   44,  548,  431,  452,  395,  180,
       794,  853,  362,  561,  456,  202,  677,  360,  195,  300,
       572,  715, 1566,  291, 1566,  276,  814,   26,  634,  579,
       270,   98,  423,  415,  323,   42,  862,  657,  559,  324,
       262,  124,  863, 1566,  251,  538,  236,  133,   47,  406,
       691,  219,  590,    5,   56,   83, 1566,    1, 1566, 1566,
        65,   39, 1566, 1566,   37,   35, 1566, 1566, 1566, 1566,
      1566, 1566, 1566, 1566,    4,  527,   18, 1566,    0,  849,
      1566,  781, 1566,  572,   59,   73, 1566,  204, 1566,  417,
       618,  511,   20, 1566, 1566,  708,  167, 1566,  855,  685,
      1566,  333,   73,  136,   71,  625,  611,  523,   12,  311,
        11,  649,   10,  505,   62,  482, 1566,  113, 1566,  126,
         7,  476, 1566,  614,  853,    1,   41,  560,  553,  261,
       104,  719,  668,  854,   19,   10,    9,  728,   31, 1566,
       442, 1566,  749,  313,   12,    0,  659,    3, 1566,  329,
        37, 1566, 1566, 1566,   44, 1566,  847, 1566,   33,    4,
        23,    1,   33,   24,  757,    4, 1566, 1566, 1566,    3,
        93,   73,   72, 1566,  824,   20,   17, 1566,    0, 1566,
      1566, 1566,   77,   46,  460, 1566, 1566
    };
  return asso_values[(unsigned char)str[5]+1] + asso_values[(unsigned char)str[2]] + asso_values[(unsigned char)str[1]];
}

const struct composition_rule *
gl_uninorm_compose_lookup (register const char *str, register size_t len)
{
  static const unsigned char lengthtable[] =
    {
       0,  6,  6,  0,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  0,  6,  6,
       6,  6,  6,  6,  6,  0,  6,  6,  6,  6,  6,  6,  6,  6,
       0,  6,  6,  6,  6,  6,  6,  6,  6,  0,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  0,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  0,
       6,  6,  6,  0,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  0,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  0,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  0,  6,  6,  0,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  0,  6,  6,  0,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  0,  6,  6,  6,  6,  6,  6,  0,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       0,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  0,  6,  6,
       0,  6,  0,  6,  0,  6,  6,  6,  6,  0,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,  6,
       6,  6,  6,  6,  6,  6,  6,  0,  6,  6,  6,  6,  0,  6,
       6,  6,  0,  6,  0,  6,  6,  6,  6,  0,  6,  6,  0,  6,
       6,  6,  0,  6,  0,  0,  0,  6,  0,  6,  0,  6,  6,  6,
       6,  0,  6,  6,  6,  6,  6,  0,  6,  0,  6,  0,  0,  6,
       6,  6,  6,  0,  6,  0,  0,  6,  6,  0,  6,  6,  6,  0,
       6,  0,  0,  0,  6,  0,  6,  6,  0,  6,  6,  0,  0,  0,
       0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  6,  0,  6,  0,
       0,  0,  0,  0,  6,  6,  0,  0,  0,  0,  6,  6,  6,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  6,
       0,  0,  0,  0,  0,  0,  6,  6,  0,  6,  6,  6,  0,  6,
       0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,
       6,  0,  0,  0,  6,  0,  0,  6,  6,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  6,  0,  0,  0,  6,  6,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  6,  0,  0,  0,  0,  0,  0,
       0,  6,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  6,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  6,  0,  0,  0,  0,  0,  6,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,
       0,  0,  0,  6,  0,  0,  0,  0,  0,  6,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  6,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6
    };
  static const struct composition_rule wordlist[] =
    {
      {""},
#line 581 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\002\000\003\001", 0x1eae},
#line 583 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\002\000\003\000", 0x1eb0},
      {""},
#line 582 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\003\000\003\001", 0x1eaf},
#line 584 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\003\000\003\000", 0x1eb1},
#line 566 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\177\000\003\007", 0x1e9b},
#line 247 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\370\000\003\001", 0x01ff},
#line 421 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\347\000\003\001", 0x1e09},
#line 99 "../../lib/uninorm/composition-table.gperf"
      {"\000\000C\000\003\001", 0x0106},
#line 459 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\357\000\003\001", 0x1e2f},
#line 243 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\345\000\003\001", 0x01fb},
#line 101 "../../lib/uninorm/composition-table.gperf"
      {"\000\000C\000\003\002", 0x0108},
#line 103 "../../lib/uninorm/composition-table.gperf"
      {"\000\000C\000\003\007", 0x010a},
#line 662 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\001\000\003\001", 0x1f05},
#line 660 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\001\000\003\000", 0x1f03},
#line 664 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\001\000\003B", 0x1f07},
#line 669 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\010\000\003\001", 0x1f0c},
#line 667 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\010\000\003\000", 0x1f0a},
#line 671 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\010\000\003B", 0x1f0e},
#line 661 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\000\000\003\001", 0x1f04},
#line 659 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\000\000\003\000", 0x1f02},
#line 663 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\000\000\003B", 0x1f06},
#line 442 "../../lib/uninorm/composition-table.gperf"
      {"\000\000F\000\003\007", 0x1e1e},
#line 860 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\316\000\003E", 0x1ff4},
#line 766 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\002\000\003E", 0x1f82},
#line 765 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\001\000\003E", 0x1f81},
#line 489 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\365\000\003\001", 0x1e4d},
#line 767 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\003\000\003E", 0x1f83},
#line 772 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\010\000\003E", 0x1f88},
#line 245 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\346\000\003\001", 0x01fd},
#line 515 "../../lib/uninorm/composition-table.gperf"
      {"\000\001a\000\003\007", 0x1e67},
#line 764 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\000\000\003E", 0x1f80},
#line 67 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003\001", 0x00e1},
#line 66 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003\000", 0x00e0},
#line 818 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\266\000\003E", 0x1fb7},
#line 68 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003\002", 0x00e2},
#line 279 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003\007", 0x0227},
#line 787 "../../lib/uninorm/composition-table.gperf"
      {"\000\037'\000\003E", 0x1f97},
#line 746 "../../lib/uninorm/composition-table.gperf"
      {"\000\037a\000\003\001", 0x1f65},
#line 744 "../../lib/uninorm/composition-table.gperf"
      {"\000\037a\000\003\000", 0x1f63},
#line 748 "../../lib/uninorm/composition-table.gperf"
      {"\000\037a\000\003B", 0x1f67},
#line 862 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\366\000\003E", 0x1ff7},
#line 533 "../../lib/uninorm/composition-table.gperf"
      {"\000\001i\000\003\001", 0x1e79},
#line 215 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\334\000\003\001", 0x01d7},
#line 219 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\334\000\003\000", 0x01db},
#line 670 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\011\000\003\001", 0x1f0d},
#line 668 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\011\000\003\000", 0x1f0b},
#line 672 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\011\000\003B", 0x1f0f},
#line 78 "../../lib/uninorm/composition-table.gperf"
      {"\000\000i\000\003\001", 0x00ed},
#line 77 "../../lib/uninorm/composition-table.gperf"
      {"\000\000i\000\003\000", 0x00ec},
#line 797 "../../lib/uninorm/composition-table.gperf"
      {"\000\037a\000\003E", 0x1fa1},
#line 79 "../../lib/uninorm/composition-table.gperf"
      {"\000\000i\000\003\002", 0x00ee},
#line 793 "../../lib/uninorm/composition-table.gperf"
      {"\000\037-\000\003E", 0x1f9d},
#line 138 "../../lib/uninorm/composition-table.gperf"
      {"\000\000J\000\003\002", 0x0134},
#line 754 "../../lib/uninorm/composition-table.gperf"
      {"\000\037i\000\003\001", 0x1f6d},
#line 752 "../../lib/uninorm/composition-table.gperf"
      {"\000\037i\000\003\000", 0x1f6b},
#line 756 "../../lib/uninorm/composition-table.gperf"
      {"\000\037i\000\003B", 0x1f6f},
#line 773 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\011\000\003E", 0x1f89},
#line 587 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\002\000\003\003", 0x1eb4},
#line 491 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\365\000\003\010", 0x1e4f},
#line 624 "../../lib/uninorm/composition-table.gperf"
      {"\000\036\315\000\003\002", 0x1ed9},
#line 588 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\003\000\003\003", 0x1eb5},
#line 714 "../../lib/uninorm/composition-table.gperf"
      {"\000\0379\000\003\001", 0x1f3d},
#line 712 "../../lib/uninorm/composition-table.gperf"
      {"\000\0379\000\003\000", 0x1f3b},
#line 716 "../../lib/uninorm/composition-table.gperf"
      {"\000\0379\000\003B", 0x1f3f},
#line 70 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003\010", 0x00e4},
#line 805 "../../lib/uninorm/composition-table.gperf"
      {"\000\037i\000\003E", 0x1fa9},
#line 52 "../../lib/uninorm/composition-table.gperf"
      {"\000\000I\000\003\001", 0x00cd},
#line 51 "../../lib/uninorm/composition-table.gperf"
      {"\000\000I\000\003\000", 0x00cc},
#line 623 "../../lib/uninorm/composition-table.gperf"
      {"\000\036\314\000\003\002", 0x1ed8},
#line 53 "../../lib/uninorm/composition-table.gperf"
      {"\000\000I\000\003\002", 0x00ce},
#line 137 "../../lib/uninorm/composition-table.gperf"
      {"\000\000I\000\003\007", 0x0130},
#line 884 "../../lib/uninorm/composition-table.gperf"
      {"\000\000<\000\0038", 0x226e},
#line 728 "../../lib/uninorm/composition-table.gperf"
      {"\000\037I\000\003\001", 0x1f4d},
#line 726 "../../lib/uninorm/composition-table.gperf"
      {"\000\037I\000\003\000", 0x1f4b},
#line 721 "../../lib/uninorm/composition-table.gperf"
      {"\000\037@\000\003\001", 0x1f44},
#line 719 "../../lib/uninorm/composition-table.gperf"
      {"\000\037@\000\003\000", 0x1f42},
#line 698 "../../lib/uninorm/composition-table.gperf"
      {"\000\037)\000\003\001", 0x1f2d},
#line 696 "../../lib/uninorm/composition-table.gperf"
      {"\000\037)\000\003\000", 0x1f2b},
#line 700 "../../lib/uninorm/composition-table.gperf"
      {"\000\037)\000\003B", 0x1f2f},
#line 858 "../../lib/uninorm/composition-table.gperf"
      {"\000\037|\000\003E", 0x1ff2},
#line 80 "../../lib/uninorm/composition-table.gperf"
      {"\000\000i\000\003\010", 0x00ef},
#line 768 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\004\000\003E", 0x1f84},
#line 216 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\374\000\003\001", 0x01d8},
#line 220 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\374\000\003\000", 0x01dc},
#line 826 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\256\000\003E", 0x1fc4},
#line 771 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\007\000\003E", 0x1f87},
#line 816 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\254\000\003E", 0x1fb4},
#line 328 "../../lib/uninorm/composition-table.gperf"
      {"\000\004:\000\003\001", 0x045c},
#line 789 "../../lib/uninorm/composition-table.gperf"
      {"\000\037)\000\003E", 0x1f99},
#line 69 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003\003", 0x00e3},
#line 881 "../../lib/uninorm/composition-table.gperf"
      {"\000\000=\000\0038", 0x2260},
#line 360 "../../lib/uninorm/composition-table.gperf"
      {"\000\004C\000\003\010", 0x04f1},
#line 342 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\331\000\003\010", 0x04db},
#line 96 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003\006", 0x0103},
#line 41 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003\001", 0x00c1},
#line 40 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003\000", 0x00c0},
#line 98 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003(", 0x0105},
#line 42 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003\002", 0x00c2},
#line 278 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003\007", 0x0226},
#line 54 "../../lib/uninorm/composition-table.gperf"
      {"\000\000I\000\003\010", 0x00cf},
#line 722 "../../lib/uninorm/composition-table.gperf"
      {"\000\037A\000\003\001", 0x1f45},
#line 720 "../../lib/uninorm/composition-table.gperf"
      {"\000\037A\000\003\000", 0x1f43},
#line 363 "../../lib/uninorm/composition-table.gperf"
      {"\000\004'\000\003\010", 0x04f4},
#line 74 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003\001", 0x00e9},
#line 73 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003\000", 0x00e8},
#line 130 "../../lib/uninorm/composition-table.gperf"
      {"\000\000i\000\003\003", 0x0129},
#line 75 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003\002", 0x00ea},
#line 114 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003\007", 0x0117},
#line 326 "../../lib/uninorm/composition-table.gperf"
      {"\000\0043\000\003\001", 0x0453},
#line 134 "../../lib/uninorm/composition-table.gperf"
      {"\000\000i\000\003\006", 0x012d},
#line 537 "../../lib/uninorm/composition-table.gperf"
      {"\000\000v\000\003\003", 0x1e7d},
#line 605 "../../lib/uninorm/composition-table.gperf"
      {"\000\036\270\000\003\002", 0x1ec6},
#line 136 "../../lib/uninorm/composition-table.gperf"
      {"\000\000i\000\003(", 0x012f},
#line 354 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\351\000\003\010", 0x04eb},
#line 677 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\020\000\003\001", 0x1f14},
#line 675 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\020\000\003\000", 0x1f12},
#line 585 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\002\000\003\011", 0x1eb2},
#line 355 "../../lib/uninorm/composition-table.gperf"
      {"\000\004-\000\003\010", 0x04ec},
#line 377 "../../lib/uninorm/composition-table.gperf"
      {"\000\0113\000\011<", 0x0934},
#line 586 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\003\000\003\011", 0x1eb3},
#line 330 "../../lib/uninorm/composition-table.gperf"
      {"\000\004C\000\003\006", 0x045e},
#line 801 "../../lib/uninorm/composition-table.gperf"
      {"\000\037e\000\003E", 0x1fa5},
#line 353 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\350\000\003\010", 0x04ea},
#line 346 "../../lib/uninorm/composition-table.gperf"
      {"\000\0047\000\003\010", 0x04df},
#line 129 "../../lib/uninorm/composition-table.gperf"
      {"\000\000I\000\003\003", 0x0128},
#line 441 "../../lib/uninorm/composition-table.gperf"
      {"\000\002)\000\003\006", 0x1e1d},
#line 792 "../../lib/uninorm/composition-table.gperf"
      {"\000\037,\000\003E", 0x1f9c},
#line 44 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003\010", 0x00c4},
#line 133 "../../lib/uninorm/composition-table.gperf"
      {"\000\000I\000\003\006", 0x012c},
#line 83 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003\001", 0x00f3},
#line 82 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003\000", 0x00f2},
#line 135 "../../lib/uninorm/composition-table.gperf"
      {"\000\000I\000\003(", 0x012e},
#line 84 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003\002", 0x00f4},
#line 287 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003\007", 0x022f},
#line 249 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003\017", 0x0201},
#line 234 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\353\000\003\004", 0x01ed},
#line 76 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003\010", 0x00eb},
#line 351 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\036\000\003\010", 0x04e6},
#line 88 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003\001", 0x00fa},
#line 87 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003\000", 0x00f9},
#line 774 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\012\000\003E", 0x1f8a},
#line 89 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003\002", 0x00fb},
#line 105 "../../lib/uninorm/composition-table.gperf"
      {"\000\000C\000\003\014", 0x010c},
#line 224 "../../lib/uninorm/composition-table.gperf"
      {"\000\002'\000\003\004", 0x01e1},
#line 705 "../../lib/uninorm/composition-table.gperf"
      {"\000\0370\000\003\001", 0x1f34},
#line 703 "../../lib/uninorm/composition-table.gperf"
      {"\000\0370\000\003\000", 0x1f32},
#line 707 "../../lib/uninorm/composition-table.gperf"
      {"\000\0370\000\003B", 0x1f36},
#line 811 "../../lib/uninorm/composition-table.gperf"
      {"\000\037o\000\003E", 0x1faf},
#line 570 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003\011", 0x1ea3},
#line 282 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\326\000\003\004", 0x022a},
#line 257 "../../lib/uninorm/composition-table.gperf"
      {"\000\000i\000\003\017", 0x0209},
#line 236 "../../lib/uninorm/composition-table.gperf"
      {"\000\002\222\000\003\014", 0x01ef},
#line 43 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003\003", 0x00c3},
#line 791 "../../lib/uninorm/composition-table.gperf"
      {"\000\037+\000\003E", 0x1f9b},
#line 283 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\366\000\003\004", 0x022b},
#line 769 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\005\000\003E", 0x1f85},
#line 95 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003\006", 0x0102},
#line 285 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\365\000\003\004", 0x022d},
#line 777 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\015\000\003E", 0x1f8d},
#line 97 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003(", 0x0104},
#line 226 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\346\000\003\004", 0x01e3},
#line 596 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003\003", 0x1ebd},
#line 86 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003\010", 0x00f6},
#line 94 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003\004", 0x0101},
#line 608 "../../lib/uninorm/composition-table.gperf"
      {"\000\000i\000\003\011", 0x1ec9},
#line 112 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003\006", 0x0115},
#line 206 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003\014", 0x01ce},
#line 397 "../../lib/uninorm/composition-table.gperf"
      {"\000\015\331\000\015\317", 0x0ddc},
#line 116 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003(", 0x0119},
#line 256 "../../lib/uninorm/composition-table.gperf"
      {"\000\000I\000\003\017", 0x0208},
#line 222 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\344\000\003\004", 0x01df},
#line 90 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003\010", 0x00fc},
#line 48 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003\001", 0x00c9},
#line 47 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003\000", 0x00c8},
#line 213 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\334\000\003\004", 0x01d5},
#line 49 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003\002", 0x00ca},
#line 113 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003\007", 0x0116},
#line 217 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\334\000\003\014", 0x01d9},
#line 221 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\304\000\003\004", 0x01de},
#line 132 "../../lib/uninorm/composition-table.gperf"
      {"\000\000i\000\003\004", 0x012b},
#line 399 "../../lib/uninorm/composition-table.gperf"
      {"\000\015\331\000\015\337", 0x0dde},
#line 315 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\025\000\003\000", 0x0400},
#line 208 "../../lib/uninorm/composition-table.gperf"
      {"\000\000i\000\003\014", 0x01d0},
#line 607 "../../lib/uninorm/composition-table.gperf"
      {"\000\000I\000\003\011", 0x1ec8},
#line 790 "../../lib/uninorm/composition-table.gperf"
      {"\000\037*\000\003E", 0x1f9a},
#line 57 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003\001", 0x00d3},
#line 56 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003\000", 0x00d2},
#line 85 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003\003", 0x00f5},
#line 58 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003\002", 0x00d4},
#line 286 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003\007", 0x022e},
#line 358 "../../lib/uninorm/composition-table.gperf"
      {"\000\004C\000\003\004", 0x04ef},
#line 157 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003\006", 0x014f},
#line 337 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\020\000\003\010", 0x04d2},
#line 963 "../../lib/uninorm/composition-table.gperf"
      {"\0000\357\0000\231", 0x30f7},
#line 232 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003(", 0x01eb},
#line 933 "../../lib/uninorm/composition-table.gperf"
      {"\0000{\0000\231", 0x307c},
#line 179 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003\003", 0x0169},
#line 248 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003\017", 0x0200},
#line 131 "../../lib/uninorm/composition-table.gperf"
      {"\000\000I\000\003\004", 0x012a},
#line 376 "../../lib/uninorm/composition-table.gperf"
      {"\000\0110\000\011<", 0x0931},
#line 183 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003\006", 0x016d},
#line 207 "../../lib/uninorm/composition-table.gperf"
      {"\000\000I\000\003\014", 0x01cf},
#line 935 "../../lib/uninorm/composition-table.gperf"
      {"\0000F\0000\231", 0x3094},
#line 189 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003(", 0x0173},
#line 550 "../../lib/uninorm/composition-table.gperf"
      {"\000\000X\000\003\007", 0x1e8a},
#line 50 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003\010", 0x00cb},
#line 253 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003\017", 0x0205},
#line 62 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003\001", 0x00da},
#line 61 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003\000", 0x00d9},
#line 934 "../../lib/uninorm/composition-table.gperf"
      {"\0000{\0000\232", 0x307d},
#line 63 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003\002", 0x00db},
#line 569 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003\011", 0x1ea2},
#line 469 "../../lib/uninorm/composition-table.gperf"
      {"\000\0367\000\003\004", 0x1e39},
#line 316 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\025\000\003\010", 0x0401},
#line 214 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\374\000\003\004", 0x01d6},
#line 784 "../../lib/uninorm/composition-table.gperf"
      {"\000\037$\000\003E", 0x1f94},
#line 921 "../../lib/uninorm/composition-table.gperf"
      {"\0000a\0000\231", 0x3062},
#line 218 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\374\000\003\014", 0x01da},
#line 60 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003\010", 0x00d6},
#line 365 "../../lib/uninorm/composition-table.gperf"
      {"\000\004+\000\003\010", 0x04f8},
#line 594 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003\011", 0x1ebb},
#line 335 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\020\000\003\006", 0x04d0},
#line 338 "../../lib/uninorm/composition-table.gperf"
      {"\000\0040\000\003\010", 0x04d3},
#line 568 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003#", 0x1ea1},
#line 91 "../../lib/uninorm/composition-table.gperf"
      {"\000\000y\000\003\001", 0x00fd},
#line 650 "../../lib/uninorm/composition-table.gperf"
      {"\000\000y\000\003\000", 0x1ef3},
#line 93 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003\004", 0x0100},
#line 193 "../../lib/uninorm/composition-table.gperf"
      {"\000\000y\000\003\002", 0x0177},
#line 555 "../../lib/uninorm/composition-table.gperf"
      {"\000\000y\000\003\007", 0x1e8f},
#line 205 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003\014", 0x01cd},
#line 595 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003\003", 0x1ebc},
#line 949 "../../lib/uninorm/composition-table.gperf"
      {"\0000\304\0000\231", 0x30c5},
#line 261 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003\017", 0x020d},
#line 552 "../../lib/uninorm/composition-table.gperf"
      {"\000\000X\000\003\010", 0x1e8c},
#line 111 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003\006", 0x0114},
#line 110 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003\004", 0x0113},
#line 967 "../../lib/uninorm/composition-table.gperf"
      {"\0000\375\0000\231", 0x30fe},
#line 115 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003(", 0x0118},
#line 118 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003\014", 0x011b},
#line 610 "../../lib/uninorm/composition-table.gperf"
      {"\000\000i\000\003#", 0x1ecb},
#line 64 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003\010", 0x00dc},
#line 269 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003\017", 0x0215},
#line 339 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\025\000\003\006", 0x04d6},
#line 59 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003\003", 0x00d5},
#line 539 "../../lib/uninorm/composition-table.gperf"
      {"\000\000v\000\003#", 0x1e7f},
#line 519 "../../lib/uninorm/composition-table.gperf"
      {"\000\000t\000\003\007", 0x1e6b},
#line 614 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003\011", 0x1ecf},
#line 156 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003\006", 0x014e},
#line 434 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\022\000\003\001", 0x1e16},
#line 432 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\022\000\003\000", 0x1e14},
#line 231 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003(", 0x01ea},
#line 336 "../../lib/uninorm/composition-table.gperf"
      {"\000\0040\000\003\006", 0x04d1},
#line 684 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\031\000\003\001", 0x1f1d},
#line 682 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\031\000\003\000", 0x1f1b},
#line 275 "../../lib/uninorm/composition-table.gperf"
      {"\000\000t\000\003&", 0x021b},
#line 638 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003\011", 0x1ee7},
#line 161 "../../lib/uninorm/composition-table.gperf"
      {"\000\000r\000\003\001", 0x0155},
#line 92 "../../lib/uninorm/composition-table.gperf"
      {"\000\000y\000\003\010", 0x00ff},
#line 609 "../../lib/uninorm/composition-table.gperf"
      {"\000\000I\000\003#", 0x1eca},
#line 824 "../../lib/uninorm/composition-table.gperf"
      {"\000\037t\000\003E", 0x1fc2},
#line 501 "../../lib/uninorm/composition-table.gperf"
      {"\000\000r\000\003\007", 0x1e59},
#line 155 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003\004", 0x014d},
#line 966 "../../lib/uninorm/composition-table.gperf"
      {"\0000\362\0000\231", 0x30fa},
#line 965 "../../lib/uninorm/composition-table.gperf"
      {"\0000\361\0000\231", 0x30f9},
#line 210 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003\014", 0x01d2},
#line 178 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003\003", 0x0168},
#line 420 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\307\000\003\001", 0x1e08},
#line 149 "../../lib/uninorm/composition-table.gperf"
      {"\000\000n\000\003\001", 0x0144},
#line 241 "../../lib/uninorm/composition-table.gperf"
      {"\000\000n\000\003\000", 0x01f9},
#line 182 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003\006", 0x016c},
#line 181 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003\004", 0x016b},
#line 481 "../../lib/uninorm/composition-table.gperf"
      {"\000\000n\000\003\007", 0x1e45},
#line 188 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003(", 0x0172},
#line 212 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003\014", 0x01d4},
#line 563 "../../lib/uninorm/composition-table.gperf"
      {"\000\000t\000\003\010", 0x1e97},
#line 252 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003\017", 0x0204},
#line 678 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\021\000\003\001", 0x1f15},
#line 676 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\021\000\003\000", 0x1f13},
#line 794 "../../lib/uninorm/composition-table.gperf"
      {"\000\037.\000\003E", 0x1f9e},
#line 423 "../../lib/uninorm/composition-table.gperf"
      {"\000\000d\000\003\007", 0x1e0b},
#line 251 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003\021", 0x0203},
#line 414 "../../lib/uninorm/composition-table.gperf"
      {"\000\000B\000\003\007", 0x1e02},
#line 656 "../../lib/uninorm/composition-table.gperf"
      {"\000\000y\000\003\003", 0x1ef9},
#line 964 "../../lib/uninorm/composition-table.gperf"
      {"\0000\360\0000\231", 0x30f8},
#line 393 "../../lib/uninorm/composition-table.gperf"
      {"\000\015F\000\015>", 0x0d4a},
#line 810 "../../lib/uninorm/composition-table.gperf"
      {"\000\037n\000\003E", 0x1fae},
#line 567 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003#", 0x1ea0},
#line 969 "../../lib/uninorm/composition-table.gperf"
      {"\001\020\233\001\020\272", 0x1109c},
#line 260 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003\017", 0x020c},
#line 593 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003\011", 0x1eba},
#line 344 "../../lib/uninorm/composition-table.gperf"
      {"\000\0046\000\003\010", 0x04dd},
#line 775 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\013\000\003E", 0x1f8b},
#line 332 "../../lib/uninorm/composition-table.gperf"
      {"\000\004u\000\003\017", 0x0477},
#line 800 "../../lib/uninorm/composition-table.gperf"
      {"\000\037d\000\003E", 0x1fa4},
#line 951 "../../lib/uninorm/composition-table.gperf"
      {"\0000\310\0000\231", 0x30c9},
#line 592 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003#", 0x1eb9},
#line 259 "../../lib/uninorm/composition-table.gperf"
      {"\000\000i\000\003\021", 0x020b},
#line 127 "../../lib/uninorm/composition-table.gperf"
      {"\000\000H\000\003\002", 0x0124},
#line 446 "../../lib/uninorm/composition-table.gperf"
      {"\000\000H\000\003\007", 0x1e22},
#line 71 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003\012", 0x00e5},
#line 727 "../../lib/uninorm/composition-table.gperf"
      {"\000\037H\000\003\001", 0x1f4c},
#line 725 "../../lib/uninorm/composition-table.gperf"
      {"\000\037H\000\003\000", 0x1f4a},
#line 613 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003\011", 0x1ece},
#line 945 "../../lib/uninorm/composition-table.gperf"
      {"\0000\273\0000\231", 0x30bc},
#line 109 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003\004", 0x0112},
#line 65 "../../lib/uninorm/composition-table.gperf"
      {"\000\000Y\000\003\001", 0x00dd},
#line 649 "../../lib/uninorm/composition-table.gperf"
      {"\000\000Y\000\003\000", 0x1ef2},
#line 117 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003\014", 0x011a},
#line 192 "../../lib/uninorm/composition-table.gperf"
      {"\000\000Y\000\003\002", 0x0176},
#line 554 "../../lib/uninorm/composition-table.gperf"
      {"\000\000Y\000\003\007", 0x1e8e},
#line 268 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003\017", 0x0214},
#line 739 "../../lib/uninorm/composition-table.gperf"
      {"\000\037Y\000\003\001", 0x1f5d},
#line 738 "../../lib/uninorm/composition-table.gperf"
      {"\000\037Y\000\003\000", 0x1f5b},
#line 740 "../../lib/uninorm/composition-table.gperf"
      {"\000\037Y\000\003B", 0x1f5f},
#line 925 "../../lib/uninorm/composition-table.gperf"
      {"\0000o\0000\231", 0x3070},
#line 258 "../../lib/uninorm/composition-table.gperf"
      {"\000\000I\000\003\021", 0x020a},
#line 946 "../../lib/uninorm/composition-table.gperf"
      {"\0000\275\0000\231", 0x30be},
#line 154 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003\004", 0x014c},
#line 488 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\325\000\003\001", 0x1e4c},
#line 334 "../../lib/uninorm/composition-table.gperf"
      {"\000\0046\000\003\006", 0x04c2},
#line 209 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003\014", 0x01d1},
#line 612 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003#", 0x1ecd},
#line 532 "../../lib/uninorm/composition-table.gperf"
      {"\000\001h\000\003\001", 0x1e78},
#line 929 "../../lib/uninorm/composition-table.gperf"
      {"\0000u\0000\231", 0x3076},
#line 637 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003\011", 0x1ee6},
#line 81 "../../lib/uninorm/composition-table.gperf"
      {"\000\000n\000\003\003", 0x00f1},
#line 938 "../../lib/uninorm/composition-table.gperf"
      {"\0000\255\0000\231", 0x30ae},
#line 450 "../../lib/uninorm/composition-table.gperf"
      {"\000\000H\000\003\010", 0x1e26},
#line 926 "../../lib/uninorm/composition-table.gperf"
      {"\0000o\0000\232", 0x3071},
#line 475 "../../lib/uninorm/composition-table.gperf"
      {"\000\000m\000\003\001", 0x1e3f},
#line 636 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003#", 0x1ee5},
#line 128 "../../lib/uninorm/composition-table.gperf"
      {"\000\000h\000\003\002", 0x0125},
#line 447 "../../lib/uninorm/composition-table.gperf"
      {"\000\000h\000\003\007", 0x1e23},
#line 477 "../../lib/uninorm/composition-table.gperf"
      {"\000\000m\000\003\007", 0x1e41},
#line 753 "../../lib/uninorm/composition-table.gperf"
      {"\000\037h\000\003\001", 0x1f6c},
#line 751 "../../lib/uninorm/composition-table.gperf"
      {"\000\037h\000\003\000", 0x1f6a},
#line 755 "../../lib/uninorm/composition-table.gperf"
      {"\000\037h\000\003B", 0x1f6e},
#line 930 "../../lib/uninorm/composition-table.gperf"
      {"\0000u\0000\232", 0x3077},
#line 194 "../../lib/uninorm/composition-table.gperf"
      {"\000\000Y\000\003\010", 0x0178},
#line 180 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003\004", 0x016a},
#line 395 "../../lib/uninorm/composition-table.gperf"
      {"\000\015F\000\015W", 0x0d4c},
#line 654 "../../lib/uninorm/composition-table.gperf"
      {"\000\000y\000\003\011", 0x1ef7},
#line 211 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003\014", 0x01d3},
#line 250 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003\021", 0x0202},
#line 46 "../../lib/uninorm/composition-table.gperf"
      {"\000\000C\000\003'", 0x00c7},
#line 782 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\"\000\003E", 0x1f92},
#line 804 "../../lib/uninorm/composition-table.gperf"
      {"\000\037h\000\003E", 0x1fa8},
#line 809 "../../lib/uninorm/composition-table.gperf"
      {"\000\037m\000\003E", 0x1fad},
#line 697 "../../lib/uninorm/composition-table.gperf"
      {"\000\037(\000\003\001", 0x1f2c},
#line 695 "../../lib/uninorm/composition-table.gperf"
      {"\000\037(\000\003\000", 0x1f2a},
#line 699 "../../lib/uninorm/composition-table.gperf"
      {"\000\037(\000\003B", 0x1f2e},
#line 490 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\325\000\003\010", 0x1e4e},
#line 255 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003\021", 0x0207},
#line 706 "../../lib/uninorm/composition-table.gperf"
      {"\000\0371\000\003\001", 0x1f35},
#line 704 "../../lib/uninorm/composition-table.gperf"
      {"\000\0371\000\003\000", 0x1f33},
#line 708 "../../lib/uninorm/composition-table.gperf"
      {"\000\0371\000\003B", 0x1f37},
#line 291 "../../lib/uninorm/composition-table.gperf"
      {"\000\000y\000\003\004", 0x0233},
#line 962 "../../lib/uninorm/composition-table.gperf"
      {"\0000\246\0000\231", 0x30f4},
#line 437 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003-", 0x1e19},
#line 265 "../../lib/uninorm/composition-table.gperf"
      {"\000\000r\000\003\017", 0x0211},
#line 788 "../../lib/uninorm/composition-table.gperf"
      {"\000\037(\000\003E", 0x1f98},
#line 451 "../../lib/uninorm/composition-table.gperf"
      {"\000\000h\000\003\010", 0x1e27},
#line 45 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003\012", 0x00c5},
#line 655 "../../lib/uninorm/composition-table.gperf"
      {"\000\000Y\000\003\003", 0x1ef8},
#line 591 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003#", 0x1eb8},
#line 542 "../../lib/uninorm/composition-table.gperf"
      {"\000\000W\000\003\001", 0x1e82},
#line 540 "../../lib/uninorm/composition-table.gperf"
      {"\000\000W\000\003\000", 0x1e80},
#line 160 "../../lib/uninorm/composition-table.gperf"
      {"\000\000R\000\003\001", 0x0154},
#line 190 "../../lib/uninorm/composition-table.gperf"
      {"\000\000W\000\003\002", 0x0174},
#line 546 "../../lib/uninorm/composition-table.gperf"
      {"\000\000W\000\003\007", 0x1e86},
#line 912 "../../lib/uninorm/composition-table.gperf"
      {"\0000O\0000\231", 0x3050},
#line 500 "../../lib/uninorm/composition-table.gperf"
      {"\000\000R\000\003\007", 0x1e58},
#line 878 "../../lib/uninorm/composition-table.gperf"
      {"\000\"C\000\0038", 0x2244},
#line 872 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\003\000\0038", 0x2204},
#line 873 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\010\000\0038", 0x2209},
#line 893 "../../lib/uninorm/composition-table.gperf"
      {"\000\"{\000\0038", 0x2281},
#line 177 "../../lib/uninorm/composition-table.gperf"
      {"\000\000t\000\003\014", 0x0165},
#line 611 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003#", 0x1ecc},
#line 263 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003\021", 0x020f},
#line 468 "../../lib/uninorm/composition-table.gperf"
      {"\000\0366\000\003\004", 0x1e38},
#line 238 "../../lib/uninorm/composition-table.gperf"
      {"\000\000G\000\003\001", 0x01f4},
#line 908 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\264\000\0038", 0x22ec},
#line 906 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\262\000\0038", 0x22ea},
#line 119 "../../lib/uninorm/composition-table.gperf"
      {"\000\000G\000\003\002", 0x011c},
#line 123 "../../lib/uninorm/composition-table.gperf"
      {"\000\000G\000\003\007", 0x0120},
#line 288 "../../lib/uninorm/composition-table.gperf"
      {"\000\002.\000\003\004", 0x0230},
#line 877 "../../lib/uninorm/composition-table.gperf"
      {"\000\"<\000\0038", 0x2241},
#line 271 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003\021", 0x0217},
#line 905 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\222\000\0038", 0x22e3},
#line 457 "../../lib/uninorm/composition-table.gperf"
      {"\000\000i\000\0030", 0x1e2d},
#line 898 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\242\000\0038", 0x22ac},
#line 165 "../../lib/uninorm/composition-table.gperf"
      {"\000\000r\000\003\014", 0x0159},
#line 915 "../../lib/uninorm/composition-table.gperf"
      {"\0000U\0000\231", 0x3056},
#line 531 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003-", 0x1e77},
#line 936 "../../lib/uninorm/composition-table.gperf"
      {"\0000\235\0000\231", 0x309e},
#line 331 "../../lib/uninorm/composition-table.gperf"
      {"\000\004t\000\003\017", 0x0476},
#line 882 "../../lib/uninorm/composition-table.gperf"
      {"\000\"a\000\0038", 0x2262},
#line 440 "../../lib/uninorm/composition-table.gperf"
      {"\000\002(\000\003\006", 0x1e1c},
#line 544 "../../lib/uninorm/composition-table.gperf"
      {"\000\000W\000\003\010", 0x1e84},
#line 635 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003#", 0x1ee4},
#line 148 "../../lib/uninorm/composition-table.gperf"
      {"\000\000N\000\003\001", 0x0143},
#line 240 "../../lib/uninorm/composition-table.gperf"
      {"\000\000N\000\003\000", 0x01f8},
#line 153 "../../lib/uninorm/composition-table.gperf"
      {"\000\000n\000\003\014", 0x0148},
#line 375 "../../lib/uninorm/composition-table.gperf"
      {"\000\011(\000\011<", 0x0929},
#line 480 "../../lib/uninorm/composition-table.gperf"
      {"\000\000N\000\003\007", 0x1e44},
#line 897 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\207\000\0038", 0x2289},
#line 185 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003\012", 0x016f},
#line 896 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\206\000\0038", 0x2288},
#line 456 "../../lib/uninorm/composition-table.gperf"
      {"\000\000I\000\0030", 0x1e2c},
#line 895 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\203\000\0038", 0x2285},
#line 108 "../../lib/uninorm/composition-table.gperf"
      {"\000\000d\000\003\014", 0x010f},
#line 543 "../../lib/uninorm/composition-table.gperf"
      {"\000\000w\000\003\001", 0x1e83},
#line 541 "../../lib/uninorm/composition-table.gperf"
      {"\000\000w\000\003\000", 0x1e81},
#line 523 "../../lib/uninorm/composition-table.gperf"
      {"\000\000t\000\0031", 0x1e6f},
#line 191 "../../lib/uninorm/composition-table.gperf"
      {"\000\000w\000\003\002", 0x0175},
#line 547 "../../lib/uninorm/composition-table.gperf"
      {"\000\000w\000\003\007", 0x1e87},
#line 652 "../../lib/uninorm/composition-table.gperf"
      {"\000\000y\000\003#", 0x1ef5},
#line 890 "../../lib/uninorm/composition-table.gperf"
      {"\000\"v\000\0038", 0x2278},
#line 297 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\237\000\003\001", 0x038c},
#line 863 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\237\000\003\000", 0x1ff8},
#line 239 "../../lib/uninorm/composition-table.gperf"
      {"\000\000g\000\003\001", 0x01f5},
#line 254 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003\021", 0x0206},
#line 653 "../../lib/uninorm/composition-table.gperf"
      {"\000\000Y\000\003\011", 0x1ef6},
#line 120 "../../lib/uninorm/composition-table.gperf"
      {"\000\000g\000\003\002", 0x011d},
#line 124 "../../lib/uninorm/composition-table.gperf"
      {"\000\000g\000\003\007", 0x0121},
#line 343 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\026\000\003\010", 0x04dc},
#line 902 "../../lib/uninorm/composition-table.gperf"
      {"\000\"|\000\0038", 0x22e0},
#line 436 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003-", 0x1e18},
#line 507 "../../lib/uninorm/composition-table.gperf"
      {"\000\000r\000\0031", 0x1e5f},
#line 276 "../../lib/uninorm/composition-table.gperf"
      {"\000\000H\000\003\014", 0x021e},
#line 494 "../../lib/uninorm/composition-table.gperf"
      {"\000\001L\000\003\001", 0x1e52},
#line 492 "../../lib/uninorm/composition-table.gperf"
      {"\000\001L\000\003\000", 0x1e50},
#line 443 "../../lib/uninorm/composition-table.gperf"
      {"\000\000f\000\003\007", 0x1e1f},
#line 521 "../../lib/uninorm/composition-table.gperf"
      {"\000\000t\000\003#", 0x1e6d},
#line 262 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003\021", 0x020e},
#line 894 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\202\000\0038", 0x2284},
#line 142 "../../lib/uninorm/composition-table.gperf"
      {"\000\000L\000\003\001", 0x0139},
#line 290 "../../lib/uninorm/composition-table.gperf"
      {"\000\000Y\000\003\004", 0x0232},
#line 803 "../../lib/uninorm/composition-table.gperf"
      {"\000\037g\000\003E", 0x1fa7},
#line 485 "../../lib/uninorm/composition-table.gperf"
      {"\000\000n\000\0031", 0x1e49},
#line 281 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\003'", 0x0229},
#line 927 "../../lib/uninorm/composition-table.gperf"
      {"\0000r\0000\231", 0x3073},
#line 121 "../../lib/uninorm/composition-table.gperf"
      {"\000\000G\000\003\006", 0x011e},
#line 313 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\322\000\003\001", 0x03d3},
#line 545 "../../lib/uninorm/composition-table.gperf"
      {"\000\000w\000\003\010", 0x1e85},
#line 439 "../../lib/uninorm/composition-table.gperf"
      {"\000\000e\000\0030", 0x1e1b},
#line 802 "../../lib/uninorm/composition-table.gperf"
      {"\000\037f\000\003E", 0x1fa6},
#line 427 "../../lib/uninorm/composition-table.gperf"
      {"\000\000d\000\0031", 0x1e0f},
#line 503 "../../lib/uninorm/composition-table.gperf"
      {"\000\000r\000\003#", 0x1e5b},
#line 418 "../../lib/uninorm/composition-table.gperf"
      {"\000\000B\000\0031", 0x1e06},
#line 284 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\325\000\003\004", 0x022c},
#line 495 "../../lib/uninorm/composition-table.gperf"
      {"\000\001M\000\003\001", 0x1e53},
#line 493 "../../lib/uninorm/composition-table.gperf"
      {"\000\001M\000\003\000", 0x1e51},
#line 903 "../../lib/uninorm/composition-table.gperf"
      {"\000\"}\000\0038", 0x22e1},
#line 333 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\026\000\003\006", 0x04c1},
#line 928 "../../lib/uninorm/composition-table.gperf"
      {"\0000r\0000\232", 0x3074},
#line 270 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003\021", 0x0216},
#line 474 "../../lib/uninorm/composition-table.gperf"
      {"\000\000M\000\003\001", 0x1e3e},
#line 55 "../../lib/uninorm/composition-table.gperf"
      {"\000\000N\000\003\003", 0x00d1},
#line 483 "../../lib/uninorm/composition-table.gperf"
      {"\000\000n\000\003#", 0x1e47},
#line 922 "../../lib/uninorm/composition-table.gperf"
      {"\0000d\0000\231", 0x3065},
#line 476 "../../lib/uninorm/composition-table.gperf"
      {"\000\000M\000\003\007", 0x1e40},
#line 530 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003-", 0x1e76},
#line 277 "../../lib/uninorm/composition-table.gperf"
      {"\000\000h\000\003\014", 0x021f},
#line 364 "../../lib/uninorm/composition-table.gperf"
      {"\000\004G\000\003\010", 0x04f5},
#line 518 "../../lib/uninorm/composition-table.gperf"
      {"\000\000T\000\003\007", 0x1e6a},
#line 920 "../../lib/uninorm/composition-table.gperf"
      {"\0000_\0000\231", 0x3060},
#line 425 "../../lib/uninorm/composition-table.gperf"
      {"\000\000d\000\003#", 0x1e0d},
#line 887 "../../lib/uninorm/composition-table.gperf"
      {"\000\"e\000\0038", 0x2271},
#line 416 "../../lib/uninorm/composition-table.gperf"
      {"\000\000B\000\003#", 0x1e04},
#line 264 "../../lib/uninorm/composition-table.gperf"
      {"\000\000R\000\003\017", 0x0210},
#line 844 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\376\000\003\001", 0x1fde},
#line 843 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\376\000\003\000", 0x1fdd},
#line 845 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\376\000\003B", 0x1fdf},
#line 274 "../../lib/uninorm/composition-table.gperf"
      {"\000\000T\000\003&", 0x021a},
#line 184 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003\012", 0x016e},
#line 314 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\322\000\003\010", 0x03d4},
#line 310 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\277\000\003\001", 0x03cc},
#line 761 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\277\000\003\000", 0x1f78},
#line 723 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\237\000\003\023", 0x1f48},
#line 529 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\0030", 0x1e75},
#line 919 "../../lib/uninorm/composition-table.gperf"
      {"\0000]\0000\231", 0x305e},
#line 122 "../../lib/uninorm/composition-table.gperf"
      {"\000\000g\000\003\006", 0x011f},
#line 306 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\271\000\003\001", 0x03af},
#line 760 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\271\000\003\000", 0x1f76},
#line 838 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\271\000\003B", 0x1fd6},
#line 448 "../../lib/uninorm/composition-table.gperf"
      {"\000\000H\000\003#", 0x1e24},
#line 833 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\277\000\003\001", 0x1fce},
#line 832 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\277\000\003\000", 0x1fcd},
#line 834 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\277\000\003B", 0x1fcf},
#line 917 "../../lib/uninorm/composition-table.gperf"
      {"\0000Y\0000\231", 0x305a},
#line 319 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\032\000\003\001", 0x040c},
#line 565 "../../lib/uninorm/composition-table.gperf"
      {"\000\000y\000\003\012", 0x1e99},
#line 885 "../../lib/uninorm/composition-table.gperf"
      {"\000\000>\000\0038", 0x226f},
#line 435 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\023\000\003\001", 0x1e17},
#line 433 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\023\000\003\000", 0x1e15},
#line 525 "../../lib/uninorm/composition-table.gperf"
      {"\000\000t\000\003-", 0x1e71},
#line 651 "../../lib/uninorm/composition-table.gperf"
      {"\000\000Y\000\003#", 0x1ef4},
#line 345 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\027\000\003\010", 0x04de},
#line 776 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\014\000\003E", 0x1f8c},
#line 562 "../../lib/uninorm/composition-table.gperf"
      {"\000\000h\000\0031", 0x1e96},
#line 941 "../../lib/uninorm/composition-table.gperf"
      {"\0000\263\0000\231", 0x30b4},
#line 164 "../../lib/uninorm/composition-table.gperf"
      {"\000\000R\000\003\014", 0x0158},
#line 956 "../../lib/uninorm/composition-table.gperf"
      {"\0000\325\0000\231", 0x30d6},
#line 779 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\017\000\003E", 0x1f8f},
#line 267 "../../lib/uninorm/composition-table.gperf"
      {"\000\000r\000\003\021", 0x0213},
#line 305 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\267\000\003\001", 0x03ae},
#line 759 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\267\000\003\000", 0x1f74},
#line 827 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\267\000\003B", 0x1fc6},
#line 280 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\003'", 0x0228},
#line 626 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\241\000\003\001", 0x1edb},
#line 628 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\241\000\003\000", 0x1edd},
#line 444 "../../lib/uninorm/composition-table.gperf"
      {"\000\000G\000\003\004", 0x1e20},
#line 924 "../../lib/uninorm/composition-table.gperf"
      {"\0000h\0000\231", 0x3069},
#line 438 "../../lib/uninorm/composition-table.gperf"
      {"\000\000E\000\0030", 0x1e1a},
#line 227 "../../lib/uninorm/composition-table.gperf"
      {"\000\000G\000\003\014", 0x01e6},
#line 308 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\271\000\003\010", 0x03ca},
#line 957 "../../lib/uninorm/composition-table.gperf"
      {"\0000\325\0000\232", 0x30d7},
#line 825 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\267\000\003E", 0x1fc3},
#line 960 "../../lib/uninorm/composition-table.gperf"
      {"\0000\333\0000\231", 0x30dc},
#line 449 "../../lib/uninorm/composition-table.gperf"
      {"\000\000h\000\003#", 0x1e25},
#line 479 "../../lib/uninorm/composition-table.gperf"
      {"\000\000m\000\003#", 0x1e43},
#line 487 "../../lib/uninorm/composition-table.gperf"
      {"\000\000n\000\003-", 0x1e4b},
#line 937 "../../lib/uninorm/composition-table.gperf"
      {"\0000\253\0000\231", 0x30ac},
#line 303 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\261\000\003\001", 0x03ac},
#line 757 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\261\000\003\000", 0x1f70},
#line 817 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\261\000\003B", 0x1fb6},
#line 352 "../../lib/uninorm/composition-table.gperf"
      {"\000\004>\000\003\010", 0x04e7},
#line 293 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\221\000\003\001", 0x0386},
#line 821 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\221\000\003\000", 0x1fba},
#line 431 "../../lib/uninorm/composition-table.gperf"
      {"\000\000d\000\003-", 0x1e13},
#line 606 "../../lib/uninorm/composition-table.gperf"
      {"\000\036\271\000\003\002", 0x1ec7},
#line 778 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\016\000\003E", 0x1f8e},
#line 961 "../../lib/uninorm/composition-table.gperf"
      {"\0000\333\0000\232", 0x30dd},
#line 362 "../../lib/uninorm/composition-table.gperf"
      {"\000\004C\000\003\013", 0x04f3},
#line 152 "../../lib/uninorm/composition-table.gperf"
      {"\000\000N\000\003\014", 0x0147},
#line 815 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\261\000\003E", 0x1fb3},
#line 879 "../../lib/uninorm/composition-table.gperf"
      {"\000\"E\000\0038", 0x2247},
#line 717 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\277\000\003\023", 0x1f40},
#line 506 "../../lib/uninorm/composition-table.gperf"
      {"\000\000R\000\0031", 0x1e5e},
#line 822 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\221\000\003E", 0x1fbc},
#line 356 "../../lib/uninorm/composition-table.gperf"
      {"\000\004M\000\003\010", 0x04ed},
#line 724 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\237\000\003\024", 0x1f49},
#line 167 "../../lib/uninorm/composition-table.gperf"
      {"\000\000s\000\003\001", 0x015b},
#line 701 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\271\000\003\023", 0x1f30},
#line 835 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\271\000\003\006", 0x1fd0},
#line 169 "../../lib/uninorm/composition-table.gperf"
      {"\000\000s\000\003\002", 0x015d},
#line 509 "../../lib/uninorm/composition-table.gperf"
      {"\000\000s\000\003\007", 0x1e61},
#line 977 "../../lib/uninorm/composition-table.gperf"
      {"\001\024\271\001\024\275", 0x114be},
#line 528 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\0030", 0x1e74},
#line 916 "../../lib/uninorm/composition-table.gperf"
      {"\0000W\0000\231", 0x3058},
#line 317 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\023\000\003\001", 0x0403},
#line 445 "../../lib/uninorm/composition-table.gperf"
      {"\000\000g\000\003\004", 0x1e21},
#line 460 "../../lib/uninorm/composition-table.gperf"
      {"\000\000K\000\003\001", 0x1e30},
#line 770 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\006\000\003E", 0x1f86},
#line 228 "../../lib/uninorm/composition-table.gperf"
      {"\000\000g\000\003\014", 0x01e7},
#line 273 "../../lib/uninorm/composition-table.gperf"
      {"\000\000s\000\003&", 0x0219},
#line 548 "../../lib/uninorm/composition-table.gperf"
      {"\000\000W\000\003#", 0x1e88},
#line 244 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\306\000\003\001", 0x01fc},
#line 502 "../../lib/uninorm/composition-table.gperf"
      {"\000\000R\000\003#", 0x1e5a},
#line 580 "../../lib/uninorm/composition-table.gperf"
      {"\000\036\241\000\003\002", 0x1ead},
#line 311 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\305\000\003\001", 0x03cd},
#line 762 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\305\000\003\000", 0x1f7a},
#line 851 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\305\000\003B", 0x1fe6},
#line 143 "../../lib/uninorm/composition-table.gperf"
      {"\000\000l\000\003\001", 0x013a},
#line 242 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\305\000\003\001", 0x01fa},
#line 166 "../../lib/uninorm/composition-table.gperf"
      {"\000\000S\000\003\001", 0x015a},
#line 685 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\267\000\003\023", 0x1f20},
#line 632 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\241\000\003\003", 0x1ee1},
#line 168 "../../lib/uninorm/composition-table.gperf"
      {"\000\000S\000\003\002", 0x015c},
#line 508 "../../lib/uninorm/composition-table.gperf"
      {"\000\000S\000\003\007", 0x1e60},
#line 146 "../../lib/uninorm/composition-table.gperf"
      {"\000\000L\000\003\014", 0x013d},
#line 484 "../../lib/uninorm/composition-table.gperf"
      {"\000\000N\000\0031", 0x1e48},
#line 296 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\231\000\003\001", 0x038a},
#line 842 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\231\000\003\000", 0x1fda},
#line 512 "../../lib/uninorm/composition-table.gperf"
      {"\000\001Z\000\003\007", 0x1e64},
#line 828 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\306\000\003E", 0x1fc7},
#line 195 "../../lib/uninorm/composition-table.gperf"
      {"\000\000Z\000\003\001", 0x0179},
#line 175 "../../lib/uninorm/composition-table.gperf"
      {"\000\000t\000\003'", 0x0163},
#line 272 "../../lib/uninorm/composition-table.gperf"
      {"\000\000S\000\003&", 0x0218},
#line 556 "../../lib/uninorm/composition-table.gperf"
      {"\000\000Z\000\003\002", 0x1e90},
#line 197 "../../lib/uninorm/composition-table.gperf"
      {"\000\000Z\000\003\007", 0x017b},
#line 808 "../../lib/uninorm/composition-table.gperf"
      {"\000\037l\000\003E", 0x1fac},
      {""},
#line 100 "../../lib/uninorm/composition-table.gperf"
      {"\000\000c\000\003\001", 0x0107},
#line 657 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\261\000\003\023", 0x1f00},
#line 812 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\261\000\003\006", 0x1fb0},
#line 102 "../../lib/uninorm/composition-table.gperf"
      {"\000\000c\000\003\002", 0x0109},
#line 104 "../../lib/uninorm/composition-table.gperf"
      {"\000\000c\000\003\007", 0x010b},
#line 665 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\221\000\003\023", 0x1f08},
#line 819 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\221\000\003\006", 0x1fb8},
      {""},
#line 482 "../../lib/uninorm/composition-table.gperf"
      {"\000\000N\000\003#", 0x1e46},
#line 163 "../../lib/uninorm/composition-table.gperf"
      {"\000\000r\000\003'", 0x0157},
#line 309 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\305\000\003\010", 0x03cb},
#line 196 "../../lib/uninorm/composition-table.gperf"
      {"\000\000z\000\003\001", 0x017a},
#line 176 "../../lib/uninorm/composition-table.gperf"
      {"\000\000T\000\003\014", 0x0164},
#line 422 "../../lib/uninorm/composition-table.gperf"
      {"\000\000D\000\003\007", 0x1e0a},
#line 557 "../../lib/uninorm/composition-table.gperf"
      {"\000\000z\000\003\002", 0x1e91},
#line 198 "../../lib/uninorm/composition-table.gperf"
      {"\000\000z\000\003\007", 0x017c},
      {""},
#line 718 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\277\000\003\024", 0x1f41},
#line 799 "../../lib/uninorm/composition-table.gperf"
      {"\000\037c\000\003E", 0x1fa3},
#line 549 "../../lib/uninorm/composition-table.gperf"
      {"\000\000w\000\003#", 0x1e89},
#line 151 "../../lib/uninorm/composition-table.gperf"
      {"\000\000n\000\003'", 0x0146},
#line 159 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003\013", 0x0151},
#line 301 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\231\000\003\010", 0x03aa},
#line 702 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\271\000\003\024", 0x1f31},
#line 470 "../../lib/uninorm/composition-table.gperf"
      {"\000\000L\000\0031", 0x1e3a},
      {""},
#line 640 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\260\000\003\001", 0x1ee9},
#line 642 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\260\000\003\000", 0x1eeb},
#line 429 "../../lib/uninorm/composition-table.gperf"
      {"\000\000d\000\003'", 0x1e11},
#line 923 "../../lib/uninorm/composition-table.gperf"
      {"\0000f\0000\231", 0x3067},
#line 187 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003\013", 0x0171},
#line 836 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\271\000\003\004", 0x1fd1},
#line 266 "../../lib/uninorm/composition-table.gperf"
      {"\000\000R\000\003\021", 0x0212},
#line 625 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\240\000\003\001", 0x1eda},
#line 627 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\240\000\003\000", 0x1edc},
#line 590 "../../lib/uninorm/composition-table.gperf"
      {"\000\036\241\000\003\006", 0x1eb7},
#line 318 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\006\000\003\010", 0x0407},
#line 888 "../../lib/uninorm/composition-table.gperf"
      {"\000\"r\000\0038", 0x2274},
#line 729 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\305\000\003\023", 0x1f50},
#line 846 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\305\000\003\006", 0x1fe0},
#line 639 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\257\000\003\001", 0x1ee8},
#line 641 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\257\000\003\000", 0x1eea},
      {""},
#line 630 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\241\000\003\011", 0x1edf},
#line 466 "../../lib/uninorm/composition-table.gperf"
      {"\000\000L\000\003#", 0x1e36},
#line 517 "../../lib/uninorm/composition-table.gperf"
      {"\000\036c\000\003\007", 0x1e69},
#line 686 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\267\000\003\024", 0x1f21},
#line 452 "../../lib/uninorm/composition-table.gperf"
      {"\000\000H\000\003'", 0x1e28},
#line 954 "../../lib/uninorm/composition-table.gperf"
      {"\0000\322\0000\231", 0x30d3},
#line 522 "../../lib/uninorm/composition-table.gperf"
      {"\000\000T\000\0031", 0x1e6e},
#line 709 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\231\000\003\023", 0x1f38},
#line 840 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\231\000\003\006", 0x1fd8},
#line 856 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\241\000\003\024", 0x1fec},
#line 366 "../../lib/uninorm/composition-table.gperf"
      {"\000\004K\000\003\010", 0x04f9},
#line 874 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\013\000\0038", 0x220c},
#line 235 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\267\000\003\014", 0x01ee},
#line 886 "../../lib/uninorm/composition-table.gperf"
      {"\000\"d\000\0038", 0x2270},
      {""},
#line 911 "../../lib/uninorm/composition-table.gperf"
      {"\0000M\0000\231", 0x304e},
#line 415 "../../lib/uninorm/composition-table.gperf"
      {"\000\000b\000\003\007", 0x1e03},
#line 785 "../../lib/uninorm/composition-table.gperf"
      {"\000\037%\000\003E", 0x1f95},
      {""},
#line 955 "../../lib/uninorm/composition-table.gperf"
      {"\0000\322\0000\232", 0x30d4},
#line 394 "../../lib/uninorm/composition-table.gperf"
      {"\000\015G\000\015>", 0x0d4b},
#line 658 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\261\000\003\024", 0x1f01},
#line 478 "../../lib/uninorm/composition-table.gperf"
      {"\000\000M\000\003#", 0x1e42},
#line 304 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\265\000\003\001", 0x03ad},
#line 758 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\265\000\003\000", 0x1f72},
#line 666 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\221\000\003\024", 0x1f09},
#line 520 "../../lib/uninorm/composition-table.gperf"
      {"\000\000T\000\003#", 0x1e6c},
#line 975 "../../lib/uninorm/composition-table.gperf"
      {"\001\024\271\001\024\272", 0x114bb},
#line 486 "../../lib/uninorm/composition-table.gperf"
      {"\000\000N\000\003-", 0x1e4a},
#line 813 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\261\000\003\004", 0x1fb1},
#line 798 "../../lib/uninorm/composition-table.gperf"
      {"\000\037b\000\003E", 0x1fa2},
#line 783 "../../lib/uninorm/composition-table.gperf"
      {"\000\037#\000\003E", 0x1f93},
#line 880 "../../lib/uninorm/composition-table.gperf"
      {"\000\"H\000\0038", 0x2249},
#line 820 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\221\000\003\004", 0x1fb9},
#line 158 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003\013", 0x0150},
#line 461 "../../lib/uninorm/composition-table.gperf"
      {"\000\000k\000\003\001", 0x1e31},
#line 795 "../../lib/uninorm/composition-table.gperf"
      {"\000\037/\000\003E", 0x1f9f},
#line 246 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\330\000\003\001", 0x01fe},
#line 453 "../../lib/uninorm/composition-table.gperf"
      {"\000\000h\000\003'", 0x1e29},
#line 947 "../../lib/uninorm/composition-table.gperf"
      {"\0000\277\0000\231", 0x30c0},
#line 579 "../../lib/uninorm/composition-table.gperf"
      {"\000\036\240\000\003\002", 0x1eac},
#line 646 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\260\000\003\003", 0x1eef},
#line 300 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\312\000\003\001", 0x0390},
#line 837 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\312\000\003\000", 0x1fd2},
#line 839 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\312\000\003B", 0x1fd7},
#line 944 "../../lib/uninorm/composition-table.gperf"
      {"\0000\271\0000\231", 0x30ba},
#line 597 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\312\000\003\001", 0x1ebe},
#line 599 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\312\000\003\000", 0x1ec0},
#line 631 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\240\000\003\003", 0x1ee0},
#line 849 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\301\000\003\023", 0x1fe4},
#line 408 "../../lib/uninorm/composition-table.gperf"
      {"\000\033<\000\0335", 0x1b3d},
#line 173 "../../lib/uninorm/composition-table.gperf"
      {"\000\000s\000\003\014", 0x0161},
#line 564 "../../lib/uninorm/composition-table.gperf"
      {"\000\000w\000\003\012", 0x1e98},
#line 807 "../../lib/uninorm/composition-table.gperf"
      {"\000\037k\000\003E", 0x1fab},
#line 907 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\263\000\0038", 0x22eb},
#line 645 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\257\000\003\003", 0x1eee},
#line 186 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003\013", 0x0170},
#line 516 "../../lib/uninorm/composition-table.gperf"
      {"\000\036b\000\003\007", 0x1e68},
#line 730 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\305\000\003\024", 0x1f51},
#line 299 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\251\000\003\001", 0x038f},
#line 864 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\251\000\003\000", 0x1ffa},
#line 229 "../../lib/uninorm/composition-table.gperf"
      {"\000\000K\000\003\014", 0x01e8},
#line 535 "../../lib/uninorm/composition-table.gperf"
      {"\000\001k\000\003\010", 0x1e7b},
#line 225 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\306\000\003\004", 0x01e2},
#line 472 "../../lib/uninorm/composition-table.gperf"
      {"\000\000L\000\003-", 0x1e3c},
#line 407 "../../lib/uninorm/composition-table.gperf"
      {"\000\033:\000\0335", 0x1b3b},
#line 847 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\305\000\003\004", 0x1fe1},
#line 403 "../../lib/uninorm/composition-table.gperf"
      {"\000\033\011\000\0335", 0x1b0a},
#line 943 "../../lib/uninorm/composition-table.gperf"
      {"\0000\267\0000\231", 0x30b8},
      {""},
#line 710 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\231\000\003\024", 0x1f39},
#line 865 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\251\000\003E", 0x1ffc},
#line 147 "../../lib/uninorm/composition-table.gperf"
      {"\000\000l\000\003\014", 0x013e},
#line 551 "../../lib/uninorm/composition-table.gperf"
      {"\000\000x\000\003\007", 0x1e8b},
#line 172 "../../lib/uninorm/composition-table.gperf"
      {"\000\000S\000\003\014", 0x0160},
#line 634 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\241\000\003#", 0x1ee3},
#line 901 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\253\000\0038", 0x22af},
#line 162 "../../lib/uninorm/composition-table.gperf"
      {"\000\000R\000\003'", 0x0156},
#line 841 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\231\000\003\004", 0x1fd9},
#line 713 "../../lib/uninorm/composition-table.gperf"
      {"\000\0378\000\003\001", 0x1f3c},
#line 711 "../../lib/uninorm/composition-table.gperf"
      {"\000\0378\000\003\000", 0x1f3a},
#line 715 "../../lib/uninorm/composition-table.gperf"
      {"\000\0378\000\003B", 0x1f3e},
#line 298 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\245\000\003\001", 0x038e},
#line 855 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\245\000\003\000", 0x1fea},
#line 673 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\265\000\003\023", 0x1f10},
#line 199 "../../lib/uninorm/composition-table.gperf"
      {"\000\000Z\000\003\014", 0x017d},
#line 940 "../../lib/uninorm/composition-table.gperf"
      {"\0000\261\0000\231", 0x30b2},
#line 683 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\030\000\003\001", 0x1f1c},
#line 681 "../../lib/uninorm/composition-table.gperf"
      {"\000\037\030\000\003\000", 0x1f1a},
#line 524 "../../lib/uninorm/composition-table.gperf"
      {"\000\000T\000\003-", 0x1e70},
#line 125 "../../lib/uninorm/composition-table.gperf"
      {"\000\000G\000\003'", 0x0122},
#line 513 "../../lib/uninorm/composition-table.gperf"
      {"\000\001[\000\003\007", 0x1e65},
#line 106 "../../lib/uninorm/composition-table.gperf"
      {"\000\000c\000\003\014", 0x010d},
#line 312 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\311\000\003\001", 0x03ce},
#line 763 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\311\000\003\000", 0x1f7c},
#line 861 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\311\000\003B", 0x1ff6},
#line 402 "../../lib/uninorm/composition-table.gperf"
      {"\000\033\007\000\0335", 0x1b08},
#line 359 "../../lib/uninorm/composition-table.gperf"
      {"\000\004#\000\003\010", 0x04f0},
#line 464 "../../lib/uninorm/composition-table.gperf"
      {"\000\000K\000\0031", 0x1e34},
#line 589 "../../lib/uninorm/composition-table.gperf"
      {"\000\036\240\000\003\006", 0x1eb6},
#line 644 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\260\000\003\011", 0x1eed},
#line 107 "../../lib/uninorm/composition-table.gperf"
      {"\000\000D\000\003\014", 0x010e},
#line 553 "../../lib/uninorm/composition-table.gperf"
      {"\000\000x\000\003\010", 0x1e8d},
#line 200 "../../lib/uninorm/composition-table.gperf"
      {"\000\000z\000\003\014", 0x017e},
#line 603 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\312\000\003\003", 0x1ec4},
#line 859 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\311\000\003E", 0x1ff3},
#line 458 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\317\000\003\001", 0x1e2e},
#line 629 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\240\000\003\011", 0x1ede},
#line 511 "../../lib/uninorm/composition-table.gperf"
      {"\000\000s\000\003#", 0x1e63},
#line 471 "../../lib/uninorm/composition-table.gperf"
      {"\000\000l\000\0031", 0x1e3b},
#line 150 "../../lib/uninorm/composition-table.gperf"
      {"\000\000N\000\003'", 0x0145},
#line 910 "../../lib/uninorm/composition-table.gperf"
      {"\0000K\0000\231", 0x304c},
#line 850 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\301\000\003\024", 0x1fe5},
#line 536 "../../lib/uninorm/composition-table.gperf"
      {"\000\000V\000\003\003", 0x1e7c},
#line 643 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\257\000\003\011", 0x1eec},
#line 302 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\245\000\003\010", 0x03ab},
#line 950 "../../lib/uninorm/composition-table.gperf"
      {"\0000\306\0000\231", 0x30c7},
#line 368 "../../lib/uninorm/composition-table.gperf"
      {"\000\006'\000\006T", 0x0623},
#line 462 "../../lib/uninorm/composition-table.gperf"
      {"\000\000K\000\003#", 0x1e32},
      {""},
#line 749 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\251\000\003\023", 0x1f68},
#line 341 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\330\000\003\010", 0x04da},
#line 560 "../../lib/uninorm/composition-table.gperf"
      {"\000\000Z\000\0031", 0x1e94},
#line 504 "../../lib/uninorm/composition-table.gperf"
      {"\000\036Z\000\003\004", 0x1e5c},
#line 914 "../../lib/uninorm/composition-table.gperf"
      {"\0000S\0000\231", 0x3054},
#line 329 "../../lib/uninorm/composition-table.gperf"
      {"\000\0048\000\003\000", 0x045d},
#line 321 "../../lib/uninorm/composition-table.gperf"
      {"\000\004#\000\003\006", 0x040e},
#line 615 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\324\000\003\001", 0x1ed0},
#line 617 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\324\000\003\000", 0x1ed2},
#line 467 "../../lib/uninorm/composition-table.gperf"
      {"\000\000l\000\003#", 0x1e37},
#line 126 "../../lib/uninorm/composition-table.gperf"
      {"\000\000g\000\003'", 0x0123},
#line 510 "../../lib/uninorm/composition-table.gperf"
      {"\000\000S\000\003#", 0x1e62},
#line 527 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003$", 0x1e73},
#line 320 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\030\000\003\000", 0x040d},
      {""},
#line 598 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\352\000\003\001", 0x1ebf},
#line 600 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\352\000\003\000", 0x1ec1},
      {""},
#line 426 "../../lib/uninorm/composition-table.gperf"
      {"\000\000D\000\0031", 0x1e0e},
#line 327 "../../lib/uninorm/composition-table.gperf"
      {"\000\004V\000\003\010", 0x0457},
#line 561 "../../lib/uninorm/composition-table.gperf"
      {"\000\000z\000\0031", 0x1e95},
#line 378 "../../lib/uninorm/composition-table.gperf"
      {"\000\011\307\000\011\276", 0x09cb},
#line 558 "../../lib/uninorm/composition-table.gperf"
      {"\000\000Z\000\003#", 0x1e92},
#line 289 "../../lib/uninorm/composition-table.gperf"
      {"\000\002/\000\003\004", 0x0231},
#line 853 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\245\000\003\006", 0x1fe8},
#line 972 "../../lib/uninorm/composition-table.gperf"
      {"\001\0212\001\021'", 0x1112f},
#line 144 "../../lib/uninorm/composition-table.gperf"
      {"\000\000L\000\003'", 0x013b},
#line 674 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\265\000\003\024", 0x1f11},
#line 371 "../../lib/uninorm/composition-table.gperf"
      {"\000\006J\000\006T", 0x0626},
#line 891 "../../lib/uninorm/composition-table.gperf"
      {"\000\"w\000\0038", 0x2279},
#line 690 "../../lib/uninorm/composition-table.gperf"
      {"\000\037!\000\003\001", 0x1f25},
#line 688 "../../lib/uninorm/composition-table.gperf"
      {"\000\037!\000\003\000", 0x1f23},
#line 692 "../../lib/uninorm/composition-table.gperf"
      {"\000\037!\000\003B", 0x1f27},
#line 381 "../../lib/uninorm/composition-table.gperf"
      {"\000\013G\000\013>", 0x0b4b},
#line 741 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\311\000\003\023", 0x1f60},
#line 295 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\227\000\003\001", 0x0389},
#line 830 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\227\000\003\000", 0x1fca},
#line 350 "../../lib/uninorm/composition-table.gperf"
      {"\000\0048\000\003\010", 0x04e5},
#line 424 "../../lib/uninorm/composition-table.gperf"
      {"\000\000D\000\003#", 0x1e0c},
#line 968 "../../lib/uninorm/composition-table.gperf"
      {"\001\020\231\001\020\272", 0x1109a},
#line 559 "../../lib/uninorm/composition-table.gperf"
      {"\000\000z\000\003#", 0x1e93},
      {""},
#line 781 "../../lib/uninorm/composition-table.gperf"
      {"\000\037!\000\003E", 0x1f91},
#line 601 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\312\000\003\011", 0x1ec2},
      {""},
#line 349 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\030\000\003\010", 0x04e4},
#line 401 "../../lib/uninorm/composition-table.gperf"
      {"\000\033\005\000\0335", 0x1b06},
#line 831 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\227\000\003E", 0x1fcc},
#line 978 "../../lib/uninorm/composition-table.gperf"
      {"\001\025\270\001\025\257", 0x115ba},
#line 405 "../../lib/uninorm/composition-table.gperf"
      {"\000\033\015\000\0335", 0x1b0e},
#line 230 "../../lib/uninorm/composition-table.gperf"
      {"\000\000k\000\003\014", 0x01e9},
#line 174 "../../lib/uninorm/composition-table.gperf"
      {"\000\000T\000\003'", 0x0162},
#line 496 "../../lib/uninorm/composition-table.gperf"
      {"\000\000P\000\003\001", 0x1e54},
#line 410 "../../lib/uninorm/composition-table.gperf"
      {"\000\033?\000\0335", 0x1b41},
      {""},
#line 648 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\260\000\003#", 0x1ef1},
#line 498 "../../lib/uninorm/composition-table.gperf"
      {"\000\000P\000\003\007", 0x1e56},
#line 948 "../../lib/uninorm/composition-table.gperf"
      {"\0000\301\0000\231", 0x30c2},
#line 733 "../../lib/uninorm/composition-table.gperf"
      {"\000\037P\000\003\001", 0x1f54},
#line 731 "../../lib/uninorm/composition-table.gperf"
      {"\000\037P\000\003\000", 0x1f52},
#line 735 "../../lib/uninorm/composition-table.gperf"
      {"\000\037P\000\003B", 0x1f56},
      {""},
#line 633 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\240\000\003#", 0x1ee2},
#line 750 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\251\000\003\024", 0x1f69},
#line 419 "../../lib/uninorm/composition-table.gperf"
      {"\000\000b\000\0031", 0x1e07},
#line 621 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\324\000\003\003", 0x1ed6},
#line 323 "../../lib/uninorm/composition-table.gperf"
      {"\000\0048\000\003\006", 0x0439},
#line 868 "../../lib/uninorm/composition-table.gperf"
      {"\000!\224\000\0038", 0x21ae},
#line 939 "../../lib/uninorm/composition-table.gperf"
      {"\0000\257\0000\231", 0x30b0},
#line 647 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\257\000\003#", 0x1ef0},
#line 514 "../../lib/uninorm/composition-table.gperf"
      {"\000\001`\000\003\007", 0x1e66},
#line 866 "../../lib/uninorm/composition-table.gperf"
      {"\000!\220\000\0038", 0x219a},
#line 473 "../../lib/uninorm/composition-table.gperf"
      {"\000\000l\000\003-", 0x1e3d},
#line 604 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\352\000\003\003", 0x1ec5},
#line 322 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\030\000\003\006", 0x0419},
#line 883 "../../lib/uninorm/composition-table.gperf"
      {"\000\"M\000\0038", 0x226d},
#line 357 "../../lib/uninorm/composition-table.gperf"
      {"\000\004#\000\003\004", 0x04ee},
      {""},
#line 745 "../../lib/uninorm/composition-table.gperf"
      {"\000\037`\000\003\001", 0x1f64},
#line 743 "../../lib/uninorm/composition-table.gperf"
      {"\000\037`\000\003\000", 0x1f62},
#line 747 "../../lib/uninorm/composition-table.gperf"
      {"\000\037`\000\003B", 0x1f66},
#line 526 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003$", 0x1e72},
#line 616 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\364\000\003\001", 0x1ed1},
#line 618 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\364\000\003\000", 0x1ed3},
#line 417 "../../lib/uninorm/composition-table.gperf"
      {"\000\000b\000\003#", 0x1e05},
#line 867 "../../lib/uninorm/composition-table.gperf"
      {"\000!\222\000\0038", 0x219b},
#line 737 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\245\000\003\024", 0x1f59},
#line 465 "../../lib/uninorm/composition-table.gperf"
      {"\000\000k\000\0031", 0x1e35},
      {""},
#line 382 "../../lib/uninorm/composition-table.gperf"
      {"\000\013G\000\013W", 0x0b4c},
#line 796 "../../lib/uninorm/composition-table.gperf"
      {"\000\037`\000\003E", 0x1fa0},
      {""},
#line 942 "../../lib/uninorm/composition-table.gperf"
      {"\0000\265\0000\231", 0x30b6},
      {""},
#line 854 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\245\000\003\004", 0x1fe9},
      {""},
#line 693 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\227\000\003\023", 0x1f28},
#line 742 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\311\000\003\024", 0x1f61},
#line 869 "../../lib/uninorm/composition-table.gperf"
      {"\000!\320\000\0038", 0x21cd},
#line 387 "../../lib/uninorm/composition-table.gperf"
      {"\000\014F\000\014V", 0x0c48},
      {""},
#line 430 "../../lib/uninorm/composition-table.gperf"
      {"\000\000D\000\003-", 0x1e12},
#line 958 "../../lib/uninorm/composition-table.gperf"
      {"\0000\330\0000\231", 0x30d9},
#line 294 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\225\000\003\001", 0x0388},
#line 829 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\225\000\003\000", 0x1fc8},
#line 572 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\342\000\003\001", 0x1ea5},
#line 574 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\342\000\003\000", 0x1ea7},
#line 463 "../../lib/uninorm/composition-table.gperf"
      {"\000\000k\000\003#", 0x1e33},
#line 307 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\313\000\003\001", 0x03b0},
#line 848 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\313\000\003\000", 0x1fe2},
#line 852 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\313\000\003B", 0x1fe7},
#line 571 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\302\000\003\001", 0x1ea4},
#line 573 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\302\000\003\000", 0x1ea6},
#line 292 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\250\000\003\001", 0x0385},
#line 857 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\250\000\003\000", 0x1fed},
#line 823 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\250\000\003B", 0x1fc1},
#line 959 "../../lib/uninorm/composition-table.gperf"
      {"\0000\330\0000\232", 0x30da},
#line 734 "../../lib/uninorm/composition-table.gperf"
      {"\000\037Q\000\003\001", 0x1f55},
#line 732 "../../lib/uninorm/composition-table.gperf"
      {"\000\037Q\000\003\000", 0x1f53},
#line 736 "../../lib/uninorm/composition-table.gperf"
      {"\000\037Q\000\003B", 0x1f57},
#line 202 "../../lib/uninorm/composition-table.gperf"
      {"\000\000o\000\003\033", 0x01a1},
#line 497 "../../lib/uninorm/composition-table.gperf"
      {"\000\000p\000\003\001", 0x1e55},
#line 786 "../../lib/uninorm/composition-table.gperf"
      {"\000\037&\000\003E", 0x1f96},
#line 139 "../../lib/uninorm/composition-table.gperf"
      {"\000\000j\000\003\002", 0x0135},
#line 619 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\324\000\003\011", 0x1ed4},
#line 499 "../../lib/uninorm/composition-table.gperf"
      {"\000\000p\000\003\007", 0x1e57},
      {""},
#line 538 "../../lib/uninorm/composition-table.gperf"
      {"\000\000V\000\003#", 0x1e7e},
#line 324 "../../lib/uninorm/composition-table.gperf"
      {"\000\0045\000\003\000", 0x0450},
#line 204 "../../lib/uninorm/composition-table.gperf"
      {"\000\000u\000\003\033", 0x01b0},
#line 413 "../../lib/uninorm/composition-table.gperf"
      {"\000\000a\000\003%", 0x1e01},
      {""},
#line 602 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\352\000\003\011", 0x1ec3},
#line 171 "../../lib/uninorm/composition-table.gperf"
      {"\000\000s\000\003'", 0x015f},
#line 931 "../../lib/uninorm/composition-table.gperf"
      {"\0000x\0000\231", 0x3079},
      {""},
#line 348 "../../lib/uninorm/composition-table.gperf"
      {"\000\0048\000\003\004", 0x04e3},
      {""},
#line 806 "../../lib/uninorm/composition-table.gperf"
      {"\000\037j\000\003E", 0x1faa},
#line 814 "../../lib/uninorm/composition-table.gperf"
      {"\000\037p\000\003E", 0x1fb2},
#line 622 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\364\000\003\003", 0x1ed7},
#line 233 "../../lib/uninorm/composition-table.gperf"
      {"\000\001\352\000\003\004", 0x01ec},
      {""},
#line 140 "../../lib/uninorm/composition-table.gperf"
      {"\000\000K\000\003'", 0x0136},
#line 347 "../../lib/uninorm/composition-table.gperf"
      {"\000\004\030\000\003\004", 0x04e2},
      {""},
#line 505 "../../lib/uninorm/composition-table.gperf"
      {"\000\036[\000\003\004", 0x1e5d},
#line 534 "../../lib/uninorm/composition-table.gperf"
      {"\000\001j\000\003\010", 0x1e7a},
#line 932 "../../lib/uninorm/composition-table.gperf"
      {"\0000x\0000\232", 0x307a},
      {""},
#line 904 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\221\000\0038", 0x22e2},
      {""}, {""}, {""},
#line 145 "../../lib/uninorm/composition-table.gperf"
      {"\000\000l\000\003'", 0x013c},
      {""},
#line 170 "../../lib/uninorm/composition-table.gperf"
      {"\000\000S\000\003'", 0x015e},
      {""},
#line 918 "../../lib/uninorm/composition-table.gperf"
      {"\0000[\0000\231", 0x305c},
#line 694 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\227\000\003\024", 0x1f29},
#line 325 "../../lib/uninorm/composition-table.gperf"
      {"\000\0045\000\003\010", 0x0451},
#line 889 "../../lib/uninorm/composition-table.gperf"
      {"\000\"s\000\0038", 0x2275},
      {""},
#line 578 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\342\000\003\003", 0x1eab},
#line 679 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\225\000\003\023", 0x1f18},
#line 689 "../../lib/uninorm/composition-table.gperf"
      {"\000\037 \000\003\001", 0x1f24},
#line 687 "../../lib/uninorm/composition-table.gperf"
      {"\000\037 \000\003\000", 0x1f22},
#line 691 "../../lib/uninorm/composition-table.gperf"
      {"\000\037 \000\003B", 0x1f26},
      {""},
#line 577 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\302\000\003\003", 0x1eaa},
      {""},
#line 952 "../../lib/uninorm/composition-table.gperf"
      {"\0000\317\0000\231", 0x30d0},
      {""}, {""},
#line 72 "../../lib/uninorm/composition-table.gperf"
      {"\000\000c\000\003'", 0x00e7},
#line 970 "../../lib/uninorm/composition-table.gperf"
      {"\001\020\245\001\020\272", 0x110ab},
#line 201 "../../lib/uninorm/composition-table.gperf"
      {"\000\000O\000\003\033", 0x01a0},
#line 780 "../../lib/uninorm/composition-table.gperf"
      {"\000\037 \000\003E", 0x1f90},
      {""},
#line 406 "../../lib/uninorm/composition-table.gperf"
      {"\000\033\021\000\0335", 0x1b12},
      {""}, {""},
#line 404 "../../lib/uninorm/composition-table.gperf"
      {"\000\033\013\000\0335", 0x1b0c},
#line 428 "../../lib/uninorm/composition-table.gperf"
      {"\000\000D\000\003'", 0x1e10},
      {""},
#line 953 "../../lib/uninorm/composition-table.gperf"
      {"\0000\317\0000\232", 0x30d1},
#line 411 "../../lib/uninorm/composition-table.gperf"
      {"\000\033B\000\0335", 0x1b43},
#line 454 "../../lib/uninorm/composition-table.gperf"
      {"\000\000H\000\003.", 0x1e2a},
      {""},
#line 340 "../../lib/uninorm/composition-table.gperf"
      {"\000\0045\000\003\006", 0x04d7},
      {""}, {""}, {""},
#line 412 "../../lib/uninorm/composition-table.gperf"
      {"\000\000A\000\003%", 0x1e00},
      {""},
#line 971 "../../lib/uninorm/composition-table.gperf"
      {"\001\0211\001\021'", 0x1112e},
#line 383 "../../lib/uninorm/composition-table.gperf"
      {"\000\013\222\000\013\327", 0x0b94},
      {""},
#line 203 "../../lib/uninorm/composition-table.gperf"
      {"\000\000U\000\003\033", 0x01af},
#line 620 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\364\000\003\011", 0x1ed5},
      {""}, {""}, {""}, {""},
#line 379 "../../lib/uninorm/composition-table.gperf"
      {"\000\011\307\000\011\327", 0x09cc},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 892 "../../lib/uninorm/composition-table.gperf"
      {"\000\"z\000\0038", 0x2280},
      {""},
#line 388 "../../lib/uninorm/composition-table.gperf"
      {"\000\014\277\000\014\325", 0x0cc0},
      {""}, {""}, {""}, {""}, {""},
#line 455 "../../lib/uninorm/composition-table.gperf"
      {"\000\000h\000\003.", 0x1e2b},
#line 576 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\342\000\003\011", 0x1ea9},
      {""}, {""}, {""}, {""},
#line 680 "../../lib/uninorm/composition-table.gperf"
      {"\000\003\225\000\003\024", 0x1f19},
#line 575 "../../lib/uninorm/composition-table.gperf"
      {"\000\000\302\000\003\011", 0x1ea8},
#line 223 "../../lib/uninorm/composition-table.gperf"
      {"\000\002&\000\003\004", 0x01e0},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 396 "../../lib/uninorm/composition-table.gperf"
      {"\000\015\331\000\015\312", 0x0dda},
#line 876 "../../lib/uninorm/composition-table.gperf"
      {"\000\"%\000\0038", 0x2226},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 367 "../../lib/uninorm/composition-table.gperf"
      {"\000\006'\000\006S", 0x0622},
#line 141 "../../lib/uninorm/composition-table.gperf"
      {"\000\000k\000\003'", 0x0137},
      {""},
#line 380 "../../lib/uninorm/composition-table.gperf"
      {"\000\013G\000\013V", 0x0b48},
#line 237 "../../lib/uninorm/composition-table.gperf"
      {"\000\000j\000\003\014", 0x01f0},
#line 385 "../../lib/uninorm/composition-table.gperf"
      {"\000\013\307\000\013\276", 0x0bcb},
      {""},
#line 875 "../../lib/uninorm/composition-table.gperf"
      {"\000\"#\000\0038", 0x2224},
      {""},
#line 973 "../../lib/uninorm/composition-table.gperf"
      {"\001\023G\001\023>", 0x1134b},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 909 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\265\000\0038", 0x22ed},
#line 369 "../../lib/uninorm/composition-table.gperf"
      {"\000\006H\000\006T", 0x0624},
      {""}, {""}, {""},
#line 398 "../../lib/uninorm/composition-table.gperf"
      {"\000\015\334\000\015\312", 0x0ddd},
      {""}, {""},
#line 390 "../../lib/uninorm/composition-table.gperf"
      {"\000\014\306\000\014\326", 0x0cc8},
#line 391 "../../lib/uninorm/composition-table.gperf"
      {"\000\014\306\000\014\302", 0x0cca},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 389 "../../lib/uninorm/composition-table.gperf"
      {"\000\014\306\000\014\325", 0x0cc7},
      {""}, {""}, {""},
#line 913 "../../lib/uninorm/composition-table.gperf"
      {"\0000Q\0000\231", 0x3052},
#line 372 "../../lib/uninorm/composition-table.gperf"
      {"\000\006\325\000\006T", 0x06c0},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 900 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\251\000\0038", 0x22ae},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 974 "../../lib/uninorm/composition-table.gperf"
      {"\001\023G\001\023W", 0x1134c},
#line 976 "../../lib/uninorm/composition-table.gperf"
      {"\001\024\271\001\024\260", 0x114bc},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 409 "../../lib/uninorm/composition-table.gperf"
      {"\000\033>\000\0335", 0x1b40},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 392 "../../lib/uninorm/composition-table.gperf"
      {"\000\014\312\000\014\325", 0x0ccb},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 361 "../../lib/uninorm/composition-table.gperf"
      {"\000\004#\000\003\013", 0x04f2},
      {""}, {""}, {""}, {""}, {""},
#line 374 "../../lib/uninorm/composition-table.gperf"
      {"\000\006\322\000\006T", 0x06d3},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 979 "../../lib/uninorm/composition-table.gperf"
      {"\001\025\271\001\025\257", 0x115bb},
      {""}, {""}, {""},
#line 370 "../../lib/uninorm/composition-table.gperf"
      {"\000\006'\000\006U", 0x0625},
      {""}, {""}, {""}, {""}, {""},
#line 899 "../../lib/uninorm/composition-table.gperf"
      {"\000\"\250\000\0038", 0x22ad},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 871 "../../lib/uninorm/composition-table.gperf"
      {"\000!\322\000\0038", 0x21cf},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 384 "../../lib/uninorm/composition-table.gperf"
      {"\000\013\306\000\013\276", 0x0bca},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 373 "../../lib/uninorm/composition-table.gperf"
      {"\000\006\301\000\006T", 0x06c2},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 400 "../../lib/uninorm/composition-table.gperf"
      {"\000\020%\000\020.", 0x1026},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 386 "../../lib/uninorm/composition-table.gperf"
      {"\000\013\306\000\013\327", 0x0bcc},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 870 "../../lib/uninorm/composition-table.gperf"
      {"\000!\324\000\0038", 0x21ce}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = gl_uninorm_compose_hash (str, len);

      if (key <= MAX_HASH_VALUE)
        if (len == lengthtable[key])
          {
            register const char *s = wordlist[key].codes;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return &wordlist[key];
          }
    }
  return 0;
}

/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: gperf -m 10 ../../lib/unictype/joininggroup_byname.gperf  */
/* Computed positions: -k'1-2,11-12,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 2 "../../lib/unictype/joininggroup_byname.gperf"
struct named_joining_group { int name; int joining_group; };

#define TOTAL_KEYWORDS 130
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 21
#define MIN_HASH_VALUE 11
#define MAX_HASH_VALUE 318
/* maximum key range = 308, duplicates = 0 */

#ifndef GPERF_DOWNCASE
#define GPERF_DOWNCASE 1
static unsigned char gperf_downcase[256] =
  {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255
  };
#endif

#ifndef GPERF_CASE_STRCMP
#define GPERF_CASE_STRCMP 1
static int
gperf_case_strcmp (register const char *s1, register const char *s2)
{
  for (;;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 != 0 && c1 == c2)
        continue;
      return (int)c1 - (int)c2;
    }
}
#endif

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
joining_group_hash (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319,   8,   5, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319,  11,  20,   2, 113,   5,
        5,  59,   2,   5, 125, 155,  14,   8,  80,  41,
       29, 140, 125,  23,  50,  56,  32,  47,  17,  53,
      104,   2, 319, 319, 319, 319, 319,  11,  20,   2,
      113,   5,   5,  59,   2,   5, 125, 155,  14,   8,
       80,  41,  29, 140, 125,  23,  50,  56,  32,  47,
       17,  53, 104,   2, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319, 319, 319, 319,
      319, 319, 319, 319, 319, 319, 319
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[11]+1];
      /*FALLTHROUGH*/
      case 11:
        hval += asso_values[(unsigned char)str[10]];
      /*FALLTHROUGH*/
      case 10:
      case 9:
      case 8:
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

struct joining_group_stringpool_t
  {
    char joining_group_stringpool_str11[sizeof("E")];
    char joining_group_stringpool_str12[sizeof("Heh")];
    char joining_group_stringpool_str13[sizeof("Heth")];
    char joining_group_stringpool_str14[sizeof("He")];
    char joining_group_stringpool_str15[sizeof("Feh")];
    char joining_group_stringpool_str17[sizeof("Fe")];
    char joining_group_stringpool_str18[sizeof("Hah")];
    char joining_group_stringpool_str24[sizeof("Mim")];
    char joining_group_stringpool_str25[sizeof("Meem")];
    char joining_group_stringpool_str26[sizeof("FarsiYeh")];
    char joining_group_stringpool_str27[sizeof("Farsi Yeh")];
    char joining_group_stringpool_str28[sizeof("HehGoal")];
    char joining_group_stringpool_str29[sizeof("Heh Goal")];
    char joining_group_stringpool_str30[sizeof("Beh")];
    char joining_group_stringpool_str31[sizeof("Beth")];
    char joining_group_stringpool_str32[sizeof("Alaph")];
    char joining_group_stringpool_str33[sizeof("Lamadh")];
    char joining_group_stringpool_str34[sizeof("Alef")];
    char joining_group_stringpool_str36[sizeof("Lam")];
    char joining_group_stringpool_str37[sizeof("Semkath")];
    char joining_group_stringpool_str41[sizeof("Pe")];
    char joining_group_stringpool_str42[sizeof("ManichaeanHeth")];
    char joining_group_stringpool_str44[sizeof("Sadhe")];
    char joining_group_stringpool_str46[sizeof("Manichaean Beth")];
    char joining_group_stringpool_str49[sizeof("Manichaean Heth")];
    char joining_group_stringpool_str51[sizeof("Manichaean Daleth")];
    char joining_group_stringpool_str52[sizeof("Manichaean Dhamedh")];
    char joining_group_stringpool_str53[sizeof("ManichaeanMem")];
    char joining_group_stringpool_str54[sizeof("Manichaean Lamedh")];
    char joining_group_stringpool_str55[sizeof("ManichaeanAleph")];
    char joining_group_stringpool_str58[sizeof("Manichaean Kaph")];
    char joining_group_stringpool_str59[sizeof("Manichaean Gimel")];
    char joining_group_stringpool_str60[sizeof("ManichaeanBeth")];
    char joining_group_stringpool_str61[sizeof("Teth")];
    char joining_group_stringpool_str63[sizeof("Yeh")];
    char joining_group_stringpool_str65[sizeof("Manichaean Aleph")];
    char joining_group_stringpool_str66[sizeof("Tah")];
    char joining_group_stringpool_str67[sizeof("Manichaean Resh")];
    char joining_group_stringpool_str70[sizeof("ManichaeanPe")];
    char joining_group_stringpool_str71[sizeof("ManichaeanLamedh")];
    char joining_group_stringpool_str72[sizeof("YehBarree")];
    char joining_group_stringpool_str73[sizeof("Yeh Barree")];
    char joining_group_stringpool_str75[sizeof("Manichaean One")];
    char joining_group_stringpool_str76[sizeof("TehMarbuta")];
    char joining_group_stringpool_str78[sizeof("Gaf")];
    char joining_group_stringpool_str79[sizeof("FinalSemkath")];
    char joining_group_stringpool_str80[sizeof("ManichaeanSamekh")];
    char joining_group_stringpool_str82[sizeof("ManichaeanSadhe")];
    char joining_group_stringpool_str83[sizeof("SwashKaf")];
    char joining_group_stringpool_str84[sizeof("Swash Kaf")];
    char joining_group_stringpool_str88[sizeof("Teh Marbuta")];
    char joining_group_stringpool_str89[sizeof("Gamal")];
    char joining_group_stringpool_str90[sizeof("ManichaeanTeth")];
    char joining_group_stringpool_str92[sizeof("Final Semkath")];
    char joining_group_stringpool_str93[sizeof("ManichaeanThamedh")];
    char joining_group_stringpool_str96[sizeof("Manichaean Samekh")];
    char joining_group_stringpool_str97[sizeof("YehWithTail")];
    char joining_group_stringpool_str98[sizeof("Manichaean Sadhe")];
    char joining_group_stringpool_str99[sizeof("Ain")];
    char joining_group_stringpool_str100[sizeof("Manichaean Teth")];
    char joining_group_stringpool_str101[sizeof("Teh Marbuta Goal")];
    char joining_group_stringpool_str103[sizeof("Manichaean Thamedh")];
    char joining_group_stringpool_str105[sizeof("Manichaean Waw")];
    char joining_group_stringpool_str106[sizeof("Manichaean Five")];
    char joining_group_stringpool_str108[sizeof("Waw")];
    char joining_group_stringpool_str109[sizeof("Shin")];
    char joining_group_stringpool_str111[sizeof("Taw")];
    char joining_group_stringpool_str112[sizeof("Seen")];
    char joining_group_stringpool_str115[sizeof("Yudh")];
    char joining_group_stringpool_str117[sizeof("ManichaeanYodh")];
    char joining_group_stringpool_str119[sizeof("ManichaeanOne")];
    char joining_group_stringpool_str120[sizeof("YudhHe")];
    char joining_group_stringpool_str121[sizeof("Yudh He")];
    char joining_group_stringpool_str125[sizeof("Manichaean Zayin")];
    char joining_group_stringpool_str129[sizeof("Manichaean Mem")];
    char joining_group_stringpool_str132[sizeof("SyriacWaw")];
    char joining_group_stringpool_str133[sizeof("Syriac Waw")];
    char joining_group_stringpool_str135[sizeof("Reh")];
    char joining_group_stringpool_str136[sizeof("DalathRish")];
    char joining_group_stringpool_str139[sizeof("Dalath Rish")];
    char joining_group_stringpool_str141[sizeof("Dal")];
    char joining_group_stringpool_str142[sizeof("Manichaean Ayin")];
    char joining_group_stringpool_str144[sizeof("Manichaean Taw")];
    char joining_group_stringpool_str145[sizeof("ReversedPe")];
    char joining_group_stringpool_str146[sizeof("ManichaeanWaw")];
    char joining_group_stringpool_str147[sizeof("Nya")];
    char joining_group_stringpool_str148[sizeof("Manichaean Yodh")];
    char joining_group_stringpool_str149[sizeof("ManichaeanTaw")];
    char joining_group_stringpool_str150[sizeof("Sad")];
    char joining_group_stringpool_str151[sizeof("Reversed Pe")];
    char joining_group_stringpool_str153[sizeof("Manichaean Twenty")];
    char joining_group_stringpool_str155[sizeof("ManichaeanTwenty")];
    char joining_group_stringpool_str156[sizeof("ManichaeanDhamedh")];
    char joining_group_stringpool_str157[sizeof("Qaph")];
    char joining_group_stringpool_str158[sizeof("BurushaskiYehBarree")];
    char joining_group_stringpool_str159[sizeof("Qaf")];
    char joining_group_stringpool_str160[sizeof("Straight Waw")];
    char joining_group_stringpool_str162[sizeof("Manichaean Nun")];
    char joining_group_stringpool_str163[sizeof("Manichaean Hundred")];
    char joining_group_stringpool_str164[sizeof("Khaph")];
    char joining_group_stringpool_str165[sizeof("ManichaeanResh")];
    char joining_group_stringpool_str167[sizeof("ManichaeanTen")];
    char joining_group_stringpool_str168[sizeof("ManichaeanFive")];
    char joining_group_stringpool_str169[sizeof("Manichaean Qoph")];
    char joining_group_stringpool_str170[sizeof("ManichaeanDaleth")];
    char joining_group_stringpool_str171[sizeof("TehMarbutaGoal")];
    char joining_group_stringpool_str172[sizeof("Kaph")];
    char joining_group_stringpool_str174[sizeof("Kaf")];
    char joining_group_stringpool_str176[sizeof("No Joining Group")];
    char joining_group_stringpool_str177[sizeof("Manichaean Ten")];
    char joining_group_stringpool_str178[sizeof("StraightWaw")];
    char joining_group_stringpool_str181[sizeof("RohingyaYeh")];
    char joining_group_stringpool_str183[sizeof("ManichaeanHundred")];
    char joining_group_stringpool_str185[sizeof("Manichaean Pe")];
    char joining_group_stringpool_str190[sizeof("Rohingya Yeh")];
    char joining_group_stringpool_str191[sizeof("Zhain")];
    char joining_group_stringpool_str199[sizeof("Zain")];
    char joining_group_stringpool_str204[sizeof("ManichaeanQoph")];
    char joining_group_stringpool_str205[sizeof("Noon")];
    char joining_group_stringpool_str210[sizeof("ManichaeanKaph")];
    char joining_group_stringpool_str214[sizeof("Burushaski Yeh Barree")];
    char joining_group_stringpool_str219[sizeof("Nun")];
    char joining_group_stringpool_str221[sizeof("Yeh with tail")];
    char joining_group_stringpool_str224[sizeof("ManichaeanNun")];
    char joining_group_stringpool_str228[sizeof("ManichaeanAyin")];
    char joining_group_stringpool_str232[sizeof("ManichaeanGimel")];
    char joining_group_stringpool_str238[sizeof("ManichaeanZayin")];
    char joining_group_stringpool_str247[sizeof("KnottedHeh")];
    char joining_group_stringpool_str250[sizeof("Knotted Heh")];
    char joining_group_stringpool_str318[sizeof("NoJoiningGroup")];
  };
static const struct joining_group_stringpool_t joining_group_stringpool_contents =
  {
    "E",
    "Heh",
    "Heth",
    "He",
    "Feh",
    "Fe",
    "Hah",
    "Mim",
    "Meem",
    "FarsiYeh",
    "Farsi Yeh",
    "HehGoal",
    "Heh Goal",
    "Beh",
    "Beth",
    "Alaph",
    "Lamadh",
    "Alef",
    "Lam",
    "Semkath",
    "Pe",
    "ManichaeanHeth",
    "Sadhe",
    "Manichaean Beth",
    "Manichaean Heth",
    "Manichaean Daleth",
    "Manichaean Dhamedh",
    "ManichaeanMem",
    "Manichaean Lamedh",
    "ManichaeanAleph",
    "Manichaean Kaph",
    "Manichaean Gimel",
    "ManichaeanBeth",
    "Teth",
    "Yeh",
    "Manichaean Aleph",
    "Tah",
    "Manichaean Resh",
    "ManichaeanPe",
    "ManichaeanLamedh",
    "YehBarree",
    "Yeh Barree",
    "Manichaean One",
    "TehMarbuta",
    "Gaf",
    "FinalSemkath",
    "ManichaeanSamekh",
    "ManichaeanSadhe",
    "SwashKaf",
    "Swash Kaf",
    "Teh Marbuta",
    "Gamal",
    "ManichaeanTeth",
    "Final Semkath",
    "ManichaeanThamedh",
    "Manichaean Samekh",
    "YehWithTail",
    "Manichaean Sadhe",
    "Ain",
    "Manichaean Teth",
    "Teh Marbuta Goal",
    "Manichaean Thamedh",
    "Manichaean Waw",
    "Manichaean Five",
    "Waw",
    "Shin",
    "Taw",
    "Seen",
    "Yudh",
    "ManichaeanYodh",
    "ManichaeanOne",
    "YudhHe",
    "Yudh He",
    "Manichaean Zayin",
    "Manichaean Mem",
    "SyriacWaw",
    "Syriac Waw",
    "Reh",
    "DalathRish",
    "Dalath Rish",
    "Dal",
    "Manichaean Ayin",
    "Manichaean Taw",
    "ReversedPe",
    "ManichaeanWaw",
    "Nya",
    "Manichaean Yodh",
    "ManichaeanTaw",
    "Sad",
    "Reversed Pe",
    "Manichaean Twenty",
    "ManichaeanTwenty",
    "ManichaeanDhamedh",
    "Qaph",
    "BurushaskiYehBarree",
    "Qaf",
    "Straight Waw",
    "Manichaean Nun",
    "Manichaean Hundred",
    "Khaph",
    "ManichaeanResh",
    "ManichaeanTen",
    "ManichaeanFive",
    "Manichaean Qoph",
    "ManichaeanDaleth",
    "TehMarbutaGoal",
    "Kaph",
    "Kaf",
    "No Joining Group",
    "Manichaean Ten",
    "StraightWaw",
    "RohingyaYeh",
    "ManichaeanHundred",
    "Manichaean Pe",
    "Rohingya Yeh",
    "Zhain",
    "Zain",
    "ManichaeanQoph",
    "Noon",
    "ManichaeanKaph",
    "Burushaski Yeh Barree",
    "Nun",
    "Yeh with tail",
    "ManichaeanNun",
    "ManichaeanAyin",
    "ManichaeanGimel",
    "ManichaeanZayin",
    "KnottedHeh",
    "Knotted Heh",
    "NoJoiningGroup"
  };
#define joining_group_stringpool ((const char *) &joining_group_stringpool_contents)

static const struct named_joining_group joining_group_names[] =
  {
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1},
#line 26 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str11, UC_JOINING_GROUP_E},
#line 37 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str12, UC_JOINING_GROUP_HEH},
#line 40 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str13, UC_JOINING_GROUP_HETH},
#line 36 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str14, UC_JOINING_GROUP_HE},
#line 30 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str15, UC_JOINING_GROUP_FEH},
    {-1},
#line 29 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str17, UC_JOINING_GROUP_FE},
#line 35 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str18, UC_JOINING_GROUP_HAH},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 49 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str24, UC_JOINING_GROUP_MIM},
#line 48 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str25, UC_JOINING_GROUP_MEEM},
#line 28 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str26, UC_JOINING_GROUP_FARSI_YEH},
#line 27 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str27, UC_JOINING_GROUP_FARSI_YEH},
#line 39 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str28, UC_JOINING_GROUP_HEH_GOAL},
#line 38 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str29, UC_JOINING_GROUP_HEH_GOAL},
#line 19 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str30, UC_JOINING_GROUP_BEH},
#line 20 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str31, UC_JOINING_GROUP_BETH},
#line 17 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str32, UC_JOINING_GROUP_ALAPH},
#line 47 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str33, UC_JOINING_GROUP_LAMADH},
#line 18 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str34, UC_JOINING_GROUP_ALEF},
    {-1},
#line 46 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str36, UC_JOINING_GROUP_LAM},
#line 62 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str37, UC_JOINING_GROUP_SEMKATH},
    {-1}, {-1}, {-1},
#line 53 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str41, UC_JOINING_GROUP_PE},
#line 103 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str42, UC_JOINING_GROUP_MANICHAEAN_HETH},
    {-1},
#line 60 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str44, UC_JOINING_GROUP_SADHE},
    {-1},
#line 92 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str46, UC_JOINING_GROUP_MANICHAEAN_BETH},
    {-1}, {-1},
#line 102 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str49, UC_JOINING_GROUP_MANICHAEAN_HETH},
    {-1},
#line 96 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str51, UC_JOINING_GROUP_MANICHAEAN_DALETH},
#line 112 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str52, UC_JOINING_GROUP_MANICHAEAN_DHAMEDH},
#line 117 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str53, UC_JOINING_GROUP_MANICHAEAN_MEM},
#line 110 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str54, UC_JOINING_GROUP_MANICHAEAN_LAMEDH},
#line 91 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str55, UC_JOINING_GROUP_MANICHAEAN_ALEPH},
    {-1}, {-1},
#line 108 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str58, UC_JOINING_GROUP_MANICHAEAN_KAPH},
#line 94 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str59, UC_JOINING_GROUP_MANICHAEAN_GIMEL},
#line 93 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str60, UC_JOINING_GROUP_MANICHAEAN_BETH},
#line 74 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str61, UC_JOINING_GROUP_TETH},
    {-1},
#line 76 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str63, UC_JOINING_GROUP_YEH},
    {-1},
#line 90 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str65, UC_JOINING_GROUP_MANICHAEAN_ALEPH},
#line 68 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str66, UC_JOINING_GROUP_TAH},
#line 130 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str67, UC_JOINING_GROUP_MANICHAEAN_RESH},
    {-1}, {-1},
#line 125 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str70, UC_JOINING_GROUP_MANICHAEAN_PE},
#line 111 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str71, UC_JOINING_GROUP_MANICHAEAN_LAMEDH},
#line 78 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str72, UC_JOINING_GROUP_YEH_BARREE},
#line 77 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str73, UC_JOINING_GROUP_YEH_BARREE},
    {-1},
#line 134 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str75, UC_JOINING_GROUP_MANICHAEAN_ONE},
#line 71 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str76, UC_JOINING_GROUP_TEH_MARBUTA},
    {-1},
#line 33 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str78, UC_JOINING_GROUP_GAF},
#line 32 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str79, UC_JOINING_GROUP_FINAL_SEMKATH},
#line 121 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str80, UC_JOINING_GROUP_MANICHAEAN_SAMEKH},
    {-1},
#line 127 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str82, UC_JOINING_GROUP_MANICHAEAN_SADHE},
#line 65 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str83, UC_JOINING_GROUP_SWASH_KAF},
#line 64 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str84, UC_JOINING_GROUP_SWASH_KAF},
    {-1}, {-1}, {-1},
#line 70 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str88, UC_JOINING_GROUP_TEH_MARBUTA},
#line 34 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str89, UC_JOINING_GROUP_GAMAL},
#line 105 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str90, UC_JOINING_GROUP_MANICHAEAN_TETH},
    {-1},
#line 31 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str92, UC_JOINING_GROUP_FINAL_SEMKATH},
#line 115 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str93, UC_JOINING_GROUP_MANICHAEAN_THAMEDH},
    {-1}, {-1},
#line 120 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str96, UC_JOINING_GROUP_MANICHAEAN_SAMEKH},
#line 80 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str97, UC_JOINING_GROUP_YEH_WITH_TAIL},
#line 126 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str98, UC_JOINING_GROUP_MANICHAEAN_SADHE},
#line 16 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str99, UC_JOINING_GROUP_AIN},
#line 104 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str100, UC_JOINING_GROUP_MANICHAEAN_TETH},
#line 72 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str101, UC_JOINING_GROUP_TEH_MARBUTA_GOAL},
    {-1},
#line 114 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str103, UC_JOINING_GROUP_MANICHAEAN_THAMEDH},
    {-1},
#line 98 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str105, UC_JOINING_GROUP_MANICHAEAN_WAW},
#line 136 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str106, UC_JOINING_GROUP_MANICHAEAN_FIVE},
    {-1},
#line 75 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str108, UC_JOINING_GROUP_WAW},
#line 63 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str109, UC_JOINING_GROUP_SHIN},
    {-1},
#line 69 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str111, UC_JOINING_GROUP_TAW},
#line 61 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str112, UC_JOINING_GROUP_SEEN},
    {-1}, {-1},
#line 81 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str115, UC_JOINING_GROUP_YUDH},
    {-1},
#line 107 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str117, UC_JOINING_GROUP_MANICHAEAN_YODH},
    {-1},
#line 135 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str119, UC_JOINING_GROUP_MANICHAEAN_ONE},
#line 83 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str120, UC_JOINING_GROUP_YUDH_HE},
#line 82 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str121, UC_JOINING_GROUP_YUDH_HE},
    {-1}, {-1}, {-1},
#line 100 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str125, UC_JOINING_GROUP_MANICHAEAN_ZAYIN},
    {-1}, {-1}, {-1},
#line 116 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str129, UC_JOINING_GROUP_MANICHAEAN_MEM},
    {-1}, {-1},
#line 67 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str132, UC_JOINING_GROUP_SYRIAC_WAW},
#line 66 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str133, UC_JOINING_GROUP_SYRIAC_WAW},
    {-1},
#line 56 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str135, UC_JOINING_GROUP_REH},
#line 25 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str136, UC_JOINING_GROUP_DALATH_RISH},
    {-1}, {-1},
#line 24 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str139, UC_JOINING_GROUP_DALATH_RISH},
    {-1},
#line 23 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str141, UC_JOINING_GROUP_DAL},
#line 122 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str142, UC_JOINING_GROUP_MANICHAEAN_AYIN},
    {-1},
#line 132 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str144, UC_JOINING_GROUP_MANICHAEAN_TAW},
#line 58 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str145, UC_JOINING_GROUP_REVERSED_PE},
#line 99 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str146, UC_JOINING_GROUP_MANICHAEAN_WAW},
#line 52 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str147, UC_JOINING_GROUP_NYA},
#line 106 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str148, UC_JOINING_GROUP_MANICHAEAN_YODH},
#line 133 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str149, UC_JOINING_GROUP_MANICHAEAN_TAW},
#line 59 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str150, UC_JOINING_GROUP_SAD},
#line 57 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str151, UC_JOINING_GROUP_REVERSED_PE},
    {-1},
#line 140 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str153, UC_JOINING_GROUP_MANICHAEAN_TWENTY},
    {-1},
#line 141 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str155, UC_JOINING_GROUP_MANICHAEAN_TWENTY},
#line 113 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str156, UC_JOINING_GROUP_MANICHAEAN_DHAMEDH},
#line 55 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str157, UC_JOINING_GROUP_QAPH},
#line 22 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str158, UC_JOINING_GROUP_BURUSHASKI_YEH_BARREE},
#line 54 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str159, UC_JOINING_GROUP_QAF},
#line 88 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str160, UC_JOINING_GROUP_STRAIGHT_WAW},
    {-1},
#line 118 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str162, UC_JOINING_GROUP_MANICHAEAN_NUN},
#line 142 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str163, UC_JOINING_GROUP_MANICHAEAN_HUNDRED},
#line 43 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str164, UC_JOINING_GROUP_KHAPH},
#line 131 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str165, UC_JOINING_GROUP_MANICHAEAN_RESH},
    {-1},
#line 139 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str167, UC_JOINING_GROUP_MANICHAEAN_TEN},
#line 137 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str168, UC_JOINING_GROUP_MANICHAEAN_FIVE},
#line 128 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str169, UC_JOINING_GROUP_MANICHAEAN_QOPH},
#line 97 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str170, UC_JOINING_GROUP_MANICHAEAN_DALETH},
#line 73 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str171, UC_JOINING_GROUP_TEH_MARBUTA_GOAL},
#line 42 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str172, UC_JOINING_GROUP_KAPH},
    {-1},
#line 41 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str174, UC_JOINING_GROUP_KAF},
    {-1},
#line 14 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str176, UC_JOINING_GROUP_NONE},
#line 138 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str177, UC_JOINING_GROUP_MANICHAEAN_TEN},
#line 89 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str178, UC_JOINING_GROUP_STRAIGHT_WAW},
    {-1}, {-1},
#line 87 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str181, UC_JOINING_GROUP_ROHINGYA_YEH},
    {-1},
#line 143 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str183, UC_JOINING_GROUP_MANICHAEAN_HUNDRED},
    {-1},
#line 124 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str185, UC_JOINING_GROUP_MANICHAEAN_PE},
    {-1}, {-1}, {-1}, {-1},
#line 86 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str190, UC_JOINING_GROUP_ROHINGYA_YEH},
#line 85 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str191, UC_JOINING_GROUP_ZHAIN},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 84 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str199, UC_JOINING_GROUP_ZAIN},
    {-1}, {-1}, {-1}, {-1},
#line 129 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str204, UC_JOINING_GROUP_MANICHAEAN_QOPH},
#line 50 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str205, UC_JOINING_GROUP_NOON},
    {-1}, {-1}, {-1}, {-1},
#line 109 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str210, UC_JOINING_GROUP_MANICHAEAN_KAPH},
    {-1}, {-1}, {-1},
#line 21 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str214, UC_JOINING_GROUP_BURUSHASKI_YEH_BARREE},
    {-1}, {-1}, {-1}, {-1},
#line 51 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str219, UC_JOINING_GROUP_NUN},
    {-1},
#line 79 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str221, UC_JOINING_GROUP_YEH_WITH_TAIL},
    {-1}, {-1},
#line 119 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str224, UC_JOINING_GROUP_MANICHAEAN_NUN},
    {-1}, {-1}, {-1},
#line 123 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str228, UC_JOINING_GROUP_MANICHAEAN_AYIN},
    {-1}, {-1}, {-1},
#line 95 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str232, UC_JOINING_GROUP_MANICHAEAN_GIMEL},
    {-1}, {-1}, {-1}, {-1}, {-1},
#line 101 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str238, UC_JOINING_GROUP_MANICHAEAN_ZAYIN},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
#line 45 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str247, UC_JOINING_GROUP_KNOTTED_HEH},
    {-1}, {-1},
#line 44 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str250, UC_JOINING_GROUP_KNOTTED_HEH},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
    {-1}, {-1}, {-1}, {-1},
#line 15 "../../lib/unictype/joininggroup_byname.gperf"
    {(int)(size_t)&((struct joining_group_stringpool_t *)0)->joining_group_stringpool_str318, UC_JOINING_GROUP_NONE}
  };

const struct named_joining_group *
uc_joining_group_lookup (register const char *str, register size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = joining_group_hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register int o = joining_group_names[key].name;
          if (o >= 0)
            {
              register const char *s = o + joining_group_stringpool;

              if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strcmp (str, s))
                return &joining_group_names[key];
            }
        }
    }
  return 0;
}

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imresize.c
 *
 * Code generation for function 'imresize'
 *
 */

/* Include files */
#include "imresize.h"
#include "eml_int_forloop_overflow_check.h"
#include "imgprocessing_data.h"
#include "imgprocessing_emxutil.h"
#include "imgprocessing_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo c_emlrtRSI = {
    375,        /* lineNo */
    "imresize", /* fcnName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m" /* pathName
                                                                         */
};

static emlrtRSInfo d_emlrtRSI = {
    378,        /* lineNo */
    "imresize", /* fcnName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m" /* pathName
                                                                         */
};

static emlrtRSInfo e_emlrtRSI = {
    382,        /* lineNo */
    "imresize", /* fcnName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m" /* pathName
                                                                         */
};

static emlrtRSInfo f_emlrtRSI = {
    385,        /* lineNo */
    "imresize", /* fcnName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m" /* pathName
                                                                         */
};

static emlrtRSInfo g_emlrtRSI = {
    579,             /* lineNo */
    "contributions", /* fcnName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m" /* pathName
                                                                         */
};

static emlrtRSInfo h_emlrtRSI = {
    16,                                                         /* lineNo */
    "any",                                                      /* fcnName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    143,        /* lineNo */
    "allOrAny", /* fcnName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m" /* pathName
                                                                            */
};

static emlrtRSInfo j_emlrtRSI = {
    20,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_"
    "overflow_check.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    439,              /* lineNo */
    "resizeAlongDim", /* fcnName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m" /* pathName
                                                                         */
};

static emlrtRSInfo l_emlrtRSI = {
    457,                /* lineNo */
    "resizeAlongDim2D", /* fcnName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m" /* pathName
                                                                         */
};

static emlrtRSInfo m_emlrtRSI = {
    16,        /* lineNo */
    "sub2ind", /* fcnName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m" /* pathName
                                                                       */
};

static emlrtRSInfo p_emlrtRSI = {
    470,                /* lineNo */
    "resizeAlongDim2D", /* fcnName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m" /* pathName
                                                                         */
};

static emlrtRSInfo q_emlrtRSI = {
    479,                /* lineNo */
    "resizeAlongDim2D", /* fcnName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m" /* pathName
                                                                         */
};

static emlrtRTEInfo emlrtRTEI = {
    28,        /* lineNo */
    19,        /* colNo */
    "sub2ind", /* fName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m" /* pName
                                                                           */
};

static emlrtRTEInfo c_emlrtRTEI = {
    1,          /* lineNo */
    17,         /* colNo */
    "imresize", /* fName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m" /* pName
                                                                         */
};

static emlrtRTEInfo d_emlrtRTEI = {
    584,        /* lineNo */
    1,          /* colNo */
    "imresize", /* fName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m" /* pName
                                                                         */
};

static emlrtRTEInfo e_emlrtRTEI = {
    585,        /* lineNo */
    1,          /* colNo */
    "imresize", /* fName */
    "D:\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\imresize.m" /* pName
                                                                         */
};

/* Function Declarations */
static void b_contributions(imgprocessingStackData *SD, const emlrtStack *sp,
                            emxArray_real_T *weights,
                            emxArray_int32_T *indices);

static void b_resizeAlongDim(const emlrtStack *sp, const uint8_T in_[14400000],
                             const emxArray_real_T *weights,
                             const emxArray_int32_T *indices,
                             uint8_T out_[5760000]);

static void contributions(imgprocessingStackData *SD, const emlrtStack *sp,
                          emxArray_real_T *weights, int32_T indices_data[],
                          int32_T indices_size[2]);

static void resizeAlongDim(const emlrtStack *sp, const uint8_T in_[36000000],
                           const emxArray_real_T *weights,
                           const int32_T indices_data[],
                           uint8_T out_[14400000]);

/* Function Definitions */
static void b_contributions(imgprocessingStackData *SD, const emlrtStack *sp,
                            emxArray_real_T *weights, emxArray_int32_T *indices)
{
  static const int16_T iv[1600] = {
      -4,   -1,   1,    4,    6,    9,    11,   14,   16,   19,   21,   24,
      26,   29,   31,   34,   36,   39,   41,   44,   46,   49,   51,   54,
      56,   59,   61,   64,   66,   69,   71,   74,   76,   79,   81,   84,
      86,   89,   91,   94,   96,   99,   101,  104,  106,  109,  111,  114,
      116,  119,  121,  124,  126,  129,  131,  134,  136,  139,  141,  144,
      146,  149,  151,  154,  156,  159,  161,  164,  166,  169,  171,  174,
      176,  179,  181,  184,  186,  189,  191,  194,  196,  199,  201,  204,
      206,  209,  211,  214,  216,  219,  221,  224,  226,  229,  231,  234,
      236,  239,  241,  244,  246,  249,  251,  254,  256,  259,  261,  264,
      266,  269,  271,  274,  276,  279,  281,  284,  286,  289,  291,  294,
      296,  299,  301,  304,  306,  309,  311,  314,  316,  319,  321,  324,
      326,  329,  331,  334,  336,  339,  341,  344,  346,  349,  351,  354,
      356,  359,  361,  364,  366,  369,  371,  374,  376,  379,  381,  384,
      386,  389,  391,  394,  396,  399,  401,  404,  406,  409,  411,  414,
      416,  419,  421,  424,  426,  429,  431,  434,  436,  439,  441,  444,
      446,  449,  451,  454,  456,  459,  461,  464,  466,  469,  471,  474,
      476,  479,  481,  484,  486,  489,  491,  494,  496,  499,  501,  504,
      506,  509,  511,  514,  516,  519,  521,  524,  526,  529,  531,  534,
      536,  539,  541,  544,  546,  549,  551,  554,  556,  559,  561,  564,
      566,  569,  571,  574,  576,  579,  581,  584,  586,  589,  591,  594,
      596,  599,  601,  604,  606,  609,  611,  614,  616,  619,  621,  624,
      626,  629,  631,  634,  636,  639,  641,  644,  646,  649,  651,  654,
      656,  659,  661,  664,  666,  669,  671,  674,  676,  679,  681,  684,
      686,  689,  691,  694,  696,  699,  701,  704,  706,  709,  711,  714,
      716,  719,  721,  724,  726,  729,  731,  734,  736,  739,  741,  744,
      746,  749,  751,  754,  756,  759,  761,  764,  766,  769,  771,  774,
      776,  779,  781,  784,  786,  789,  791,  794,  796,  799,  801,  804,
      806,  809,  811,  814,  816,  819,  821,  824,  826,  829,  831,  834,
      836,  839,  841,  844,  846,  849,  851,  854,  856,  859,  861,  864,
      866,  869,  871,  874,  876,  879,  881,  884,  886,  889,  891,  894,
      896,  899,  901,  904,  906,  909,  911,  914,  916,  919,  921,  924,
      926,  929,  931,  934,  936,  939,  941,  944,  946,  949,  951,  954,
      956,  959,  961,  964,  966,  969,  971,  974,  976,  979,  981,  984,
      986,  989,  991,  994,  996,  999,  1001, 1004, 1006, 1009, 1011, 1014,
      1016, 1019, 1021, 1024, 1026, 1029, 1031, 1034, 1036, 1039, 1041, 1044,
      1046, 1049, 1051, 1054, 1056, 1059, 1061, 1064, 1066, 1069, 1071, 1074,
      1076, 1079, 1081, 1084, 1086, 1089, 1091, 1094, 1096, 1099, 1101, 1104,
      1106, 1109, 1111, 1114, 1116, 1119, 1121, 1124, 1126, 1129, 1131, 1134,
      1136, 1139, 1141, 1144, 1146, 1149, 1151, 1154, 1156, 1159, 1161, 1164,
      1166, 1169, 1171, 1174, 1176, 1179, 1181, 1184, 1186, 1189, 1191, 1194,
      1196, 1199, 1201, 1204, 1206, 1209, 1211, 1214, 1216, 1219, 1221, 1224,
      1226, 1229, 1231, 1234, 1236, 1239, 1241, 1244, 1246, 1249, 1251, 1254,
      1256, 1259, 1261, 1264, 1266, 1269, 1271, 1274, 1276, 1279, 1281, 1284,
      1286, 1289, 1291, 1294, 1296, 1299, 1301, 1304, 1306, 1309, 1311, 1314,
      1316, 1319, 1321, 1324, 1326, 1329, 1331, 1334, 1336, 1339, 1341, 1344,
      1346, 1349, 1351, 1354, 1356, 1359, 1361, 1364, 1366, 1369, 1371, 1374,
      1376, 1379, 1381, 1384, 1386, 1389, 1391, 1394, 1396, 1399, 1401, 1404,
      1406, 1409, 1411, 1414, 1416, 1419, 1421, 1424, 1426, 1429, 1431, 1434,
      1436, 1439, 1441, 1444, 1446, 1449, 1451, 1454, 1456, 1459, 1461, 1464,
      1466, 1469, 1471, 1474, 1476, 1479, 1481, 1484, 1486, 1489, 1491, 1494,
      1496, 1499, 1501, 1504, 1506, 1509, 1511, 1514, 1516, 1519, 1521, 1524,
      1526, 1529, 1531, 1534, 1536, 1539, 1541, 1544, 1546, 1549, 1551, 1554,
      1556, 1559, 1561, 1564, 1566, 1569, 1571, 1574, 1576, 1579, 1581, 1584,
      1586, 1589, 1591, 1594, 1596, 1599, 1601, 1604, 1606, 1609, 1611, 1614,
      1616, 1619, 1621, 1624, 1626, 1629, 1631, 1634, 1636, 1639, 1641, 1644,
      1646, 1649, 1651, 1654, 1656, 1659, 1661, 1664, 1666, 1669, 1671, 1674,
      1676, 1679, 1681, 1684, 1686, 1689, 1691, 1694, 1696, 1699, 1701, 1704,
      1706, 1709, 1711, 1714, 1716, 1719, 1721, 1724, 1726, 1729, 1731, 1734,
      1736, 1739, 1741, 1744, 1746, 1749, 1751, 1754, 1756, 1759, 1761, 1764,
      1766, 1769, 1771, 1774, 1776, 1779, 1781, 1784, 1786, 1789, 1791, 1794,
      1796, 1799, 1801, 1804, 1806, 1809, 1811, 1814, 1816, 1819, 1821, 1824,
      1826, 1829, 1831, 1834, 1836, 1839, 1841, 1844, 1846, 1849, 1851, 1854,
      1856, 1859, 1861, 1864, 1866, 1869, 1871, 1874, 1876, 1879, 1881, 1884,
      1886, 1889, 1891, 1894, 1896, 1899, 1901, 1904, 1906, 1909, 1911, 1914,
      1916, 1919, 1921, 1924, 1926, 1929, 1931, 1934, 1936, 1939, 1941, 1944,
      1946, 1949, 1951, 1954, 1956, 1959, 1961, 1964, 1966, 1969, 1971, 1974,
      1976, 1979, 1981, 1984, 1986, 1989, 1991, 1994, 1996, 1999, 2001, 2004,
      2006, 2009, 2011, 2014, 2016, 2019, 2021, 2024, 2026, 2029, 2031, 2034,
      2036, 2039, 2041, 2044, 2046, 2049, 2051, 2054, 2056, 2059, 2061, 2064,
      2066, 2069, 2071, 2074, 2076, 2079, 2081, 2084, 2086, 2089, 2091, 2094,
      2096, 2099, 2101, 2104, 2106, 2109, 2111, 2114, 2116, 2119, 2121, 2124,
      2126, 2129, 2131, 2134, 2136, 2139, 2141, 2144, 2146, 2149, 2151, 2154,
      2156, 2159, 2161, 2164, 2166, 2169, 2171, 2174, 2176, 2179, 2181, 2184,
      2186, 2189, 2191, 2194, 2196, 2199, 2201, 2204, 2206, 2209, 2211, 2214,
      2216, 2219, 2221, 2224, 2226, 2229, 2231, 2234, 2236, 2239, 2241, 2244,
      2246, 2249, 2251, 2254, 2256, 2259, 2261, 2264, 2266, 2269, 2271, 2274,
      2276, 2279, 2281, 2284, 2286, 2289, 2291, 2294, 2296, 2299, 2301, 2304,
      2306, 2309, 2311, 2314, 2316, 2319, 2321, 2324, 2326, 2329, 2331, 2334,
      2336, 2339, 2341, 2344, 2346, 2349, 2351, 2354, 2356, 2359, 2361, 2364,
      2366, 2369, 2371, 2374, 2376, 2379, 2381, 2384, 2386, 2389, 2391, 2394,
      2396, 2399, 2401, 2404, 2406, 2409, 2411, 2414, 2416, 2419, 2421, 2424,
      2426, 2429, 2431, 2434, 2436, 2439, 2441, 2444, 2446, 2449, 2451, 2454,
      2456, 2459, 2461, 2464, 2466, 2469, 2471, 2474, 2476, 2479, 2481, 2484,
      2486, 2489, 2491, 2494, 2496, 2499, 2501, 2504, 2506, 2509, 2511, 2514,
      2516, 2519, 2521, 2524, 2526, 2529, 2531, 2534, 2536, 2539, 2541, 2544,
      2546, 2549, 2551, 2554, 2556, 2559, 2561, 2564, 2566, 2569, 2571, 2574,
      2576, 2579, 2581, 2584, 2586, 2589, 2591, 2594, 2596, 2599, 2601, 2604,
      2606, 2609, 2611, 2614, 2616, 2619, 2621, 2624, 2626, 2629, 2631, 2634,
      2636, 2639, 2641, 2644, 2646, 2649, 2651, 2654, 2656, 2659, 2661, 2664,
      2666, 2669, 2671, 2674, 2676, 2679, 2681, 2684, 2686, 2689, 2691, 2694,
      2696, 2699, 2701, 2704, 2706, 2709, 2711, 2714, 2716, 2719, 2721, 2724,
      2726, 2729, 2731, 2734, 2736, 2739, 2741, 2744, 2746, 2749, 2751, 2754,
      2756, 2759, 2761, 2764, 2766, 2769, 2771, 2774, 2776, 2779, 2781, 2784,
      2786, 2789, 2791, 2794, 2796, 2799, 2801, 2804, 2806, 2809, 2811, 2814,
      2816, 2819, 2821, 2824, 2826, 2829, 2831, 2834, 2836, 2839, 2841, 2844,
      2846, 2849, 2851, 2854, 2856, 2859, 2861, 2864, 2866, 2869, 2871, 2874,
      2876, 2879, 2881, 2884, 2886, 2889, 2891, 2894, 2896, 2899, 2901, 2904,
      2906, 2909, 2911, 2914, 2916, 2919, 2921, 2924, 2926, 2929, 2931, 2934,
      2936, 2939, 2941, 2944, 2946, 2949, 2951, 2954, 2956, 2959, 2961, 2964,
      2966, 2969, 2971, 2974, 2976, 2979, 2981, 2984, 2986, 2989, 2991, 2994,
      2996, 2999, 3001, 3004, 3006, 3009, 3011, 3014, 3016, 3019, 3021, 3024,
      3026, 3029, 3031, 3034, 3036, 3039, 3041, 3044, 3046, 3049, 3051, 3054,
      3056, 3059, 3061, 3064, 3066, 3069, 3071, 3074, 3076, 3079, 3081, 3084,
      3086, 3089, 3091, 3094, 3096, 3099, 3101, 3104, 3106, 3109, 3111, 3114,
      3116, 3119, 3121, 3124, 3126, 3129, 3131, 3134, 3136, 3139, 3141, 3144,
      3146, 3149, 3151, 3154, 3156, 3159, 3161, 3164, 3166, 3169, 3171, 3174,
      3176, 3179, 3181, 3184, 3186, 3189, 3191, 3194, 3196, 3199, 3201, 3204,
      3206, 3209, 3211, 3214, 3216, 3219, 3221, 3224, 3226, 3229, 3231, 3234,
      3236, 3239, 3241, 3244, 3246, 3249, 3251, 3254, 3256, 3259, 3261, 3264,
      3266, 3269, 3271, 3274, 3276, 3279, 3281, 3284, 3286, 3289, 3291, 3294,
      3296, 3299, 3301, 3304, 3306, 3309, 3311, 3314, 3316, 3319, 3321, 3324,
      3326, 3329, 3331, 3334, 3336, 3339, 3341, 3344, 3346, 3349, 3351, 3354,
      3356, 3359, 3361, 3364, 3366, 3369, 3371, 3374, 3376, 3379, 3381, 3384,
      3386, 3389, 3391, 3394, 3396, 3399, 3401, 3404, 3406, 3409, 3411, 3414,
      3416, 3419, 3421, 3424, 3426, 3429, 3431, 3434, 3436, 3439, 3441, 3444,
      3446, 3449, 3451, 3454, 3456, 3459, 3461, 3464, 3466, 3469, 3471, 3474,
      3476, 3479, 3481, 3484, 3486, 3489, 3491, 3494, 3496, 3499, 3501, 3504,
      3506, 3509, 3511, 3514, 3516, 3519, 3521, 3524, 3526, 3529, 3531, 3534,
      3536, 3539, 3541, 3544, 3546, 3549, 3551, 3554, 3556, 3559, 3561, 3564,
      3566, 3569, 3571, 3574, 3576, 3579, 3581, 3584, 3586, 3589, 3591, 3594,
      3596, 3599, 3601, 3604, 3606, 3609, 3611, 3614, 3616, 3619, 3621, 3624,
      3626, 3629, 3631, 3634, 3636, 3639, 3641, 3644, 3646, 3649, 3651, 3654,
      3656, 3659, 3661, 3664, 3666, 3669, 3671, 3674, 3676, 3679, 3681, 3684,
      3686, 3689, 3691, 3694, 3696, 3699, 3701, 3704, 3706, 3709, 3711, 3714,
      3716, 3719, 3721, 3724, 3726, 3729, 3731, 3734, 3736, 3739, 3741, 3744,
      3746, 3749, 3751, 3754, 3756, 3759, 3761, 3764, 3766, 3769, 3771, 3774,
      3776, 3779, 3781, 3784, 3786, 3789, 3791, 3794, 3796, 3799, 3801, 3804,
      3806, 3809, 3811, 3814, 3816, 3819, 3821, 3824, 3826, 3829, 3831, 3834,
      3836, 3839, 3841, 3844, 3846, 3849, 3851, 3854, 3856, 3859, 3861, 3864,
      3866, 3869, 3871, 3874, 3876, 3879, 3881, 3884, 3886, 3889, 3891, 3894,
      3896, 3899, 3901, 3904, 3906, 3909, 3911, 3914, 3916, 3919, 3921, 3924,
      3926, 3929, 3931, 3934, 3936, 3939, 3941, 3944, 3946, 3949, 3951, 3954,
      3956, 3959, 3961, 3964, 3966, 3969, 3971, 3974, 3976, 3979, 3981, 3984,
      3986, 3989, 3991, 3994};
  __m128d r;
  __m128d r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T y[1600];
  real_T d;
  real_T *weights_data;
  int32_T b_indices[19200];
  int32_T aux[8000];
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T xj;
  int32_T xoffset;
  int32_T *indices_data;
  int8_T tmp_data[12];
  boolean_T copyCols[12];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  /*  Contributions, using pixel indices */
  for (k = 0; k < 12; k++) {
    for (i1 = 0; i1 < 1600; i1++) {
      b_indices[i1 + 1600 * k] = iv[i1] + k;
    }
  }
  for (i = 0; i < 19200; i++) {
    SD->u1.f0.absx2[i] = b_indices[i];
  }
  for (k = 0; k < 12; k++) {
    for (i1 = 0; i1 < 1600; i1++) {
      xoffset = i1 + 1600 * k;
      SD->u1.f0.x[xoffset] =
          (2.5 * (real_T)i1 + 1.75) - SD->u1.f0.absx2[xoffset];
    }
  }
  for (k = 0; k < 19200; k++) {
    real_T d1;
    real_T d2;
    d = muDoubleScalarAbs(0.4 * SD->u1.f0.x[k]);
    d1 = muDoubleScalarPower(d, 3.0);
    d2 = 2.5 * (d * d);
    d1 = 0.4 * (((1.5 * d1 - d2) + 1.0) * (real_T)(d <= 1.0) +
                (((-0.5 * d1 + d2) - 4.0 * d) + 2.0) *
                    (real_T)((d > 1.0) && (d <= 2.0)));
    SD->u1.f0.x[k] = d1;
  }
  memcpy(&y[0], &SD->u1.f0.x[0], 1600U * sizeof(real_T));
  for (k = 0; k < 11; k++) {
    xoffset = (k + 1) * 1600;
    for (xj = 0; xj <= 1598; xj += 2) {
      r = _mm_loadu_pd(&y[xj]);
      r1 = _mm_loadu_pd(&SD->u1.f0.x[xoffset + xj]);
      _mm_storeu_pd(&y[xj], _mm_add_pd(r, r1));
    }
  }
  memcpy(&SD->u1.f0.absx2[0], &SD->u1.f0.x[0], 19200U * sizeof(real_T));
  for (k = 0; k < 12; k++) {
    for (i1 = 0; i1 <= 1598; i1 += 2) {
      i = i1 + 1600 * k;
      r = _mm_loadu_pd(&SD->u1.f0.absx2[i]);
      r1 = _mm_loadu_pd(&y[i1]);
      _mm_storeu_pd(&SD->u1.f0.x[i], _mm_div_pd(r, r1));
    }
  }
  /*  Create the auxiliary matrix: */
  aux[0] = 1;
  aux[4000] = 4000;
  for (i = 0; i < 3999; i++) {
    aux[i + 1] = aux[i] + 1;
    aux[i + 4001] = aux[i + 4000] - 1;
  }
  /*  Mirror the out-of-bounds indices using mod: */
  for (i = 0; i < 19200; i++) {
    d = (real_T)b_indices[i] - 1.0;
    if (d == 0.0) {
      k = 0;
    } else {
      k = (int32_T)muDoubleScalarRem(d, 8000.0);
      if ((k != 0) && (d < 0.0)) {
        k += 8000;
      }
    }
    b_indices[i] = aux[k];
  }
  st.site = &g_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  for (i = 0; i < 12; i++) {
    copyCols[i] = false;
  }
  xoffset = 1600;
  for (i = 0; i < 12; i++) {
    boolean_T exitg1;
    xj = xoffset;
    i1 = xoffset - 1599;
    xoffset += 1600;
    c_st.site = &i_emlrtRSI;
    if ((i1 <= xj) && (xj > 2147483646)) {
      d_st.site = &j_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    exitg1 = false;
    while ((!exitg1) && (i1 <= xj)) {
      d = SD->u1.f0.x[i1 - 1];
      if ((d == 0.0) || muDoubleScalarIsNaN(d)) {
        i1++;
      } else {
        copyCols[i] = true;
        exitg1 = true;
      }
    }
  }
  xj = 0;
  xoffset = 0;
  for (i = 0; i < 12; i++) {
    if (copyCols[i]) {
      xj++;
      tmp_data[xoffset] = (int8_T)i;
      xoffset++;
    }
  }
  i = weights->size[0] * weights->size[1];
  weights->size[0] = xj;
  weights->size[1] = 1600;
  emxEnsureCapacity_real_T(sp, weights, i, &d_emlrtRTEI);
  weights_data = weights->data;
  i = indices->size[0] * indices->size[1];
  indices->size[0] = xj;
  indices->size[1] = 1600;
  emxEnsureCapacity_int32_T(sp, indices, i, &e_emlrtRTEI);
  indices_data = indices->data;
  for (i = 0; i < 1600; i++) {
    for (i1 = 0; i1 < xj; i1++) {
      xoffset = i + 1600 * tmp_data[i1];
      weights_data[i1 + weights->size[0] * i] = SD->u1.f0.x[xoffset];
      indices_data[i1 + indices->size[0] * i] = b_indices[xoffset];
    }
  }
}

static void b_resizeAlongDim(const emlrtStack *sp, const uint8_T in_[14400000],
                             const emxArray_real_T *weights,
                             const emxArray_int32_T *indices,
                             uint8_T out_[5760000])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const real_T *weights_data;
  const int32_T *indices_data;
  int32_T i;
  int32_T inRInd;
  int32_T k;
  int32_T outCInd;
  int32_T pInd;
  int16_T siz_idx_0;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  indices_data = indices->data;
  weights_data = weights->data;
  st.site = &k_emlrtRSI;
  i = weights->size[0];
  siz_idx_0 = (int16_T)weights->size[0];
  for (pInd = 0; pInd < 3; pInd++) {
    for (inRInd = 0; inRInd < 1200; inRInd++) {
      int32_T idx;
      b_st.site = &p_emlrtRSI;
      idx = inRInd + 4800000 * pInd;
      for (outCInd = 0; outCInd < 1600; outCInd++) {
        real_T sumVal1;
        real_T v;
        int32_T linearInds;
        sumVal1 = 0.0;
        /*  Core - second dimension */
        b_st.site = &q_emlrtRSI;
        c_st.site = &m_emlrtRSI;
        if (siz_idx_0 < 1) {
          emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                        "MATLAB:sub2ind:IndexOutOfRange",
                                        "MATLAB:sub2ind:IndexOutOfRange", 0);
        }
        linearInds = siz_idx_0 * outCInd;
        for (k = 0; k < i; k++) {
          int32_T sumVal1_tmp;
          sumVal1_tmp = linearInds + k;
          sumVal1 += weights_data[sumVal1_tmp] *
                     (real_T)in_[idx + (indices_data[sumVal1_tmp] - 1) * 1200];
        }
        v = muDoubleScalarAbs(sumVal1);
        if (v < 4.503599627370496E+15) {
          if (v >= 0.5) {
            v = muDoubleScalarFloor(sumVal1 + 0.5);
          } else {
            v = sumVal1 * 0.0;
          }
        } else {
          v = sumVal1;
        }
        if (sumVal1 > 255.0) {
          out_[(inRInd + 1200 * outCInd) + 1920000 * pInd] = MAX_uint8_T;
        } else if (sumVal1 < 0.0) {
          out_[(inRInd + 1200 * outCInd) + 1920000 * pInd] = 0U;
        } else {
          out_[(inRInd + 1200 * outCInd) + 1920000 * pInd] = (uint8_T)v;
        }
      }
    }
  }
}

static void contributions(imgprocessingStackData *SD, const emlrtStack *sp,
                          emxArray_real_T *weights, int32_T indices_data[],
                          int32_T indices_size[2])
{
  static const int16_T iv[1200] = {
      -4,   -1,   1,    4,    6,    9,    11,   14,   16,   19,   21,   24,
      26,   29,   31,   34,   36,   39,   41,   44,   46,   49,   51,   54,
      56,   59,   61,   64,   66,   69,   71,   74,   76,   79,   81,   84,
      86,   89,   91,   94,   96,   99,   101,  104,  106,  109,  111,  114,
      116,  119,  121,  124,  126,  129,  131,  134,  136,  139,  141,  144,
      146,  149,  151,  154,  156,  159,  161,  164,  166,  169,  171,  174,
      176,  179,  181,  184,  186,  189,  191,  194,  196,  199,  201,  204,
      206,  209,  211,  214,  216,  219,  221,  224,  226,  229,  231,  234,
      236,  239,  241,  244,  246,  249,  251,  254,  256,  259,  261,  264,
      266,  269,  271,  274,  276,  279,  281,  284,  286,  289,  291,  294,
      296,  299,  301,  304,  306,  309,  311,  314,  316,  319,  321,  324,
      326,  329,  331,  334,  336,  339,  341,  344,  346,  349,  351,  354,
      356,  359,  361,  364,  366,  369,  371,  374,  376,  379,  381,  384,
      386,  389,  391,  394,  396,  399,  401,  404,  406,  409,  411,  414,
      416,  419,  421,  424,  426,  429,  431,  434,  436,  439,  441,  444,
      446,  449,  451,  454,  456,  459,  461,  464,  466,  469,  471,  474,
      476,  479,  481,  484,  486,  489,  491,  494,  496,  499,  501,  504,
      506,  509,  511,  514,  516,  519,  521,  524,  526,  529,  531,  534,
      536,  539,  541,  544,  546,  549,  551,  554,  556,  559,  561,  564,
      566,  569,  571,  574,  576,  579,  581,  584,  586,  589,  591,  594,
      596,  599,  601,  604,  606,  609,  611,  614,  616,  619,  621,  624,
      626,  629,  631,  634,  636,  639,  641,  644,  646,  649,  651,  654,
      656,  659,  661,  664,  666,  669,  671,  674,  676,  679,  681,  684,
      686,  689,  691,  694,  696,  699,  701,  704,  706,  709,  711,  714,
      716,  719,  721,  724,  726,  729,  731,  734,  736,  739,  741,  744,
      746,  749,  751,  754,  756,  759,  761,  764,  766,  769,  771,  774,
      776,  779,  781,  784,  786,  789,  791,  794,  796,  799,  801,  804,
      806,  809,  811,  814,  816,  819,  821,  824,  826,  829,  831,  834,
      836,  839,  841,  844,  846,  849,  851,  854,  856,  859,  861,  864,
      866,  869,  871,  874,  876,  879,  881,  884,  886,  889,  891,  894,
      896,  899,  901,  904,  906,  909,  911,  914,  916,  919,  921,  924,
      926,  929,  931,  934,  936,  939,  941,  944,  946,  949,  951,  954,
      956,  959,  961,  964,  966,  969,  971,  974,  976,  979,  981,  984,
      986,  989,  991,  994,  996,  999,  1001, 1004, 1006, 1009, 1011, 1014,
      1016, 1019, 1021, 1024, 1026, 1029, 1031, 1034, 1036, 1039, 1041, 1044,
      1046, 1049, 1051, 1054, 1056, 1059, 1061, 1064, 1066, 1069, 1071, 1074,
      1076, 1079, 1081, 1084, 1086, 1089, 1091, 1094, 1096, 1099, 1101, 1104,
      1106, 1109, 1111, 1114, 1116, 1119, 1121, 1124, 1126, 1129, 1131, 1134,
      1136, 1139, 1141, 1144, 1146, 1149, 1151, 1154, 1156, 1159, 1161, 1164,
      1166, 1169, 1171, 1174, 1176, 1179, 1181, 1184, 1186, 1189, 1191, 1194,
      1196, 1199, 1201, 1204, 1206, 1209, 1211, 1214, 1216, 1219, 1221, 1224,
      1226, 1229, 1231, 1234, 1236, 1239, 1241, 1244, 1246, 1249, 1251, 1254,
      1256, 1259, 1261, 1264, 1266, 1269, 1271, 1274, 1276, 1279, 1281, 1284,
      1286, 1289, 1291, 1294, 1296, 1299, 1301, 1304, 1306, 1309, 1311, 1314,
      1316, 1319, 1321, 1324, 1326, 1329, 1331, 1334, 1336, 1339, 1341, 1344,
      1346, 1349, 1351, 1354, 1356, 1359, 1361, 1364, 1366, 1369, 1371, 1374,
      1376, 1379, 1381, 1384, 1386, 1389, 1391, 1394, 1396, 1399, 1401, 1404,
      1406, 1409, 1411, 1414, 1416, 1419, 1421, 1424, 1426, 1429, 1431, 1434,
      1436, 1439, 1441, 1444, 1446, 1449, 1451, 1454, 1456, 1459, 1461, 1464,
      1466, 1469, 1471, 1474, 1476, 1479, 1481, 1484, 1486, 1489, 1491, 1494,
      1496, 1499, 1501, 1504, 1506, 1509, 1511, 1514, 1516, 1519, 1521, 1524,
      1526, 1529, 1531, 1534, 1536, 1539, 1541, 1544, 1546, 1549, 1551, 1554,
      1556, 1559, 1561, 1564, 1566, 1569, 1571, 1574, 1576, 1579, 1581, 1584,
      1586, 1589, 1591, 1594, 1596, 1599, 1601, 1604, 1606, 1609, 1611, 1614,
      1616, 1619, 1621, 1624, 1626, 1629, 1631, 1634, 1636, 1639, 1641, 1644,
      1646, 1649, 1651, 1654, 1656, 1659, 1661, 1664, 1666, 1669, 1671, 1674,
      1676, 1679, 1681, 1684, 1686, 1689, 1691, 1694, 1696, 1699, 1701, 1704,
      1706, 1709, 1711, 1714, 1716, 1719, 1721, 1724, 1726, 1729, 1731, 1734,
      1736, 1739, 1741, 1744, 1746, 1749, 1751, 1754, 1756, 1759, 1761, 1764,
      1766, 1769, 1771, 1774, 1776, 1779, 1781, 1784, 1786, 1789, 1791, 1794,
      1796, 1799, 1801, 1804, 1806, 1809, 1811, 1814, 1816, 1819, 1821, 1824,
      1826, 1829, 1831, 1834, 1836, 1839, 1841, 1844, 1846, 1849, 1851, 1854,
      1856, 1859, 1861, 1864, 1866, 1869, 1871, 1874, 1876, 1879, 1881, 1884,
      1886, 1889, 1891, 1894, 1896, 1899, 1901, 1904, 1906, 1909, 1911, 1914,
      1916, 1919, 1921, 1924, 1926, 1929, 1931, 1934, 1936, 1939, 1941, 1944,
      1946, 1949, 1951, 1954, 1956, 1959, 1961, 1964, 1966, 1969, 1971, 1974,
      1976, 1979, 1981, 1984, 1986, 1989, 1991, 1994, 1996, 1999, 2001, 2004,
      2006, 2009, 2011, 2014, 2016, 2019, 2021, 2024, 2026, 2029, 2031, 2034,
      2036, 2039, 2041, 2044, 2046, 2049, 2051, 2054, 2056, 2059, 2061, 2064,
      2066, 2069, 2071, 2074, 2076, 2079, 2081, 2084, 2086, 2089, 2091, 2094,
      2096, 2099, 2101, 2104, 2106, 2109, 2111, 2114, 2116, 2119, 2121, 2124,
      2126, 2129, 2131, 2134, 2136, 2139, 2141, 2144, 2146, 2149, 2151, 2154,
      2156, 2159, 2161, 2164, 2166, 2169, 2171, 2174, 2176, 2179, 2181, 2184,
      2186, 2189, 2191, 2194, 2196, 2199, 2201, 2204, 2206, 2209, 2211, 2214,
      2216, 2219, 2221, 2224, 2226, 2229, 2231, 2234, 2236, 2239, 2241, 2244,
      2246, 2249, 2251, 2254, 2256, 2259, 2261, 2264, 2266, 2269, 2271, 2274,
      2276, 2279, 2281, 2284, 2286, 2289, 2291, 2294, 2296, 2299, 2301, 2304,
      2306, 2309, 2311, 2314, 2316, 2319, 2321, 2324, 2326, 2329, 2331, 2334,
      2336, 2339, 2341, 2344, 2346, 2349, 2351, 2354, 2356, 2359, 2361, 2364,
      2366, 2369, 2371, 2374, 2376, 2379, 2381, 2384, 2386, 2389, 2391, 2394,
      2396, 2399, 2401, 2404, 2406, 2409, 2411, 2414, 2416, 2419, 2421, 2424,
      2426, 2429, 2431, 2434, 2436, 2439, 2441, 2444, 2446, 2449, 2451, 2454,
      2456, 2459, 2461, 2464, 2466, 2469, 2471, 2474, 2476, 2479, 2481, 2484,
      2486, 2489, 2491, 2494, 2496, 2499, 2501, 2504, 2506, 2509, 2511, 2514,
      2516, 2519, 2521, 2524, 2526, 2529, 2531, 2534, 2536, 2539, 2541, 2544,
      2546, 2549, 2551, 2554, 2556, 2559, 2561, 2564, 2566, 2569, 2571, 2574,
      2576, 2579, 2581, 2584, 2586, 2589, 2591, 2594, 2596, 2599, 2601, 2604,
      2606, 2609, 2611, 2614, 2616, 2619, 2621, 2624, 2626, 2629, 2631, 2634,
      2636, 2639, 2641, 2644, 2646, 2649, 2651, 2654, 2656, 2659, 2661, 2664,
      2666, 2669, 2671, 2674, 2676, 2679, 2681, 2684, 2686, 2689, 2691, 2694,
      2696, 2699, 2701, 2704, 2706, 2709, 2711, 2714, 2716, 2719, 2721, 2724,
      2726, 2729, 2731, 2734, 2736, 2739, 2741, 2744, 2746, 2749, 2751, 2754,
      2756, 2759, 2761, 2764, 2766, 2769, 2771, 2774, 2776, 2779, 2781, 2784,
      2786, 2789, 2791, 2794, 2796, 2799, 2801, 2804, 2806, 2809, 2811, 2814,
      2816, 2819, 2821, 2824, 2826, 2829, 2831, 2834, 2836, 2839, 2841, 2844,
      2846, 2849, 2851, 2854, 2856, 2859, 2861, 2864, 2866, 2869, 2871, 2874,
      2876, 2879, 2881, 2884, 2886, 2889, 2891, 2894, 2896, 2899, 2901, 2904,
      2906, 2909, 2911, 2914, 2916, 2919, 2921, 2924, 2926, 2929, 2931, 2934,
      2936, 2939, 2941, 2944, 2946, 2949, 2951, 2954, 2956, 2959, 2961, 2964,
      2966, 2969, 2971, 2974, 2976, 2979, 2981, 2984, 2986, 2989, 2991, 2994};
  __m128d r;
  __m128d r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T y[1200];
  real_T d;
  real_T *weights_data;
  int32_T indices[14400];
  int32_T aux[6000];
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T xj;
  int32_T xoffset;
  int8_T tmp_data[12];
  boolean_T copyCols[12];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  /*  Contributions, using pixel indices */
  for (k = 0; k < 12; k++) {
    for (i1 = 0; i1 < 1200; i1++) {
      indices[i1 + 1200 * k] = iv[i1] + k;
    }
  }
  for (i = 0; i < 14400; i++) {
    SD->u1.f1.absx2[i] = indices[i];
  }
  for (k = 0; k < 12; k++) {
    for (i1 = 0; i1 < 1200; i1++) {
      xoffset = i1 + 1200 * k;
      SD->u1.f1.x[xoffset] =
          (2.5 * (real_T)i1 + 1.75) - SD->u1.f1.absx2[xoffset];
    }
  }
  for (k = 0; k < 14400; k++) {
    real_T d1;
    real_T d2;
    d = muDoubleScalarAbs(0.4 * SD->u1.f1.x[k]);
    d1 = muDoubleScalarPower(d, 3.0);
    d2 = 2.5 * (d * d);
    d1 = 0.4 * (((1.5 * d1 - d2) + 1.0) * (real_T)(d <= 1.0) +
                (((-0.5 * d1 + d2) - 4.0 * d) + 2.0) *
                    (real_T)((d > 1.0) && (d <= 2.0)));
    SD->u1.f1.x[k] = d1;
  }
  memcpy(&y[0], &SD->u1.f1.x[0], 1200U * sizeof(real_T));
  for (k = 0; k < 11; k++) {
    xoffset = (k + 1) * 1200;
    for (xj = 0; xj <= 1198; xj += 2) {
      r = _mm_loadu_pd(&y[xj]);
      r1 = _mm_loadu_pd(&SD->u1.f1.x[xoffset + xj]);
      _mm_storeu_pd(&y[xj], _mm_add_pd(r, r1));
    }
  }
  memcpy(&SD->u1.f1.absx2[0], &SD->u1.f1.x[0], 14400U * sizeof(real_T));
  for (k = 0; k < 12; k++) {
    for (i1 = 0; i1 <= 1198; i1 += 2) {
      i = i1 + 1200 * k;
      r = _mm_loadu_pd(&SD->u1.f1.absx2[i]);
      r1 = _mm_loadu_pd(&y[i1]);
      _mm_storeu_pd(&SD->u1.f1.x[i], _mm_div_pd(r, r1));
    }
  }
  /*  Create the auxiliary matrix: */
  aux[0] = 1;
  aux[3000] = 3000;
  for (i = 0; i < 2999; i++) {
    aux[i + 1] = aux[i] + 1;
    aux[i + 3001] = aux[i + 3000] - 1;
  }
  /*  Mirror the out-of-bounds indices using mod: */
  for (i = 0; i < 14400; i++) {
    d = (real_T)indices[i] - 1.0;
    if (d == 0.0) {
      k = 0;
    } else {
      k = (int32_T)muDoubleScalarRem(d, 6000.0);
      if ((k != 0) && (d < 0.0)) {
        k += 6000;
      }
    }
    indices[i] = aux[k];
  }
  st.site = &g_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  for (i = 0; i < 12; i++) {
    copyCols[i] = false;
  }
  xoffset = 1200;
  for (i = 0; i < 12; i++) {
    boolean_T exitg1;
    xj = xoffset;
    i1 = xoffset - 1199;
    xoffset += 1200;
    c_st.site = &i_emlrtRSI;
    if ((i1 <= xj) && (xj > 2147483646)) {
      d_st.site = &j_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    exitg1 = false;
    while ((!exitg1) && (i1 <= xj)) {
      d = SD->u1.f1.x[i1 - 1];
      if ((d == 0.0) || muDoubleScalarIsNaN(d)) {
        i1++;
      } else {
        copyCols[i] = true;
        exitg1 = true;
      }
    }
  }
  xj = 0;
  xoffset = 0;
  for (i = 0; i < 12; i++) {
    if (copyCols[i]) {
      xj++;
      tmp_data[xoffset] = (int8_T)i;
      xoffset++;
    }
  }
  i = weights->size[0] * weights->size[1];
  weights->size[0] = xj;
  weights->size[1] = 1200;
  emxEnsureCapacity_real_T(sp, weights, i, &d_emlrtRTEI);
  weights_data = weights->data;
  indices_size[0] = xj;
  indices_size[1] = 1200;
  for (i = 0; i < 1200; i++) {
    for (i1 = 0; i1 < xj; i1++) {
      xoffset = i + 1200 * tmp_data[i1];
      weights_data[i1 + weights->size[0] * i] = SD->u1.f1.x[xoffset];
      indices_data[i1 + indices_size[0] * i] = indices[xoffset];
    }
  }
}

static void resizeAlongDim(const emlrtStack *sp, const uint8_T in_[36000000],
                           const emxArray_real_T *weights,
                           const int32_T indices_data[], uint8_T out_[14400000])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const real_T *weights_data;
  int32_T i;
  int32_T inCInd;
  int32_T k;
  int32_T outRInd;
  int16_T siz_idx_0;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  weights_data = weights->data;
  st.site = &k_emlrtRSI;
  i = weights->size[0];
  siz_idx_0 = (int16_T)weights->size[0];
  for (inCInd = 0; inCInd < 12000; inCInd++) {
    for (outRInd = 0; outRInd < 1200; outRInd++) {
      real_T sumVal1;
      real_T v;
      int32_T linearInds;
      sumVal1 = 0.0;
      b_st.site = &l_emlrtRSI;
      c_st.site = &m_emlrtRSI;
      if (siz_idx_0 < 1) {
        emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                      "MATLAB:sub2ind:IndexOutOfRange",
                                      "MATLAB:sub2ind:IndexOutOfRange", 0);
      }
      linearInds = siz_idx_0 * outRInd;
      /*  Core - first dimension */
      for (k = 0; k < i; k++) {
        int32_T sumVal1_tmp;
        sumVal1_tmp = linearInds + k;
        sumVal1 += weights_data[sumVal1_tmp] *
                   (real_T)in_[(indices_data[sumVal1_tmp] + 3000 * inCInd) - 1];
      }
      v = muDoubleScalarAbs(sumVal1);
      if (v < 4.503599627370496E+15) {
        if (v >= 0.5) {
          v = muDoubleScalarFloor(sumVal1 + 0.5);
        } else {
          v = sumVal1 * 0.0;
        }
      } else {
        v = sumVal1;
      }
      if (sumVal1 > 255.0) {
        out_[outRInd + 1200 * inCInd] = MAX_uint8_T;
      } else if (sumVal1 < 0.0) {
        out_[outRInd + 1200 * inCInd] = 0U;
      } else {
        out_[outRInd + 1200 * inCInd] = (uint8_T)v;
      }
    }
  }
}

void imresize(imgprocessingStackData *SD, const emlrtStack *sp,
              const uint8_T Ain[36000000], uint8_T Bout[5760000])
{
  emlrtStack st;
  emxArray_int32_T *indices;
  emxArray_real_T *b_weights;
  emxArray_real_T *weights;
  int32_T indices_data[14400];
  int32_T indices_size[2];
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  Resize first dimension */
  emxInit_real_T(sp, &weights, &c_emlrtRTEI);
  st.site = &c_emlrtRSI;
  contributions(SD, &st, weights, indices_data, indices_size);
  st.site = &d_emlrtRSI;
  resizeAlongDim(&st, Ain, weights, indices_data, SD->f2.APartialResize);
  emxFree_real_T(sp, &weights);
  /*  Resize second dimension */
  emxInit_real_T(sp, &b_weights, &c_emlrtRTEI);
  emxInit_int32_T(sp, &indices, &c_emlrtRTEI);
  st.site = &e_emlrtRSI;
  b_contributions(SD, &st, b_weights, indices);
  st.site = &f_emlrtRSI;
  b_resizeAlongDim(&st, SD->f2.APartialResize, b_weights, indices, Bout);
  emxFree_int32_T(sp, &indices);
  emxFree_real_T(sp, &b_weights);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (imresize.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imgprocessing_types.h
 *
 * Code generation for function 'imgprocessing'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T {
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_int32_T */
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /* typedef_emxArray_int32_T */

#ifndef typedef_c_contributions
#define typedef_c_contributions
typedef struct {
  real_T absx2[19200];
  real_T x[19200];
} c_contributions;
#endif /* typedef_c_contributions */

#ifndef typedef_d_contributions
#define typedef_d_contributions
typedef struct {
  real_T absx2[14400];
  real_T x[14400];
} d_contributions;
#endif /* typedef_d_contributions */

#ifndef typedef_b_imresize
#define typedef_b_imresize
typedef struct {
  uint8_T APartialResize[14400000];
} b_imresize;
#endif /* typedef_b_imresize */

#ifndef typedef_b_imgprocessing
#define typedef_b_imgprocessing
typedef struct {
  uint8_T img[5760000];
} b_imgprocessing;
#endif /* typedef_b_imgprocessing */

#ifndef typedef_imgprocessingStackData
#define typedef_imgprocessingStackData
typedef struct {
  union {
    c_contributions f0;
    d_contributions f1;
  } u1;
  b_imresize f2;
  b_imgprocessing f3;
} imgprocessingStackData;
#endif /* typedef_imgprocessingStackData */

/* End of code generation (imgprocessing_types.h) */

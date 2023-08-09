/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imgprocessing.c
 *
 * Code generation for function 'imgprocessing'
 *
 */

/* Include files */
#include "imgprocessing.h"
#include "imgprocessing_data.h"
#include "imgprocessing_types.h"
#include "imresize.h"
#include "rt_nonfinite.h"
#include "libmwrgb2gray_tbb.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    3,                                                     /* lineNo */
    "imgprocessing",                                       /* fcnName */
    "C:\\Users\\omert\\Documents\\MATLAB\\imgprocessing.m" /* pathName */
};

/* Function Definitions */
void imgprocessing(imgprocessingStackData *SD, const emlrtStack *sp,
                   const uint8_T image[36000000], uint8_T out[1920000])
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0U);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0U);
  st.site = &emlrtRSI;
  imresize(SD, &st, image, SD->f3.img);
  rgb2gray_tbb_uint8(&SD->f3.img[0], 1.92E+6, &out[0], true);
}

/* End of code generation (imgprocessing.c) */

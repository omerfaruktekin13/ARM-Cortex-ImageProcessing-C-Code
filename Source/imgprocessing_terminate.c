/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imgprocessing_terminate.c
 *
 * Code generation for function 'imgprocessing_terminate'
 *
 */

/* Include files */
#include "imgprocessing_terminate.h"
#include "_coder_imgprocessing_mex.h"
#include "imgprocessing_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void imgprocessing_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void imgprocessing_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (imgprocessing_terminate.c) */

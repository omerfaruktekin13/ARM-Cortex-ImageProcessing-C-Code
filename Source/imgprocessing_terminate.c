
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

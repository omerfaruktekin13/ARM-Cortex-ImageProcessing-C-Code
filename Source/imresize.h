/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imresize.h
 *
 * Code generation for function 'imresize'
 *
 */

#pragma once

/* Include files */
#include "imgprocessing_types.h"
#include "rtwtypes.h"
#include "covrt.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void imresize(imgprocessingStackData *SD, const emlrtStack *sp,
              const uint8_T Ain[36000000], uint8_T Bout[5760000]);

/* End of code generation (imresize.h) */

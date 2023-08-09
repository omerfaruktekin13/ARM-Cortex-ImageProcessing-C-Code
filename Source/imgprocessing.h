/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imgprocessing.h
 *
 * Code generation for function 'imgprocessing'
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
void imgprocessing(imgprocessingStackData *SD, const emlrtStack *sp,
                   const uint8_T image[36000000], uint8_T out[1920000]);

/* End of code generation (imgprocessing.h) */

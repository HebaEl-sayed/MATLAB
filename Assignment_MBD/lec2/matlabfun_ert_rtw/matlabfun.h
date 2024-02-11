/*
 * File: matlabfun.h
 *
 * Code generated for Simulink model 'matlabfun'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Feb  6 17:43:31 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_matlabfun_h_
#define RTW_HEADER_matlabfun_h_
#include <math.h>
#ifndef matlabfun_COMMON_INCLUDES_
#define matlabfun_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* matlabfun_COMMON_INCLUDES_ */

#include "matlabfun_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_matlabfun_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T y;                            /* '<Root>/y' */
} ExtY_matlabfun_T;

/* Real-time Model Data Structure */
struct tag_RTM_matlabfun_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_matlabfun_T matlabfun_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_matlabfun_T matlabfun_Y;

/* Model entry point functions */
extern void matlabfun_initialize(void);
extern void matlabfun_step(void);
extern void matlabfun_terminate(void);

/* Real-time Model object */
extern RT_MODEL_matlabfun_T *const matlabfun_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'matlabfun'
 * '<S1>'   : 'matlabfun/MATLAB Function1'
 * '<S2>'   : 'matlabfun/MATLAB Function2'
 */
#endif                                 /* RTW_HEADER_matlabfun_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * File: forloop.h
 *
 * Code generated for Simulink model 'forloop'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Feb  6 14:00:38 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_forloop_h_
#define RTW_HEADER_forloop_h_
#ifndef forloop_COMMON_INCLUDES_
#define forloop_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* forloop_COMMON_INCLUDES_ */

#include "forloop_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S1>/Unit Delay' */
} DW_forloop_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint16_T In1;                        /* '<Root>/In1' */
} ExtU_forloop_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint16_T Out1;                       /* '<Root>/Out1' */
} ExtY_forloop_T;

/* Real-time Model Data Structure */
struct tag_RTM_forloop_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_forloop_T forloop_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_forloop_T forloop_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_forloop_T forloop_Y;

/* Model entry point functions */
extern void forloop_initialize(void);
extern void forloop_step(void);
extern void forloop_terminate(void);

/* Real-time Model object */
extern RT_MODEL_forloop_T *const forloop_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<S2>/Product' : Unused code path elimination
 * Block '<S2>/Unit Delay' : Unused code path elimination
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
 * '<Root>' : 'forloop'
 * '<S1>'   : 'forloop/For Iterator Subsystem'
 * '<S2>'   : 'forloop/For Iterator Subsystem1'
 */
#endif                                 /* RTW_HEADER_forloop_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * File: grading.h
 *
 * Code generated for Simulink model 'grading'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Feb  6 15:15:17 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_grading_h_
#define RTW_HEADER_grading_h_
#include <string.h>
#ifndef grading_COMMON_INCLUDES_
#define grading_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* grading_COMMON_INCLUDES_ */

#include "grading_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  char_T Merge[256];                   /* '<S1>/Merge' */
} B_grading_T;

/* Invariant block signals for system '<S1>/If Action Subsystem' */
typedef struct {
  const char_T StringConstant[256];    /* '<S3>/String Constant' */
} ConstB_IfActionSubsystem_grad_T;

/* Invariant block signals for system '<S1>/If Action Subsystem1' */
typedef struct {
  const char_T StringConstant1[256];   /* '<S4>/String Constant1' */
} ConstB_IfActionSubsystem1_gra_T;

/* Invariant block signals for system '<S1>/If Action Subsystem2' */
typedef struct {
  const char_T StringConstant3[256];   /* '<S5>/String Constant3' */
} ConstB_IfActionSubsystem2_gra_T;

/* Invariant block signals for system '<S1>/If Action Subsystem3' */
typedef struct {
  const char_T StringConstant3[256];   /* '<S6>/String Constant3' */
} ConstB_IfActionSubsystem3_gra_T;

/* Invariant block signals for system '<S1>/If Action Subsystem4' */
typedef struct {
  const char_T StringConstant4[256];   /* '<S7>/String Constant4' */
} ConstB_IfActionSubsystem4_gra_T;

/* Invariant block signals (default storage) */
typedef struct {
  ConstB_IfActionSubsystem4_gra_T IfActionSubsystem4_c;/* '<S2>/If Action Subsystem4' */
  ConstB_IfActionSubsystem3_gra_T IfActionSubsystem3_i;/* '<S2>/If Action Subsystem3' */
  ConstB_IfActionSubsystem2_gra_T IfActionSubsystem2_e;/* '<S2>/If Action Subsystem2' */
  ConstB_IfActionSubsystem1_gra_T IfActionSubsystem1_m;/* '<S2>/If Action Subsystem1' */
  ConstB_IfActionSubsystem_grad_T IfActionSubsystem_e;/* '<S2>/If Action Subsystem' */
  ConstB_IfActionSubsystem4_gra_T IfActionSubsystem4;/* '<S1>/If Action Subsystem4' */
  ConstB_IfActionSubsystem3_gra_T IfActionSubsystem3;/* '<S1>/If Action Subsystem3' */
  ConstB_IfActionSubsystem2_gra_T IfActionSubsystem2;/* '<S1>/If Action Subsystem2' */
  ConstB_IfActionSubsystem1_gra_T IfActionSubsystem1;/* '<S1>/If Action Subsystem1' */
  ConstB_IfActionSubsystem_grad_T IfActionSubsystem;/* '<S1>/If Action Subsystem' */
} ConstB_grading_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S1>/Merge'
   *   '<S2>/Merge'
   */
  char_T pooled6[256];
} ConstP_grading_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_grading_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
} ExtY_grading_T;

/* Real-time Model Data Structure */
struct tag_RTM_grading_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_grading_T grading_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_grading_T grading_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_grading_T grading_Y;
extern const ConstB_grading_T grading_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_grading_T grading_ConstP;

/* Model entry point functions */
extern void grading_initialize(void);
extern void grading_step(void);
extern void grading_terminate(void);

/* Real-time Model object */
extern RT_MODEL_grading_T *const grading_M;

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
 * '<Root>' : 'grading'
 * '<S1>'   : 'grading/Subsystem'
 * '<S2>'   : 'grading/Subsystem1'
 * '<S3>'   : 'grading/Subsystem/If Action Subsystem'
 * '<S4>'   : 'grading/Subsystem/If Action Subsystem1'
 * '<S5>'   : 'grading/Subsystem/If Action Subsystem2'
 * '<S6>'   : 'grading/Subsystem/If Action Subsystem3'
 * '<S7>'   : 'grading/Subsystem/If Action Subsystem4'
 * '<S8>'   : 'grading/Subsystem1/If Action Subsystem'
 * '<S9>'   : 'grading/Subsystem1/If Action Subsystem1'
 * '<S10>'  : 'grading/Subsystem1/If Action Subsystem2'
 * '<S11>'  : 'grading/Subsystem1/If Action Subsystem3'
 * '<S12>'  : 'grading/Subsystem1/If Action Subsystem4'
 */
#endif                                 /* RTW_HEADER_grading_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

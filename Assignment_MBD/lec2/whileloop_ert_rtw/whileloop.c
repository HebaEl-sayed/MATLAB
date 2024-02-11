/*
 * File: whileloop.c
 *
 * Code generated for Simulink model 'whileloop'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Tue Feb  6 14:53:17 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. RAM efficiency
 *    2. Execution efficiency
 * Validation result: Not run
 */

#include "whileloop.h"
#include "whileloop_private.h"

/* Block states (default storage) */
DW_whileloop_T whileloop_DW;

/* External inputs (root inport signals with default storage) */
ExtU_whileloop_T whileloop_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_whileloop_T whileloop_Y;

/* Real-time model */
static RT_MODEL_whileloop_T whileloop_M_;
RT_MODEL_whileloop_T *const whileloop_M = &whileloop_M_;

/* Model step function */
void whileloop_step(void)
{
  int32_T s2_iter;
  boolean_T loopCond;

  /* Outputs for Iterator SubSystem: '<Root>/While Iterator Subsystem2' incorporates:
   *  WhileIterator: '<S2>/While Iterator'
   */
  s2_iter = 1;

  /* Inport: '<Root>/IC' */
  loopCond = whileloop_U.IC;
  while (loopCond) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Delay: '<S2>/Delay1'
     *  Product: '<S2>/Product'
     */
    whileloop_Y.Out1 = s2_iter * whileloop_DW.Delay1_DSTATE;

    /* Update for Delay: '<S2>/Delay1' incorporates:
     *  Outport: '<Root>/Out1'
     */
    whileloop_DW.Delay1_DSTATE = whileloop_Y.Out1;

    /* RelationalOperator: '<S2>/LessThanOrEqual' incorporates:
     *  Inport: '<Root>/In1'
     */
    loopCond = (s2_iter < whileloop_U.In1);
    s2_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem2' */
}

/* Model initialize function */
void whileloop_initialize(void)
{
  /* SystemInitialize for Iterator SubSystem: '<Root>/While Iterator Subsystem2' */
  /* InitializeConditions for Delay: '<S2>/Delay1' */
  whileloop_DW.Delay1_DSTATE = 1;

  /* End of SystemInitialize for SubSystem: '<Root>/While Iterator Subsystem2' */
}

/* Model terminate function */
void whileloop_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

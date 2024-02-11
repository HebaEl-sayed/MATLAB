/*
 * File: forloop.c
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

#include "forloop.h"
#include "forloop_private.h"

/* Block states (default storage) */
DW_forloop_T forloop_DW;

/* External inputs (root inport signals with default storage) */
ExtU_forloop_T forloop_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_forloop_T forloop_Y;

/* Real-time model */
static RT_MODEL_forloop_T forloop_M_;
RT_MODEL_forloop_T *const forloop_M = &forloop_M_;

/* Model step function */
void forloop_step(void)
{
  uint16_T s1_iter;
  uint16_T tmp;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* Inport: '<Root>/In1' */
  tmp = forloop_U.In1;
  if (forloop_U.In1 > 65534) {
    tmp = 65534U;
  }

  /* End of Inport: '<Root>/In1' */
  for (s1_iter = 1U; s1_iter <= tmp; s1_iter++) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    forloop_Y.Out1 = (uint16_T)((uint32_T)s1_iter * forloop_DW.UnitDelay_DSTATE);

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/Out1'
     */
    forloop_DW.UnitDelay_DSTATE = forloop_Y.Out1;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model initialize function */
void forloop_initialize(void)
{
  /* SystemInitialize for Iterator SubSystem: '<Root>/For Iterator Subsystem' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  forloop_DW.UnitDelay_DSTATE = 1U;

  /* End of SystemInitialize for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model terminate function */
void forloop_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

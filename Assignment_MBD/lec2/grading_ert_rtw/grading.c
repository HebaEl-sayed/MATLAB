/*
 * File: grading.c
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

#include "grading.h"
#include "grading_private.h"

/* Block signals (default storage) */
B_grading_T grading_B;

/* External inputs (root inport signals with default storage) */
ExtU_grading_T grading_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_grading_T grading_Y;

/* Real-time model */
static RT_MODEL_grading_T grading_M_;
RT_MODEL_grading_T *const grading_M = &grading_M_;

/*
 * Output and update for action system:
 *    '<S1>/If Action Subsystem'
 *    '<S2>/If Action Subsystem'
 */
void grading_IfActionSubsystem(char_T rty_Out2[256], const
  ConstB_IfActionSubsystem_grad_T *localC)
{
  /* SignalConversion generated from: '<S3>/Out2' */
  strncpy(&rty_Out2[0], &localC->StringConstant[0], 255U);
  rty_Out2[255] = '\x00';
}

/*
 * Output and update for action system:
 *    '<S1>/If Action Subsystem1'
 *    '<S2>/If Action Subsystem1'
 */
void grading_IfActionSubsystem1(char_T rty_Out2[256], const
  ConstB_IfActionSubsystem1_gra_T *localC)
{
  /* SignalConversion generated from: '<S4>/Out2' */
  strncpy(&rty_Out2[0], &localC->StringConstant1[0], 255U);
  rty_Out2[255] = '\x00';
}

/*
 * Output and update for action system:
 *    '<S1>/If Action Subsystem2'
 *    '<S2>/If Action Subsystem2'
 */
void grading_IfActionSubsystem2(char_T rty_Out1[256], const
  ConstB_IfActionSubsystem2_gra_T *localC)
{
  /* SignalConversion generated from: '<S5>/Out1' */
  strncpy(&rty_Out1[0], &localC->StringConstant3[0], 255U);
  rty_Out1[255] = '\x00';
}

/*
 * Output and update for action system:
 *    '<S1>/If Action Subsystem3'
 *    '<S2>/If Action Subsystem3'
 */
void grading_IfActionSubsystem3(char_T rty_Out2[256], const
  ConstB_IfActionSubsystem3_gra_T *localC)
{
  /* SignalConversion generated from: '<S6>/Out2' */
  strncpy(&rty_Out2[0], &localC->StringConstant3[0], 255U);
  rty_Out2[255] = '\x00';
}

/*
 * Output and update for action system:
 *    '<S1>/If Action Subsystem4'
 *    '<S2>/If Action Subsystem4'
 */
void grading_IfActionSubsystem4(char_T rty_Out1[256], const
  ConstB_IfActionSubsystem4_gra_T *localC)
{
  /* SignalConversion generated from: '<S7>/Out1' */
  strncpy(&rty_Out1[0], &localC->StringConstant4[0], 255U);
  rty_Out1[255] = '\x00';
}

/* Model step function */
void grading_step(void)
{
  char_T Merge_i[256];

  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/In1'
   */
  if ((grading_U.In1 >= 0.0) && (grading_U.In1 < 50.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    grading_IfActionSubsystem(&grading_B.Merge[0],
      &grading_ConstB.IfActionSubsystem);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
  } else if ((grading_U.In1 >= 50.0) && (grading_U.In1 < 65.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    grading_IfActionSubsystem1(&grading_B.Merge[0],
      &grading_ConstB.IfActionSubsystem1);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
  } else if ((grading_U.In1 >= 65.0) && (grading_U.In1 < 75.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    grading_IfActionSubsystem2(&grading_B.Merge[0],
      &grading_ConstB.IfActionSubsystem2);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
  } else if ((grading_U.In1 >= 75.0) && (grading_U.In1 < 85.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    grading_IfActionSubsystem3(&grading_B.Merge[0],
      &grading_ConstB.IfActionSubsystem3);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem3' */
  } else if ((grading_U.In1 >= 8.0) && (grading_U.In1 < 100.0)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    grading_IfActionSubsystem4(&grading_B.Merge[0],
      &grading_ConstB.IfActionSubsystem4);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem4' */
  }

  /* End of If: '<S1>/If' */

  /* Outport: '<Root>/Out1' */
  strncpy(&grading_Y.Out1[0], &grading_B.Merge[0], 255U);
  grading_Y.Out1[255] = '\x00';

  /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S9>/Action Port'
   */
  /* If: '<S2>/If' */
  grading_IfActionSubsystem1(&Merge_i[0], &grading_ConstB.IfActionSubsystem1_m);

  /* End of Outputs for SubSystem: '<S2>/If Action Subsystem1' */
}

/* Model initialize function */
void grading_initialize(void)
{
  /* SystemInitialize for Merge: '<S1>/Merge' */
  strncpy(&grading_B.Merge[0], &grading_ConstP.pooled6[0], 255U);
  grading_B.Merge[255] = '\x00';
}

/* Model terminate function */
void grading_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

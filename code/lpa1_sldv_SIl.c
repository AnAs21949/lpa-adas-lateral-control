
/*
 * File: lpa1_sldv_SIl.c
 *
 * Code generated for Simulink model 'lpa1_sldv_SIl'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sun Jun 21 18:48:23 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "lpa1_sldv_SIl.h"
#include <math.h>

/* Block states (default storage) */
DW_lpa1_sldv_SIl_T lpa1_sldv_SIl_DW;

/* External inputs (root inport signals with default storage) */
ExtU_lpa1_sldv_SIl_T lpa1_sldv_SIl_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_lpa1_sldv_SIl_T lpa1_sldv_SIl_Y;

/* Real-time model */
static RT_MODEL_lpa1_sldv_SIl_T lpa1_sldv_SIl_M_;
RT_MODEL_lpa1_sldv_SIl_T *const lpa1_sldv_SIl_M = &lpa1_sldv_SIl_M_;

/* Model step function */
void lpa1_sldv_SIl_step(void)
{
  /* Switch: '<Root>/Switch' incorporates:
   *  Abs: '<Root>/Abs'
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Vmax'
   *  Constant: '<Root>/Vmin'
   *  Inport: '<Root>/Inport'
   *  Inport: '<Root>/Inport1'
   *  Inport: '<Root>/Inport2'
   *  Logic: '<Root>/AND'
   *  Logic: '<Root>/C1'
   *  RelationalOperator: '<Root>/Relational Operator'
   *  RelationalOperator: '<Root>/Relational Operator1'
   *  RelationalOperator: '<Root>/Relational Operator2'
   */
  if ((lpa1_sldv_SIl_U.Inport >= 16.7) && (lpa1_sldv_SIl_U.Inport <= 36.1) &&
      (fabs(lpa1_sldv_SIl_U.Inport1) <= 0.05) && lpa1_sldv_SIl_U.Inport2) {
    /* Outputs for Atomic SubSystem: '<Root>/LPA controller' */
    /* Switch: '<Root>/Switch' incorporates:
     *  DiscreteIntegrator: '<Root>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<Root>/Discrete-Time Integrator1'
     *  Gain: '<S1>/Gain'
     *  Gain: '<S1>/K1'
     *  Gain: '<S1>/K2'
     *  Sum: '<S1>/Sum'
     */
    lpa1_sldv_SIl_Y.Outport = -(0.25 *
      lpa1_sldv_SIl_DW.DiscreteTimeIntegrator1_DSTATE + 1.2 *
      lpa1_sldv_SIl_DW.DiscreteTimeIntegrator_DSTATE);

    /* Saturate: '<S1>/Saturation' */
    if (lpa1_sldv_SIl_Y.Outport > 0.5) {
      /* Switch: '<Root>/Switch' */
      lpa1_sldv_SIl_Y.Outport = 0.5;
    } else if (lpa1_sldv_SIl_Y.Outport < -0.5) {
      /* Switch: '<Root>/Switch' */
      lpa1_sldv_SIl_Y.Outport = -0.5;
    }

    /* End of Saturate: '<S1>/Saturation' */
    /* End of Outputs for SubSystem: '<Root>/LPA controller' */
  } else {
    /* Switch: '<Root>/Switch' incorporates:
     *  Constant: '<Root>/Constant'
     */
    lpa1_sldv_SIl_Y.Outport = 0.0;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Update for DiscreteIntegrator: '<Root>/Discrete-Time Integrator1' incorporates:
   *  DiscreteIntegrator: '<Root>/Discrete-Time Integrator'
   *  Gain: '<Root>/Gain1'
   */
  lpa1_sldv_SIl_DW.DiscreteTimeIntegrator1_DSTATE += 20.0 *
    lpa1_sldv_SIl_DW.DiscreteTimeIntegrator_DSTATE * 0.01;

  /* Update for DiscreteIntegrator: '<Root>/Discrete-Time Integrator' incorporates:
   *  Gain: '<Root>/Vx//L'
   */
  lpa1_sldv_SIl_DW.DiscreteTimeIntegrator_DSTATE += 7.143 *
    lpa1_sldv_SIl_Y.Outport * 0.01;
}

/* Model initialize function */
void lpa1_sldv_SIl_initialize(void)
{
  /* InitializeConditions for DiscreteIntegrator: '<Root>/Discrete-Time Integrator1' */
  lpa1_sldv_SIl_DW.DiscreteTimeIntegrator1_DSTATE = 0.5;
}

/* Model terminate function */
void lpa1_sldv_SIl_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
has popup

/*
 * File: lpa1_sldv_SIl.h
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

#ifndef lpa1_sldv_SIl_h_
#define lpa1_sldv_SIl_h_
#ifndef lpa1_sldv_SIl_COMMON_INCLUDES_
#define lpa1_sldv_SIl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* lpa1_sldv_SIl_COMMON_INCLUDES_ */

#include "lpa1_sldv_SIl_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<Root>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<Root>/Discrete-Time Integrator' */
} DW_lpa1_sldv_SIl_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Inport;                       /* '<Root>/Inport' */
  real_T Inport1;                      /* '<Root>/Inport1' */
  boolean_T Inport2;                   /* '<Root>/Inport2' */
} ExtU_lpa1_sldv_SIl_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Outport;                      /* '<Root>/Outport' */
} ExtY_lpa1_sldv_SIl_T;

/* Real-time Model Data Structure */
struct tag_RTM_lpa1_sldv_SIl_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_lpa1_sldv_SIl_T lpa1_sldv_SIl_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_lpa1_sldv_SIl_T lpa1_sldv_SIl_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_lpa1_sldv_SIl_T lpa1_sldv_SIl_Y;

/* Model entry point functions */
extern void lpa1_sldv_SIl_initialize(void);
extern void lpa1_sldv_SIl_step(void);
extern void lpa1_sldv_SIl_terminate(void);
has popup
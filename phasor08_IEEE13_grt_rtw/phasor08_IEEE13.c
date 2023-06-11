/*
 * phasor08_IEEE13.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "phasor08_IEEE13".
 *
 * Model version              : 11.0
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Sat Nov 26 01:36:48 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "phasor08_IEEE13.h"
#include "phasor08_IEEE13_private.h"

/* Block signals (default storage) */
B_phasor08_IEEE13_T phasor08_IEEE13_B;

/* Block states (default storage) */
DW_phasor08_IEEE13_T phasor08_IEEE13_DW;

/* Real-time model */
static RT_MODEL_phasor08_IEEE13_T phasor08_IEEE13_M_;
RT_MODEL_phasor08_IEEE13_T *const phasor08_IEEE13_M = &phasor08_IEEE13_M_;

/* Model output function */
static void phasor08_IEEE13_output(void)
{
  /* local block i/o variables */
  real_T rtb_In1[13];
  real_T rtb_In2[13];
  real_T rtb_In3[6];
  real_T rtb_In4[6];
  real_T rtb_RelationalOperator_tmp;
  int32_T i;

  /* Constant: '<S2>/Event Time (seconds)' */
  phasor08_IEEE13_B.Eventtimeseconds = phasor08_IEEE13_P.EventTimeseconds_Value;

  /* Constant: '<S2>/LineFault0' */
  phasor08_IEEE13_B.Aftereventvalues[0] = phasor08_IEEE13_P.LineFault0_Value[0];

  /* Constant: '<S2>/LineFault1' */
  phasor08_IEEE13_B.Beforeeventvalues[0] = phasor08_IEEE13_P.LineFault1_Value[0];

  /* Constant: '<S2>/LineFault0' */
  phasor08_IEEE13_B.Aftereventvalues[1] = phasor08_IEEE13_P.LineFault0_Value[1];

  /* Constant: '<S2>/LineFault1' */
  phasor08_IEEE13_B.Beforeeventvalues[1] = phasor08_IEEE13_P.LineFault1_Value[1];

  /* Constant: '<S2>/LineFault0' */
  phasor08_IEEE13_B.Aftereventvalues[2] = phasor08_IEEE13_P.LineFault0_Value[2];

  /* Constant: '<S2>/LineFault1' */
  phasor08_IEEE13_B.Beforeeventvalues[2] = phasor08_IEEE13_P.LineFault1_Value[2];

  /* Constant: '<S2>/time' */
  phasor08_IEEE13_B.Eventtimeseconds_i = phasor08_IEEE13_P.time_Value;

  /* Constant: '<S2>/before' */
  phasor08_IEEE13_B.Aftereventvalues_a[0] = phasor08_IEEE13_P.before_Value[0];

  /* Constant: '<S2>/after event values' */
  phasor08_IEEE13_B.Beforeeventvalues_h[0] =
    phasor08_IEEE13_P.aftereventvalues_Value[0];

  /* Constant: '<S2>/before' */
  phasor08_IEEE13_B.Aftereventvalues_a[1] = phasor08_IEEE13_P.before_Value[1];

  /* Constant: '<S2>/after event values' */
  phasor08_IEEE13_B.Beforeeventvalues_h[1] =
    phasor08_IEEE13_P.aftereventvalues_Value[1];

  /* Outputs for Atomic SubSystem: '<S1>/OpComm' */
  /* SignalConversion generated from: '<S3>/Out1' */
  phasor08_IEEE13_B.Aftereventvalues_k[0] = phasor08_IEEE13_B.Aftereventvalues[0];

  /* SignalConversion generated from: '<S3>/Out1' */
  phasor08_IEEE13_B.Beforeeventvalues_n[0] =
    phasor08_IEEE13_B.Beforeeventvalues[0];

  /* SignalConversion generated from: '<S3>/Out1' */
  phasor08_IEEE13_B.Aftereventvalues_k[1] = phasor08_IEEE13_B.Aftereventvalues[1];

  /* SignalConversion generated from: '<S3>/Out1' */
  phasor08_IEEE13_B.Beforeeventvalues_n[1] =
    phasor08_IEEE13_B.Beforeeventvalues[1];

  /* SignalConversion generated from: '<S3>/Out1' */
  phasor08_IEEE13_B.Aftereventvalues_k[2] = phasor08_IEEE13_B.Aftereventvalues[2];

  /* SignalConversion generated from: '<S3>/Out1' */
  phasor08_IEEE13_B.Beforeeventvalues_n[2] =
    phasor08_IEEE13_B.Beforeeventvalues[2];

  /* SignalConversion generated from: '<S3>/Out2' */
  phasor08_IEEE13_B.Aftereventvalues_n[0] =
    phasor08_IEEE13_B.Aftereventvalues_a[0];

  /* SignalConversion generated from: '<S3>/Out2' */
  phasor08_IEEE13_B.Beforeeventvalues_b[0] =
    phasor08_IEEE13_B.Beforeeventvalues_h[0];

  /* SignalConversion generated from: '<S3>/Out2' */
  phasor08_IEEE13_B.Aftereventvalues_n[1] =
    phasor08_IEEE13_B.Aftereventvalues_a[1];

  /* SignalConversion generated from: '<S3>/Out2' */
  phasor08_IEEE13_B.Beforeeventvalues_b[1] =
    phasor08_IEEE13_B.Beforeeventvalues_h[1];

  /* S-Function (sfun_rtlab_comm): '<S3>/OpComm' */

  /* Level2 S-Function Block: '<S3>/OpComm' (sfun_rtlab_comm) */
  {
    SimStruct *rts = phasor08_IEEE13_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* Sum: '<S4>/Sum' incorporates:
   *  Constant: '<S4>/Constant'
   *  SignalConversion generated from: '<S3>/Out1'
   */
  phasor08_IEEE13_B.Sum = phasor08_IEEE13_B.Eventtimeseconds -
    phasor08_IEEE13_P.Ts / 2.0;

  /* End of Outputs for SubSystem: '<S1>/OpComm' */

  /* Clock: '<S4>/Clock' incorporates:
   *  Clock: '<S5>/Clock'
   */
  rtb_RelationalOperator_tmp = phasor08_IEEE13_M->Timing.t[0];

  /* Switch: '<S4>/Switch' incorporates:
   *  Clock: '<S4>/Clock'
   *  RelationalOperator: '<S4>/Relational Operator'
   */
  if (rtb_RelationalOperator_tmp >= phasor08_IEEE13_B.Sum) {
    /* Switch: '<S4>/Switch' */
    phasor08_IEEE13_B.Switch[0] = phasor08_IEEE13_B.Aftereventvalues_k[0];
    phasor08_IEEE13_B.Switch[1] = phasor08_IEEE13_B.Aftereventvalues_k[1];
    phasor08_IEEE13_B.Switch[2] = phasor08_IEEE13_B.Aftereventvalues_k[2];
  } else {
    /* Switch: '<S4>/Switch' */
    phasor08_IEEE13_B.Switch[0] = phasor08_IEEE13_B.Beforeeventvalues_n[0];
    phasor08_IEEE13_B.Switch[1] = phasor08_IEEE13_B.Beforeeventvalues_n[1];
    phasor08_IEEE13_B.Switch[2] = phasor08_IEEE13_B.Beforeeventvalues_n[2];
  }

  /* End of Switch: '<S4>/Switch' */

  /* Outputs for Atomic SubSystem: '<S1>/OpComm' */
  /* Sum: '<S5>/Sum' incorporates:
   *  Constant: '<S5>/Constant'
   *  SignalConversion generated from: '<S3>/Out2'
   */
  phasor08_IEEE13_B.Sum_f = phasor08_IEEE13_B.Eventtimeseconds_i -
    phasor08_IEEE13_P.Ts / 2.0;

  /* End of Outputs for SubSystem: '<S1>/OpComm' */

  /* Switch: '<S5>/Switch' incorporates:
   *  RelationalOperator: '<S5>/Relational Operator'
   */
  if (rtb_RelationalOperator_tmp >= phasor08_IEEE13_B.Sum_f) {
    /* Switch: '<S5>/Switch' */
    phasor08_IEEE13_B.Switch_n[0] = phasor08_IEEE13_B.Aftereventvalues_n[0];
    phasor08_IEEE13_B.Switch_n[1] = phasor08_IEEE13_B.Aftereventvalues_n[1];
  } else {
    /* Switch: '<S5>/Switch' */
    phasor08_IEEE13_B.Switch_n[0] = phasor08_IEEE13_B.Beforeeventvalues_b[0];
    phasor08_IEEE13_B.Switch_n[1] = phasor08_IEEE13_B.Beforeeventvalues_b[1];
  }

  /* End of Switch: '<S5>/Switch' */

  /* S-Function (OpIRTS): '<S1>/Solver' */

  /* Level2 S-Function Block: '<S1>/Solver' (OpIRTS) */
  {
    SimStruct *rts = phasor08_IEEE13_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* Outputs for Atomic SubSystem: '<S2>/OpComm1' */
  /* Inport: '<S6>/In1' */
  memcpy(&rtb_In1[0], &phasor08_IEEE13_B.Solver_o1[0], 13U * sizeof(real_T));

  /* Inport: '<S6>/In2' */
  memcpy(&rtb_In2[0], &phasor08_IEEE13_B.Solver_o2[0], 13U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    /* Inport: '<S6>/In3' */
    rtb_In3[i] = phasor08_IEEE13_B.Solver_o3[i];

    /* Inport: '<S6>/In4' */
    rtb_In4[i] = phasor08_IEEE13_B.Solver_o4[i];
  }

  /* DigitalClock: '<S6>/Cte' */
  phasor08_IEEE13_B.Cte = phasor08_IEEE13_M->Timing.t[1];

  /* S-Function (sfun_rtlab_comm): '<S6>/OpComm' */

  /* Level2 S-Function Block: '<S6>/OpComm' (sfun_rtlab_comm) */
  {
    SimStruct *rts = phasor08_IEEE13_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* End of Outputs for SubSystem: '<S2>/OpComm1' */
}

/* Model update function */
static void phasor08_IEEE13_update(void)
{
  /* Update for S-Function (OpIRTS): '<S1>/Solver' */
  /* Level2 S-Function Block: '<S1>/Solver' (OpIRTS) */
  {
    SimStruct *rts = phasor08_IEEE13_M->childSfunctions[2];
    sfcnUpdate(rts,0);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++phasor08_IEEE13_M->Timing.clockTick0)) {
    ++phasor08_IEEE13_M->Timing.clockTickH0;
  }

  phasor08_IEEE13_M->Timing.t[0] = phasor08_IEEE13_M->Timing.clockTick0 *
    phasor08_IEEE13_M->Timing.stepSize0 + phasor08_IEEE13_M->Timing.clockTickH0 *
    phasor08_IEEE13_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++phasor08_IEEE13_M->Timing.clockTick1)) {
      ++phasor08_IEEE13_M->Timing.clockTickH1;
    }

    phasor08_IEEE13_M->Timing.t[1] = phasor08_IEEE13_M->Timing.clockTick1 *
      phasor08_IEEE13_M->Timing.stepSize1 +
      phasor08_IEEE13_M->Timing.clockTickH1 *
      phasor08_IEEE13_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
static void phasor08_IEEE13_initialize(void)
{
  /* Start for Constant: '<S2>/Event Time (seconds)' */
  phasor08_IEEE13_B.Eventtimeseconds = phasor08_IEEE13_P.EventTimeseconds_Value;

  /* Start for Constant: '<S2>/LineFault0' */
  phasor08_IEEE13_B.Aftereventvalues[0] = phasor08_IEEE13_P.LineFault0_Value[0];

  /* Start for Constant: '<S2>/LineFault1' */
  phasor08_IEEE13_B.Beforeeventvalues[0] = phasor08_IEEE13_P.LineFault1_Value[0];

  /* Start for Constant: '<S2>/LineFault0' */
  phasor08_IEEE13_B.Aftereventvalues[1] = phasor08_IEEE13_P.LineFault0_Value[1];

  /* Start for Constant: '<S2>/LineFault1' */
  phasor08_IEEE13_B.Beforeeventvalues[1] = phasor08_IEEE13_P.LineFault1_Value[1];

  /* Start for Constant: '<S2>/LineFault0' */
  phasor08_IEEE13_B.Aftereventvalues[2] = phasor08_IEEE13_P.LineFault0_Value[2];

  /* Start for Constant: '<S2>/LineFault1' */
  phasor08_IEEE13_B.Beforeeventvalues[2] = phasor08_IEEE13_P.LineFault1_Value[2];

  /* Start for Constant: '<S2>/time' */
  phasor08_IEEE13_B.Eventtimeseconds_i = phasor08_IEEE13_P.time_Value;

  /* Start for Constant: '<S2>/before' */
  phasor08_IEEE13_B.Aftereventvalues_a[0] = phasor08_IEEE13_P.before_Value[0];

  /* Start for Constant: '<S2>/after event values' */
  phasor08_IEEE13_B.Beforeeventvalues_h[0] =
    phasor08_IEEE13_P.aftereventvalues_Value[0];

  /* Start for Constant: '<S2>/before' */
  phasor08_IEEE13_B.Aftereventvalues_a[1] = phasor08_IEEE13_P.before_Value[1];

  /* Start for Constant: '<S2>/after event values' */
  phasor08_IEEE13_B.Beforeeventvalues_h[1] =
    phasor08_IEEE13_P.aftereventvalues_Value[1];

  /* Start for Atomic SubSystem: '<S1>/OpComm' */

  /* Start for S-Function (sfun_rtlab_comm): '<S3>/OpComm' */
  /* Level2 S-Function Block: '<S3>/OpComm' (sfun_rtlab_comm) */
  {
    SimStruct *rts = phasor08_IEEE13_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S1>/OpComm' */

  /* Start for S-Function (OpIRTS): '<S1>/Solver' */
  /* Level2 S-Function Block: '<S1>/Solver' (OpIRTS) */
  {
    SimStruct *rts = phasor08_IEEE13_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Atomic SubSystem: '<S2>/OpComm1' */

  /* Start for S-Function (sfun_rtlab_comm): '<S6>/OpComm' */
  /* Level2 S-Function Block: '<S6>/OpComm' (sfun_rtlab_comm) */
  {
    SimStruct *rts = phasor08_IEEE13_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<S2>/OpComm1' */

  /* InitializeConditions for S-Function (OpIRTS): '<S1>/Solver' */
  /* Level2 S-Function Block: '<S1>/Solver' (OpIRTS) */
  {
    SimStruct *rts = phasor08_IEEE13_M->childSfunctions[2];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* SystemInitialize for Atomic SubSystem: '<S1>/OpComm' */

  /* InitializeConditions for S-Function (sfun_rtlab_comm): '<S3>/OpComm' */
  /* Level2 S-Function Block: '<S3>/OpComm' (sfun_rtlab_comm) */
  {
    SimStruct *rts = phasor08_IEEE13_M->childSfunctions[0];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of SystemInitialize for SubSystem: '<S1>/OpComm' */

  /* SystemInitialize for Atomic SubSystem: '<S2>/OpComm1' */

  /* InitializeConditions for S-Function (sfun_rtlab_comm): '<S6>/OpComm' */
  /* Level2 S-Function Block: '<S6>/OpComm' (sfun_rtlab_comm) */
  {
    SimStruct *rts = phasor08_IEEE13_M->childSfunctions[1];
    sfcnInitializeConditions(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of SystemInitialize for SubSystem: '<S2>/OpComm1' */
}

/* Model terminate function */
static void phasor08_IEEE13_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<S1>/OpComm' */

  /* Terminate for S-Function (sfun_rtlab_comm): '<S3>/OpComm' */
  /* Level2 S-Function Block: '<S3>/OpComm' (sfun_rtlab_comm) */
  {
    SimStruct *rts = phasor08_IEEE13_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S1>/OpComm' */

  /* Terminate for S-Function (OpIRTS): '<S1>/Solver' */
  /* Level2 S-Function Block: '<S1>/Solver' (OpIRTS) */
  {
    SimStruct *rts = phasor08_IEEE13_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for Atomic SubSystem: '<S2>/OpComm1' */

  /* Terminate for S-Function (sfun_rtlab_comm): '<S6>/OpComm' */
  /* Level2 S-Function Block: '<S6>/OpComm' (sfun_rtlab_comm) */
  {
    SimStruct *rts = phasor08_IEEE13_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S2>/OpComm1' */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  phasor08_IEEE13_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  phasor08_IEEE13_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  phasor08_IEEE13_initialize();
}

void MdlTerminate(void)
{
  phasor08_IEEE13_terminate();
}

/* Registration function */
RT_MODEL_phasor08_IEEE13_T *phasor08_IEEE13(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)phasor08_IEEE13_M, 0,
                sizeof(RT_MODEL_phasor08_IEEE13_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&phasor08_IEEE13_M->solverInfo,
                          &phasor08_IEEE13_M->Timing.simTimeStep);
    rtsiSetTPtr(&phasor08_IEEE13_M->solverInfo, &rtmGetTPtr(phasor08_IEEE13_M));
    rtsiSetStepSizePtr(&phasor08_IEEE13_M->solverInfo,
                       &phasor08_IEEE13_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&phasor08_IEEE13_M->solverInfo, (&rtmGetErrorStatus
      (phasor08_IEEE13_M)));
    rtsiSetRTModelPtr(&phasor08_IEEE13_M->solverInfo, phasor08_IEEE13_M);
  }

  rtsiSetSimTimeStep(&phasor08_IEEE13_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&phasor08_IEEE13_M->solverInfo,"FixedStepDiscrete");
  phasor08_IEEE13_M->solverInfoPtr = (&phasor08_IEEE13_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = phasor08_IEEE13_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    phasor08_IEEE13_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    phasor08_IEEE13_M->Timing.sampleTimes =
      (&phasor08_IEEE13_M->Timing.sampleTimesArray[0]);
    phasor08_IEEE13_M->Timing.offsetTimes =
      (&phasor08_IEEE13_M->Timing.offsetTimesArray[0]);

    /* task periods */
    phasor08_IEEE13_M->Timing.sampleTimes[0] = (0.0);
    phasor08_IEEE13_M->Timing.sampleTimes[1] = (0.01);

    /* task offsets */
    phasor08_IEEE13_M->Timing.offsetTimes[0] = (0.0);
    phasor08_IEEE13_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(phasor08_IEEE13_M, &phasor08_IEEE13_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = phasor08_IEEE13_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    phasor08_IEEE13_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(phasor08_IEEE13_M, 10.0);
  phasor08_IEEE13_M->Timing.stepSize0 = 0.01;
  phasor08_IEEE13_M->Timing.stepSize1 = 0.01;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    phasor08_IEEE13_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(phasor08_IEEE13_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(phasor08_IEEE13_M->rtwLogInfo, (NULL));
    rtliSetLogT(phasor08_IEEE13_M->rtwLogInfo, "tout");
    rtliSetLogX(phasor08_IEEE13_M->rtwLogInfo, "");
    rtliSetLogXFinal(phasor08_IEEE13_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(phasor08_IEEE13_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(phasor08_IEEE13_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(phasor08_IEEE13_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(phasor08_IEEE13_M->rtwLogInfo, 1);
    rtliSetLogY(phasor08_IEEE13_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(phasor08_IEEE13_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(phasor08_IEEE13_M->rtwLogInfo, (NULL));
  }

  phasor08_IEEE13_M->solverInfoPtr = (&phasor08_IEEE13_M->solverInfo);
  phasor08_IEEE13_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&phasor08_IEEE13_M->solverInfo, 0.01);
  rtsiSetSolverMode(&phasor08_IEEE13_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  phasor08_IEEE13_M->blockIO = ((void *) &phasor08_IEEE13_B);
  (void) memset(((void *) &phasor08_IEEE13_B), 0,
                sizeof(B_phasor08_IEEE13_T));

  /* parameters */
  phasor08_IEEE13_M->defaultParam = ((real_T *)&phasor08_IEEE13_P);

  /* states (dwork) */
  phasor08_IEEE13_M->dwork = ((void *) &phasor08_IEEE13_DW);
  (void) memset((void *)&phasor08_IEEE13_DW, 0,
                sizeof(DW_phasor08_IEEE13_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &phasor08_IEEE13_M->NonInlinedSFcns.sfcnInfo;
    phasor08_IEEE13_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(phasor08_IEEE13_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &phasor08_IEEE13_M->Sizes.numSampTimes);
    phasor08_IEEE13_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (phasor08_IEEE13_M)[0]);
    phasor08_IEEE13_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (phasor08_IEEE13_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,phasor08_IEEE13_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(phasor08_IEEE13_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(phasor08_IEEE13_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (phasor08_IEEE13_M));
    rtssSetStepSizePtr(sfcnInfo, &phasor08_IEEE13_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(phasor08_IEEE13_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &phasor08_IEEE13_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &phasor08_IEEE13_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &phasor08_IEEE13_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &phasor08_IEEE13_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &phasor08_IEEE13_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &phasor08_IEEE13_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &phasor08_IEEE13_M->solverInfoPtr);
  }

  phasor08_IEEE13_M->Sizes.numSFcns = (3);

  /* register each child */
  {
    (void) memset((void *)&phasor08_IEEE13_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  3*sizeof(SimStruct));
    phasor08_IEEE13_M->childSfunctions =
      (&phasor08_IEEE13_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    phasor08_IEEE13_M->childSfunctions[0] =
      (&phasor08_IEEE13_M->NonInlinedSFcns.childSFunctions[0]);
    phasor08_IEEE13_M->childSfunctions[1] =
      (&phasor08_IEEE13_M->NonInlinedSFcns.childSFunctions[1]);
    phasor08_IEEE13_M->childSfunctions[2] =
      (&phasor08_IEEE13_M->NonInlinedSFcns.childSFunctions[2]);

    /* Level2 S-Function Block: phasor08_IEEE13/<S3>/OpComm (sfun_rtlab_comm) */
    {
      SimStruct *rts = phasor08_IEEE13_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = phasor08_IEEE13_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = phasor08_IEEE13_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = phasor08_IEEE13_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &phasor08_IEEE13_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &phasor08_IEEE13_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, phasor08_IEEE13_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &phasor08_IEEE13_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &phasor08_IEEE13_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &phasor08_IEEE13_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &phasor08_IEEE13_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &phasor08_IEEE13_B.Aftereventvalues[0];
          sfcnUPtrs[1] = &phasor08_IEEE13_B.Aftereventvalues[1];
          sfcnUPtrs[2] = &phasor08_IEEE13_B.Aftereventvalues[2];
          sfcnUPtrs[3] = &phasor08_IEEE13_B.Eventtimeseconds;
          sfcnUPtrs[4] = &phasor08_IEEE13_B.Beforeeventvalues[0];
          sfcnUPtrs[5] = &phasor08_IEEE13_B.Beforeeventvalues[1];
          sfcnUPtrs[6] = &phasor08_IEEE13_B.Beforeeventvalues[2];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 7);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn0.UPtrs1;
          sfcnUPtrs[0] = &phasor08_IEEE13_B.Aftereventvalues_a[0];
          sfcnUPtrs[1] = &phasor08_IEEE13_B.Aftereventvalues_a[1];
          sfcnUPtrs[2] = &phasor08_IEEE13_B.Eventtimeseconds_i;
          sfcnUPtrs[3] = &phasor08_IEEE13_B.Beforeeventvalues_h[0];
          sfcnUPtrs[4] = &phasor08_IEEE13_B.Beforeeventvalues_h[1];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 5);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 5);
        _ssSetPortInfo2ForOutputUnits(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 3, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 4, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &phasor08_IEEE13_B.MissedData_m));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *) &phasor08_IEEE13_B.Offset_o));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *) &phasor08_IEEE13_B.SimTime_b));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &phasor08_IEEE13_B.SampleSec_m));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &phasor08_IEEE13_B.DynamicSignals_m));
        }
      }

      /* path info */
      ssSetModelName(rts, "OpComm");
      ssSetPath(rts, "phasor08_IEEE13/Sm_master/OpComm/OpComm");
      ssSetRTModel(rts,phasor08_IEEE13_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)phasor08_IEEE13_P.OpComm_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)phasor08_IEEE13_P.OpComm_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)phasor08_IEEE13_P.OpComm_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)phasor08_IEEE13_P.OpComm_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)phasor08_IEEE13_P.OpComm_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)phasor08_IEEE13_P.OpComm_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)phasor08_IEEE13_P.OpComm_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)phasor08_IEEE13_P.OpComm_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)phasor08_IEEE13_P.OpComm_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)phasor08_IEEE13_P.OpComm_P10_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &phasor08_IEEE13_DW.OpComm_PWORK_h);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &phasor08_IEEE13_DW.OpComm_PWORK_h);
      }

      /* registration */
      sfun_rtlab_comm(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 7);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetInputPortWidth(rts, 1, 5);
      ssSetInputPortDataType(rts, 1, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 1, 0);
      ssSetInputPortFrameData(rts, 1, 0);
      ssSetInputPortUnit(rts, 1, 0);
      ssSetInputPortIsContinuousQuantity(rts, 1, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortConnected(rts, 2, 0);
      _ssSetOutputPortConnected(rts, 3, 0);
      _ssSetOutputPortConnected(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }

    /* Level2 S-Function Block: phasor08_IEEE13/<S6>/OpComm (sfun_rtlab_comm) */
    {
      SimStruct *rts = phasor08_IEEE13_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &phasor08_IEEE13_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &phasor08_IEEE13_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, phasor08_IEEE13_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &phasor08_IEEE13_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &phasor08_IEEE13_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &phasor08_IEEE13_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &phasor08_IEEE13_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 5);
        ssSetPortInfoForInputs(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &phasor08_IEEE13_B.Cte;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.UPtrs1;
          sfcnUPtrs[0] = &phasor08_IEEE13_B.Cte;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.UPtrs2;
          sfcnUPtrs[0] = &phasor08_IEEE13_B.Cte;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.UPtrs3;
          sfcnUPtrs[0] = &phasor08_IEEE13_B.Cte;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.UPtrs4;
          sfcnUPtrs[0] = &phasor08_IEEE13_B.Cte;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 5);
        _ssSetPortInfo2ForOutputUnits(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 3, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 4, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &phasor08_IEEE13_B.MissedData));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *) &phasor08_IEEE13_B.Offset));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *) &phasor08_IEEE13_B.SimTime));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *) &phasor08_IEEE13_B.SampleSec));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &phasor08_IEEE13_B.DynamicSignals));
        }
      }

      /* path info */
      ssSetModelName(rts, "OpComm");
      ssSetPath(rts, "phasor08_IEEE13/sc_console/OpComm1/OpComm");
      ssSetRTModel(rts,phasor08_IEEE13_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 10);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)phasor08_IEEE13_P.OpComm_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)phasor08_IEEE13_P.OpComm_P2_Size_k);
        ssSetSFcnParam(rts, 2, (mxArray*)phasor08_IEEE13_P.OpComm_P3_Size_d);
        ssSetSFcnParam(rts, 3, (mxArray*)phasor08_IEEE13_P.OpComm_P4_Size_d);
        ssSetSFcnParam(rts, 4, (mxArray*)phasor08_IEEE13_P.OpComm_P5_Size_o);
        ssSetSFcnParam(rts, 5, (mxArray*)phasor08_IEEE13_P.OpComm_P6_Size_c);
        ssSetSFcnParam(rts, 6, (mxArray*)phasor08_IEEE13_P.OpComm_P7_Size_j);
        ssSetSFcnParam(rts, 7, (mxArray*)phasor08_IEEE13_P.OpComm_P8_Size_k);
        ssSetSFcnParam(rts, 8, (mxArray*)phasor08_IEEE13_P.OpComm_P9_Size_m);
        ssSetSFcnParam(rts, 9, (mxArray*)phasor08_IEEE13_P.OpComm_P10_Size_p);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &phasor08_IEEE13_DW.OpComm_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &phasor08_IEEE13_DW.OpComm_PWORK);
      }

      /* registration */
      sfun_rtlab_comm(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetInputPortWidth(rts, 1, 1);
      ssSetInputPortDataType(rts, 1, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 1, 0);
      ssSetInputPortFrameData(rts, 1, 0);
      ssSetInputPortUnit(rts, 1, 0);
      ssSetInputPortIsContinuousQuantity(rts, 1, 0);
      ssSetInputPortWidth(rts, 2, 1);
      ssSetInputPortDataType(rts, 2, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 2, 0);
      ssSetInputPortFrameData(rts, 2, 0);
      ssSetInputPortUnit(rts, 2, 0);
      ssSetInputPortIsContinuousQuantity(rts, 2, 0);
      ssSetInputPortWidth(rts, 3, 1);
      ssSetInputPortDataType(rts, 3, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 3, 0);
      ssSetInputPortFrameData(rts, 3, 0);
      ssSetInputPortUnit(rts, 3, 0);
      ssSetInputPortIsContinuousQuantity(rts, 3, 0);
      ssSetInputPortWidth(rts, 4, 1);
      ssSetInputPortDataType(rts, 4, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 4, 0);
      ssSetInputPortFrameData(rts, 4, 0);
      ssSetInputPortUnit(rts, 4, 0);
      ssSetInputPortIsContinuousQuantity(rts, 4, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetOutputPortConnected(rts, 0, 0);
      _ssSetOutputPortConnected(rts, 1, 0);
      _ssSetOutputPortConnected(rts, 2, 0);
      _ssSetOutputPortConnected(rts, 3, 0);
      _ssSetOutputPortConnected(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
    }

    /* Level2 S-Function Block: phasor08_IEEE13/<S1>/Solver (OpIRTS) */
    {
      SimStruct *rts = phasor08_IEEE13_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = phasor08_IEEE13_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = phasor08_IEEE13_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = phasor08_IEEE13_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &phasor08_IEEE13_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &phasor08_IEEE13_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, phasor08_IEEE13_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &phasor08_IEEE13_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &phasor08_IEEE13_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &phasor08_IEEE13_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &phasor08_IEEE13_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 2);
        ssSetPortInfoForInputs(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, phasor08_IEEE13_B.Switch);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 3);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, phasor08_IEEE13_B.Switch_n);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 2);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 5);
        _ssSetPortInfo2ForOutputUnits(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 3, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 4, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 13);
          ssSetOutputPortSignal(rts, 0, ((real_T *) phasor08_IEEE13_B.Solver_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 13);
          ssSetOutputPortSignal(rts, 1, ((real_T *) phasor08_IEEE13_B.Solver_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 6);
          ssSetOutputPortSignal(rts, 2, ((real_T *) phasor08_IEEE13_B.Solver_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 6);
          ssSetOutputPortSignal(rts, 3, ((real_T *) phasor08_IEEE13_B.Solver_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 2);
          ssSetOutputPortSignal(rts, 4, ((real_T *) phasor08_IEEE13_B.Solver_o5));
        }
      }

      /* path info */
      ssSetModelName(rts, "Solver");
      ssSetPath(rts, "phasor08_IEEE13/Sm_master/Solver");
      ssSetRTModel(rts,phasor08_IEEE13_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &phasor08_IEEE13_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 22);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)phasor08_IEEE13_P.Solver_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)phasor08_IEEE13_P.Solver_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)phasor08_IEEE13_P.Solver_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)phasor08_IEEE13_P.Solver_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)phasor08_IEEE13_P.Solver_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)phasor08_IEEE13_P.Solver_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)phasor08_IEEE13_P.Solver_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)phasor08_IEEE13_P.Solver_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)phasor08_IEEE13_P.Solver_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)phasor08_IEEE13_P.Solver_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)phasor08_IEEE13_P.Solver_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)phasor08_IEEE13_P.Solver_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)phasor08_IEEE13_P.Solver_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)phasor08_IEEE13_P.Solver_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)phasor08_IEEE13_P.Solver_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)phasor08_IEEE13_P.Solver_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)phasor08_IEEE13_P.Solver_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)phasor08_IEEE13_P.Solver_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)phasor08_IEEE13_P.Solver_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)phasor08_IEEE13_P.Solver_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)phasor08_IEEE13_P.Solver_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)phasor08_IEEE13_P.Solver_P22_Size);
      }

      /* registration */
      OpIRTS(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
    }
  }

  /* Initialize Sizes */
  phasor08_IEEE13_M->Sizes.numContStates = (0);/* Number of continuous states */
  phasor08_IEEE13_M->Sizes.numY = (0); /* Number of model outputs */
  phasor08_IEEE13_M->Sizes.numU = (0); /* Number of model inputs */
  phasor08_IEEE13_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  phasor08_IEEE13_M->Sizes.numSampTimes = (2);/* Number of sample times */
  phasor08_IEEE13_M->Sizes.numBlocks = (50);/* Number of blocks */
  phasor08_IEEE13_M->Sizes.numBlockIO = (30);/* Number of block outputs */
  phasor08_IEEE13_M->Sizes.numBlockPrms = (176);/* Sum of parameter "widths" */
  return phasor08_IEEE13_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/

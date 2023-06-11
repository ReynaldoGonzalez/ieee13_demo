/*
 * phasor08_ieee13_1_sm_master.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "phasor08_ieee13_1_sm_master".
 *
 * Model version              : 11.20
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed Jan 25 01:04:35 2023
 *
 * Target selection: rtlab_rtmodel.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "phasor08_ieee13_1_sm_master.h"
#include "phasor08_ieee13_1_sm_master_private.h"

/* Named constants for MATLAB Function: '<S8>/MATLAB Function' */
#define phasor08_ieee13_1_sm_CALL_EVENT (-1)

/* Block signals (default storage) */
B_phasor08_ieee13_1_sm_master_T phasor08_ieee13_1_sm_master_B;

/* Block states (default storage) */
DW_phasor08_ieee13_1_sm_master_T phasor08_ieee13_1_sm_master_DW;

/* Real-time model */
static RT_MODEL_phasor08_ieee13_1_sm_master_T phasor08_ieee13_1_sm_master_M_;
RT_MODEL_phasor08_ieee13_1_sm_master_T *const phasor08_ieee13_1_sm_master_M =
  &phasor08_ieee13_1_sm_master_M_;
real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T tmp;
  real_T tmp_0;
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtGetNaN();
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = rtGetInf();
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = rtGetInf();
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = rtGetNaN();
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Model output function */
static void phasor08_ieee13_1_sm_master_output(void)
{
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  int32_T i;
  int32_T i_0;
  int32_T i_1;
  int32_T i_2;
  int32_T i_3;
  int32_T i_4;
  int32_T i_5;
  int32_T i_6;
  int32_T i_7;
  int32_T i_8;

  /* Memory: '<S1>/S-Function' */
  phasor08_ieee13_1_sm_master_B.SFunction_g =
    phasor08_ieee13_1_sm_master_DW.SFunction_PreviousInput;

  /* Sum: '<S1>/Sum' incorporates:
   *  Constant: '<S1>/S-Function1'
   */
  phasor08_ieee13_1_sm_master_B.Sum =
    phasor08_ieee13_1_sm_master_P.SFunction1_Value +
    phasor08_ieee13_1_sm_master_B.SFunction_g;

  /* Stop: '<S1>/Stop Simulation' */
  if (phasor08_ieee13_1_sm_master_B.Sum != 0.0) {
    rtmSetStopRequested(phasor08_ieee13_1_sm_master_M, 1);
  }

  /* End of Stop: '<S1>/Stop Simulation' */

  /* S-Function (RECV_Param): '<S12>/S-Function' */

  /* Level2 S-Function Block: '<S12>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = phasor08_ieee13_1_sm_master_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* Clock: '<S6>/Clock' incorporates:
   *  Clock: '<S5>/Clock'
   */
  phasor08_ieee13_1_sm_master_B.Clock = phasor08_ieee13_1_sm_master_M->Timing.t
    [0];

  /* Sum: '<S5>/Sum' incorporates:
   *  Constant: '<S5>/Constant'
   */
  phasor08_ieee13_1_sm_master_B.Sum_g = phasor08_ieee13_1_sm_master_B.SFunction
    [3] - phasor08_ieee13_1_sm_master_P.Ts / 2.0;

  /* RelationalOperator: '<S6>/Relational Operator' incorporates:
   *  RelationalOperator: '<S5>/Relational Operator'
   */
  phasor08_ieee13_1_sm_master_B.RelationalOperator =
    (phasor08_ieee13_1_sm_master_B.Clock >= phasor08_ieee13_1_sm_master_B.Sum_g);

  /* Switch: '<S5>/Switch' */
  if (phasor08_ieee13_1_sm_master_B.RelationalOperator) {
    /* Switch: '<S5>/Switch' */
    phasor08_ieee13_1_sm_master_B.Switch[0] =
      phasor08_ieee13_1_sm_master_B.SFunction[0];
    phasor08_ieee13_1_sm_master_B.Switch[1] =
      phasor08_ieee13_1_sm_master_B.SFunction[1];
    phasor08_ieee13_1_sm_master_B.Switch[2] =
      phasor08_ieee13_1_sm_master_B.SFunction[2];
  } else {
    /* Switch: '<S5>/Switch' */
    phasor08_ieee13_1_sm_master_B.Switch[0] =
      phasor08_ieee13_1_sm_master_B.SFunction[4];
    phasor08_ieee13_1_sm_master_B.Switch[1] =
      phasor08_ieee13_1_sm_master_B.SFunction[5];
    phasor08_ieee13_1_sm_master_B.Switch[2] =
      phasor08_ieee13_1_sm_master_B.SFunction[6];
  }

  /* End of Switch: '<S5>/Switch' */

  /* Clock: '<S6>/Clock' */
  phasor08_ieee13_1_sm_master_B.Clock = phasor08_ieee13_1_sm_master_M->Timing.t
    [0];

  /* Sum: '<S6>/Sum' incorporates:
   *  Constant: '<S6>/Constant'
   */
  phasor08_ieee13_1_sm_master_B.Sum_f = phasor08_ieee13_1_sm_master_B.SFunction
    [9] - phasor08_ieee13_1_sm_master_P.Ts / 2.0;

  /* RelationalOperator: '<S6>/Relational Operator' */
  phasor08_ieee13_1_sm_master_B.RelationalOperator =
    (phasor08_ieee13_1_sm_master_B.Clock >= phasor08_ieee13_1_sm_master_B.Sum_f);

  /* Switch: '<S6>/Switch' */
  if (phasor08_ieee13_1_sm_master_B.RelationalOperator) {
    /* Switch: '<S6>/Switch' */
    phasor08_ieee13_1_sm_master_B.Switch_n[0] =
      phasor08_ieee13_1_sm_master_B.SFunction[7];
    phasor08_ieee13_1_sm_master_B.Switch_n[1] =
      phasor08_ieee13_1_sm_master_B.SFunction[8];
  } else {
    /* Switch: '<S6>/Switch' */
    phasor08_ieee13_1_sm_master_B.Switch_n[0] =
      phasor08_ieee13_1_sm_master_B.SFunction[10];
    phasor08_ieee13_1_sm_master_B.Switch_n[1] =
      phasor08_ieee13_1_sm_master_B.SFunction[11];
  }

  /* End of Switch: '<S6>/Switch' */

  /* Delay: '<S3>/Delay To avoid algebraic loop' */
  memcpy(&phasor08_ieee13_1_sm_master_B.DelayToavoidalgebraicloop[0],
         &phasor08_ieee13_1_sm_master_DW.DelayToavoidalgebraicloop_DSTAT[0], 12U
         * sizeof(real_T));

  /* S-Function (OpIRTS): '<S2>/Solver' */

  /* Level2 S-Function Block: '<S2>/Solver' (OpIRTS) */
  {
    SimStruct *rts = phasor08_ieee13_1_sm_master_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* S-Function (OP_SEND): '<S19>/S-Function' */

  /* Level2 S-Function Block: '<S19>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = phasor08_ieee13_1_sm_master_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S3>/Switch' */
  for (i = 0; i < 12; i = i + 1) {
    if (phasor08_ieee13_1_sm_master_B.Solver_o3[i] >
        phasor08_ieee13_1_sm_master_P.InverseTimeOvercurrentRelay_Ipc[i]) {
      /* Switch: '<S3>/Switch' incorporates:
       *  Constant: '<S3>/Zero'
       */
      phasor08_ieee13_1_sm_master_B.Switch_p[i] =
        phasor08_ieee13_1_sm_master_P.Zero_Value[i];
    } else {
      /* Switch: '<S3>/Switch' incorporates:
       *  Constant: '<S3>/One'
       */
      phasor08_ieee13_1_sm_master_B.Switch_p[i] =
        phasor08_ieee13_1_sm_master_P.One_Value[i];
    }
  }

  /* End of Switch: '<S3>/Switch' */

  /* Constant: '<S8>/const 1' */
  memcpy(&phasor08_ieee13_1_sm_master_B.const1[0],
         &phasor08_ieee13_1_sm_master_P.u1PH_Qic[0], 12U * sizeof(real_T));

  /* DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */
  for (i = 0; i < 12; i = i + 1) {
    if ((phasor08_ieee13_1_sm_master_B.Switch_p[i] > 0.0) &&
        (phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_PrevRese[i] <= 0))
    {
      phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] =
        phasor08_ieee13_1_sm_master_B.const1[i];
      if (phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] >=
          phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_UpperSat) {
        phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] =
          phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_UpperSat;
      } else {
        if (phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] <=
            phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_LowerSat) {
          phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] =
            phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_LowerSat;
        }
      }
    }
  }

  for (i = 0; i < 12; i = i + 1) {
    if (phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] >=
        phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_UpperSat) {
      phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] =
        phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_UpperSat;
    } else {
      if (phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] <=
          phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_LowerSat) {
        phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] =
          phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_LowerSat;
      }
    }
  }

  /* DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */
  memcpy(&phasor08_ieee13_1_sm_master_B.DiscreteTimeIntegrator[0],
         &phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[0], 12U *
         sizeof(real_T));
  for (i_5 = 0; i_5 < 12; i_5 = i_5 + 1) {
    /* Product: '<S8>/Divide1' incorporates:
     *  Constant: '<S8>/const 1 1'
     */
    phasor08_ieee13_1_sm_master_B.Divide1[i_5] =
      phasor08_ieee13_1_sm_master_B.Solver_o3[i_5] /
      phasor08_ieee13_1_sm_master_P.InverseTimeOvercurrentRelay_Ipc[i_5];
  }

  /* MATLAB Function: '<S8>/MATLAB Function' incorporates:
   *  Constant: '<S3>/abc_coff'
   */
  /* MATLAB Function 'Inverse Time Overcurrent Relay/51PH/MATLAB Function': '<S10>:1' */
  /* '<S10>:1:3' */
  for (i = 0; i < 12; i = i + 1) {
    phasor08_ieee13_1_sm_master_B.y[(i + 1) - 1] = rt_powd_snf
      (phasor08_ieee13_1_sm_master_B.Divide1[(i + 1) - 1],
       phasor08_ieee13_1_sm_master_P.abc_coff_Value[2]);
  }

  tmp = phasor08_ieee13_1_sm_master_P.abc_coff_Value[0];
  tmp_0 = phasor08_ieee13_1_sm_master_P.abc_coff_Value[1];
  for (i_8 = 0; i_8 < 12; i_8 = i_8 + 1) {
    phasor08_ieee13_1_sm_master_B.y[i_8] = tmp + tmp_0 /
      (phasor08_ieee13_1_sm_master_B.y[i_8] - 1.0);
  }

  /* End of MATLAB Function: '<S8>/MATLAB Function' */
  for (i_0 = 0; i_0 < 12; i_0 = i_0 + 1) {
    /* DataTypeConversion: '<S11>/Data Type Conversion3' incorporates:
     *  Gain: '<S8>/timedial'
     */
    phasor08_ieee13_1_sm_master_B.DataTypeConversion3[i_0] =
      phasor08_ieee13_1_sm_master_P.InverseTimeOvercurrentRelay_TD5[i_0] *
      phasor08_ieee13_1_sm_master_B.y[i_0];
  }

  for (i_6 = 0; i_6 < 12; i_6 = i_6 + 1) {
    /* Memory: '<S9>/To Hold' incorporates:
     *  Constant: '<S8>/const'
     *  Product: '<S8>/Divide'
     */
    phasor08_ieee13_1_sm_master_B.ToHold[i_6] =
      phasor08_ieee13_1_sm_master_P.const_Value[i_6] /
      phasor08_ieee13_1_sm_master_B.DataTypeConversion3[i_6];
  }

  for (i_1 = 0; i_1 < 12; i_1 = i_1 + 1) {
    /* Logic: '<S9>/To RESET' incorporates:
     *  Constant: '<S8>/const 1 '
     *  RelationalOperator: '<S11>/Relational Operator'
     */
    phasor08_ieee13_1_sm_master_B.ToRESET[i_1] =
      (phasor08_ieee13_1_sm_master_B.Switch_p[i_1] <
       phasor08_ieee13_1_sm_master_P.u1PH_Treshold[i_1]);
  }

  for (i_2 = 0; i_2 < 12; i_2 = i_2 + 1) {
    /* DataTypeConversion: '<S11>/Data Type Conversion3' */
    phasor08_ieee13_1_sm_master_B.DataTypeConversion3[i_2] = (real_T)
      phasor08_ieee13_1_sm_master_B.ToRESET[i_2];
  }

  for (i_7 = 0; i_7 < 12; i_7 = i_7 + 1) {
    /* Switch: '<S8>/sw_Q1' incorporates:
     *  Constant: '<S11>/Constant'
     *  Sum: '<S11>/Add'
     */
    phasor08_ieee13_1_sm_master_B.sw_Q1[i_7] =
      phasor08_ieee13_1_sm_master_P.Constant_Value[i_7] +
      phasor08_ieee13_1_sm_master_B.DataTypeConversion3[i_7];
  }

  for (i_3 = 0; i_3 < 12; i_3 = i_3 + 1) {
    /* DataTypeConversion: '<S11>/Data Type Conversion2' */
    tmp_2 = floor(phasor08_ieee13_1_sm_master_B.sw_Q1[i_3]);
    if (rtIsNaN(tmp_2) || rtIsInf(tmp_2)) {
      tmp_1 = 0.0;
    } else {
      tmp_1 = fmod(tmp_2, 256.0);
    }

    /* DataTypeConversion: '<S11>/Data Type Conversion2' */
    phasor08_ieee13_1_sm_master_B.DataTypeConversion2[i_3] = tmp_1 < 0.0 ?
      (int8_T)-(int8_T)(uint8_T)-tmp_1 : (int8_T)(uint8_T)tmp_1;
  }

  /* Switch: '<S11>/Switch1' */
  for (i = 0; i < 12; i = i + 1) {
    if (phasor08_ieee13_1_sm_master_B.DataTypeConversion2[i] >=
        phasor08_ieee13_1_sm_master_P.Switch1_Threshold) {
      /* Switch: '<S8>/sw_Q1' incorporates:
       *  Constant: '<S8>/const 2'
       */
      phasor08_ieee13_1_sm_master_B.sw_Q1[i] =
        phasor08_ieee13_1_sm_master_P.u1PH_SW1;
    } else {
      /* Switch: '<S8>/sw_Q1' incorporates:
       *  Constant: '<S11>/Constant1'
       */
      phasor08_ieee13_1_sm_master_B.sw_Q1[i] =
        phasor08_ieee13_1_sm_master_P.Constant1_Value[i];
    }
  }

  /* End of Switch: '<S11>/Switch1' */

  /* Switch: '<S11>/Switch' */
  for (i = 0; i < 12; i = i + 1) {
    if (phasor08_ieee13_1_sm_master_B.DataTypeConversion2[i] >=
        phasor08_ieee13_1_sm_master_P.Switch_Threshold) {
      /* Switch: '<S11>/Switch' */
      phasor08_ieee13_1_sm_master_B.Switch_h[i] =
        phasor08_ieee13_1_sm_master_B.ToHold[i];
    } else {
      /* Switch: '<S11>/Switch' */
      phasor08_ieee13_1_sm_master_B.Switch_h[i] =
        phasor08_ieee13_1_sm_master_B.sw_Q1[i];
    }
  }

  /* End of Switch: '<S11>/Switch' */

  /* Switch: '<S8>/sw_Q1' */
  for (i = 0; i < 12; i = i + 1) {
    if (phasor08_ieee13_1_sm_master_B.DiscreteTimeIntegrator[i] >=
        phasor08_ieee13_1_sm_master_P.sw_Q1_Threshold) {
      /* Switch: '<S8>/sw_Q1' incorporates:
       *  Constant: '<S8>/1'
       */
      phasor08_ieee13_1_sm_master_B.sw_Q1[i] =
        phasor08_ieee13_1_sm_master_P.u_Value_p[i];
    } else {
      /* Switch: '<S8>/sw_Q1' incorporates:
       *  Constant: '<S8>/0'
       */
      phasor08_ieee13_1_sm_master_B.sw_Q1[i] =
        phasor08_ieee13_1_sm_master_P.u_Value[i];
    }
  }

  /* End of Switch: '<S8>/sw_Q1' */

  /* DataTypeConversion: '<S3>/Boolean' */
  phasor08_ieee13_1_sm_master_B.Boolean =
    (phasor08_ieee13_1_sm_master_B.SFunction[16] != 0.0);

  /* Logic: '<S9>/RESET' */
  phasor08_ieee13_1_sm_master_B.RESET = !phasor08_ieee13_1_sm_master_B.Boolean;

  /* Memory: '<S9>/To Hold' */
  memcpy(&phasor08_ieee13_1_sm_master_B.ToHold[0],
         &phasor08_ieee13_1_sm_master_DW.ToHold_PreviousInput[0], 12U * sizeof
         (real_T));
  for (i_4 = 0; i_4 < 12; i_4 = i_4 + 1) {
    /* Logic: '<S9>/To RESET' */
    phasor08_ieee13_1_sm_master_B.ToRESET[i_4] =
      (phasor08_ieee13_1_sm_master_B.RESET &&
       (phasor08_ieee13_1_sm_master_B.ToHold[i_4] != 0.0));
  }

  /* Switch: '<S9>/Detected' */
  for (i = 0; i < 12; i = i + 1) {
    if (phasor08_ieee13_1_sm_master_B.sw_Q1[i] >
        phasor08_ieee13_1_sm_master_P.Detected_Threshold) {
      /* Switch: '<S9>/Detected' incorporates:
       *  Constant: '<S9>/Constant'
       */
      phasor08_ieee13_1_sm_master_B.Detected[i] =
        phasor08_ieee13_1_sm_master_P.Constant_Value_e[i];
    } else {
      /* Switch: '<S9>/Detected' */
      phasor08_ieee13_1_sm_master_B.Detected[i] = (real_T)
        phasor08_ieee13_1_sm_master_B.ToRESET[i];
    }
  }

  /* End of Switch: '<S9>/Detected' */
}

/* Model update function */
static void phasor08_ieee13_1_sm_master_update(void)
{
  int32_T i;
  int32_T i_0;

  /* Update for Memory: '<S1>/S-Function' */
  phasor08_ieee13_1_sm_master_DW.SFunction_PreviousInput =
    phasor08_ieee13_1_sm_master_B.Sum;

  /* Update for Delay: '<S3>/Delay To avoid algebraic loop' */
  memcpy(&phasor08_ieee13_1_sm_master_DW.DelayToavoidalgebraicloop_DSTAT[0],
         &phasor08_ieee13_1_sm_master_B.Detected[0], 12U * sizeof(real_T));

  /* Update for S-Function (OpIRTS): '<S2>/Solver' */
  /* Level2 S-Function Block: '<S2>/Solver' (OpIRTS) */
  {
    SimStruct *rts = phasor08_ieee13_1_sm_master_M->childSfunctions[1];
    sfcnUpdate(rts,0);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Update for DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */
  for (i_0 = 0; i_0 < 12; i_0 = i_0 + 1) {
    phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i_0] =
      phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i_0] +
      phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_gainval *
      phasor08_ieee13_1_sm_master_B.Switch_h[i_0];
  }

  for (i = 0; i < 12; i = i + 1) {
    if (phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] >=
        phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_UpperSat) {
      phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] =
        phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_UpperSat;
    } else {
      if (phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] <=
          phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_LowerSat) {
        phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] =
          phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_LowerSat;
      }
    }
  }

  for (i = 0; i < 12; i = i + 1) {
    if (phasor08_ieee13_1_sm_master_B.Switch_p[i] > 0.0) {
      phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_PrevRese[i] = 1;
    } else if (phasor08_ieee13_1_sm_master_B.Switch_p[i] < 0.0) {
      phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_PrevRese[i] = -1;
    } else if (phasor08_ieee13_1_sm_master_B.Switch_p[i] == 0.0) {
      phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_PrevRese[i] = 0;
    } else {
      phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_PrevRese[i] = 2;
    }
  }

  /* End of Update for DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */

  /* Update for Memory: '<S9>/To Hold' */
  memcpy(&phasor08_ieee13_1_sm_master_DW.ToHold_PreviousInput[0],
         &phasor08_ieee13_1_sm_master_B.Detected[0], 12U * sizeof(real_T));

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++phasor08_ieee13_1_sm_master_M->Timing.clockTick0)) {
    ++phasor08_ieee13_1_sm_master_M->Timing.clockTickH0;
  }

  phasor08_ieee13_1_sm_master_M->Timing.t[0] =
    phasor08_ieee13_1_sm_master_M->Timing.clockTick0 *
    phasor08_ieee13_1_sm_master_M->Timing.stepSize0 +
    phasor08_ieee13_1_sm_master_M->Timing.clockTickH0 *
    phasor08_ieee13_1_sm_master_M->Timing.stepSize0 * 4294967296.0;

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
    if (!(++phasor08_ieee13_1_sm_master_M->Timing.clockTick1)) {
      ++phasor08_ieee13_1_sm_master_M->Timing.clockTickH1;
    }

    phasor08_ieee13_1_sm_master_M->Timing.t[1] =
      phasor08_ieee13_1_sm_master_M->Timing.clockTick1 *
      phasor08_ieee13_1_sm_master_M->Timing.stepSize1 +
      phasor08_ieee13_1_sm_master_M->Timing.clockTickH1 *
      phasor08_ieee13_1_sm_master_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
static void phasor08_ieee13_1_sm_master_initialize(void)
{
  /* Start for S-Function (OpIRTS): '<S2>/Solver' */
  /* Level2 S-Function Block: '<S2>/Solver' (OpIRTS) */
  {
    SimStruct *rts = phasor08_ieee13_1_sm_master_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S8>/const 1' */
  memcpy(&phasor08_ieee13_1_sm_master_B.const1[0],
         &phasor08_ieee13_1_sm_master_P.u1PH_Qic[0], 12U * sizeof(real_T));

  {
    int32_T i;
    int32_T i_0;
    int32_T i_1;
    int32_T i_2;

    /* user code (Initialize function Body) */

    /* System '<Root>' */

    /* Opal-RT Technologies */
    opalSizeDwork = sizeof(rtDWork);
    if (Opal_rtmGetNumBlockIO(pRtModel) != 0)
      opalSizeBlockIO = sizeof(rtB);
    else
      opalSizeBlockIO = 0;
    if (Opal_rtmGetNumBlockParams(pRtModel) != 0)
      opalSizeRTP = sizeof(rtP);
    else
      opalSizeRTP = 0;

    /* InitializeConditions for Memory: '<S1>/S-Function' */
    phasor08_ieee13_1_sm_master_DW.SFunction_PreviousInput =
      phasor08_ieee13_1_sm_master_P.SFunction_InitialCondition;

    /* InitializeConditions for S-Function (RECV_Param): '<S12>/S-Function' */
    /* Level2 S-Function Block: '<S12>/S-Function' (RECV_Param) */
    {
      SimStruct *rts = phasor08_ieee13_1_sm_master_M->childSfunctions[0];
      sfcnInitializeConditions(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* InitializeConditions for Delay: '<S3>/Delay To avoid algebraic loop' */
    for (i_2 = 0; i_2 < 12; i_2 = i_2 + 1) {
      phasor08_ieee13_1_sm_master_DW.DelayToavoidalgebraicloop_DSTAT[i_2] =
        phasor08_ieee13_1_sm_master_P.DelayToavoidalgebraicloop_Initi;
    }

    /* End of InitializeConditions for Delay: '<S3>/Delay To avoid algebraic loop' */

    /* InitializeConditions for S-Function (OpIRTS): '<S2>/Solver' */
    /* Level2 S-Function Block: '<S2>/Solver' (OpIRTS) */
    {
      SimStruct *rts = phasor08_ieee13_1_sm_master_M->childSfunctions[1];
      sfcnInitializeConditions(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* InitializeConditions for S-Function (OP_SEND): '<S19>/S-Function' */
    /* Level2 S-Function Block: '<S19>/S-Function' (OP_SEND) */
    {
      SimStruct *rts = phasor08_ieee13_1_sm_master_M->childSfunctions[2];
      sfcnInitializeConditions(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* InitializeConditions for DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */
    memcpy(&phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[0],
           &phasor08_ieee13_1_sm_master_B.const1[0], 12U * sizeof(real_T));
    for (i = 0; i < 12; i = i + 1) {
      if (phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] >=
          phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_UpperSat) {
        phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] =
          phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_UpperSat;
      } else {
        if (phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] <=
            phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_LowerSat) {
          phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_DSTATE[i] =
            phasor08_ieee13_1_sm_master_P.DiscreteTimeIntegrator_LowerSat;
        }
      }
    }

    for (i_0 = 0; i_0 < 12; i_0 = i_0 + 1) {
      phasor08_ieee13_1_sm_master_DW.DiscreteTimeIntegrator_PrevRese[i_0] = 2;
    }

    /* End of InitializeConditions for DiscreteIntegrator: '<S8>/Discrete-Time Integrator' */

    /* InitializeConditions for Memory: '<S9>/To Hold' */
    for (i_1 = 0; i_1 < 12; i_1 = i_1 + 1) {
      phasor08_ieee13_1_sm_master_DW.ToHold_PreviousInput[i_1] =
        phasor08_ieee13_1_sm_master_P.ToHold_InitialCondition;
    }

    /* End of InitializeConditions for Memory: '<S9>/To Hold' */
  }
}

/* Model terminate function */
static void phasor08_ieee13_1_sm_master_terminate(void)
{
  /* Terminate for S-Function (RECV_Param): '<S12>/S-Function' */
  /* Level2 S-Function Block: '<S12>/S-Function' (RECV_Param) */
  {
    SimStruct *rts = phasor08_ieee13_1_sm_master_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (OpIRTS): '<S2>/Solver' */
  /* Level2 S-Function Block: '<S2>/Solver' (OpIRTS) */
  {
    SimStruct *rts = phasor08_ieee13_1_sm_master_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (OP_SEND): '<S19>/S-Function' */
  /* Level2 S-Function Block: '<S19>/S-Function' (OP_SEND) */
  {
    SimStruct *rts = phasor08_ieee13_1_sm_master_M->childSfunctions[2];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  phasor08_ieee13_1_sm_master_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  phasor08_ieee13_1_sm_master_update();
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
  phasor08_ieee13_1_sm_master_initialize();
}

void MdlTerminate(void)
{
  phasor08_ieee13_1_sm_master_terminate();
}

/* Registration function */
RT_MODEL_phasor08_ieee13_1_sm_master_T *phasor08_ieee13_1_sm_master(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)phasor08_ieee13_1_sm_master_M, 0,
                sizeof(RT_MODEL_phasor08_ieee13_1_sm_master_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&phasor08_ieee13_1_sm_master_M->solverInfo,
                          &phasor08_ieee13_1_sm_master_M->Timing.simTimeStep);
    rtsiSetTPtr(&phasor08_ieee13_1_sm_master_M->solverInfo, &rtmGetTPtr
                (phasor08_ieee13_1_sm_master_M));
    rtsiSetStepSizePtr(&phasor08_ieee13_1_sm_master_M->solverInfo,
                       &phasor08_ieee13_1_sm_master_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&phasor08_ieee13_1_sm_master_M->solverInfo,
                          (&rtmGetErrorStatus(phasor08_ieee13_1_sm_master_M)));
    rtsiSetRTModelPtr(&phasor08_ieee13_1_sm_master_M->solverInfo,
                      phasor08_ieee13_1_sm_master_M);
  }

  rtsiSetSimTimeStep(&phasor08_ieee13_1_sm_master_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&phasor08_ieee13_1_sm_master_M->solverInfo,
                    "FixedStepDiscrete");
  phasor08_ieee13_1_sm_master_M->solverInfoPtr =
    (&phasor08_ieee13_1_sm_master_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      phasor08_ieee13_1_sm_master_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    phasor08_ieee13_1_sm_master_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    phasor08_ieee13_1_sm_master_M->Timing.sampleTimes =
      (&phasor08_ieee13_1_sm_master_M->Timing.sampleTimesArray[0]);
    phasor08_ieee13_1_sm_master_M->Timing.offsetTimes =
      (&phasor08_ieee13_1_sm_master_M->Timing.offsetTimesArray[0]);

    /* task periods */
    phasor08_ieee13_1_sm_master_M->Timing.sampleTimes[0] = (0.0);
    phasor08_ieee13_1_sm_master_M->Timing.sampleTimes[1] = (0.01);

    /* task offsets */
    phasor08_ieee13_1_sm_master_M->Timing.offsetTimes[0] = (0.0);
    phasor08_ieee13_1_sm_master_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(phasor08_ieee13_1_sm_master_M,
             &phasor08_ieee13_1_sm_master_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = phasor08_ieee13_1_sm_master_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    phasor08_ieee13_1_sm_master_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(phasor08_ieee13_1_sm_master_M, -1);
  phasor08_ieee13_1_sm_master_M->Timing.stepSize0 = 0.01;
  phasor08_ieee13_1_sm_master_M->Timing.stepSize1 = 0.01;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    phasor08_ieee13_1_sm_master_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(phasor08_ieee13_1_sm_master_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(phasor08_ieee13_1_sm_master_M->rtwLogInfo, (NULL));
    rtliSetLogT(phasor08_ieee13_1_sm_master_M->rtwLogInfo, "tout");
    rtliSetLogX(phasor08_ieee13_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogXFinal(phasor08_ieee13_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(phasor08_ieee13_1_sm_master_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(phasor08_ieee13_1_sm_master_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(phasor08_ieee13_1_sm_master_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(phasor08_ieee13_1_sm_master_M->rtwLogInfo, 1);
    rtliSetLogY(phasor08_ieee13_1_sm_master_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(phasor08_ieee13_1_sm_master_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(phasor08_ieee13_1_sm_master_M->rtwLogInfo, (NULL));
  }

  phasor08_ieee13_1_sm_master_M->solverInfoPtr =
    (&phasor08_ieee13_1_sm_master_M->solverInfo);
  phasor08_ieee13_1_sm_master_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&phasor08_ieee13_1_sm_master_M->solverInfo, 0.01);
  rtsiSetSolverMode(&phasor08_ieee13_1_sm_master_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  phasor08_ieee13_1_sm_master_M->ModelData.blockIO = ((void *)
    &phasor08_ieee13_1_sm_master_B);
  (void) memset(((void *) &phasor08_ieee13_1_sm_master_B), 0,
                sizeof(B_phasor08_ieee13_1_sm_master_T));

  /* parameters */
  phasor08_ieee13_1_sm_master_M->ModelData.defaultParam = ((real_T *)
    &phasor08_ieee13_1_sm_master_P);

  /* states (dwork) */
  phasor08_ieee13_1_sm_master_M->ModelData.dwork = ((void *)
    &phasor08_ieee13_1_sm_master_DW);
  (void) memset((void *)&phasor08_ieee13_1_sm_master_DW, 0,
                sizeof(DW_phasor08_ieee13_1_sm_master_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.sfcnInfo;
    phasor08_ieee13_1_sm_master_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (phasor08_ieee13_1_sm_master_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &phasor08_ieee13_1_sm_master_M->Sizes.numSampTimes);
    phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(phasor08_ieee13_1_sm_master_M)[0]);
    phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.taskTimePtrs[1] =
      &(rtmGetTPtr(phasor08_ieee13_1_sm_master_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(phasor08_ieee13_1_sm_master_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(phasor08_ieee13_1_sm_master_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (phasor08_ieee13_1_sm_master_M));
    rtssSetStepSizePtr(sfcnInfo, &phasor08_ieee13_1_sm_master_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (phasor08_ieee13_1_sm_master_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &phasor08_ieee13_1_sm_master_M->ModelData.derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &phasor08_ieee13_1_sm_master_M->ModelData.zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &phasor08_ieee13_1_sm_master_M->ModelData.CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &phasor08_ieee13_1_sm_master_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &phasor08_ieee13_1_sm_master_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &phasor08_ieee13_1_sm_master_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &phasor08_ieee13_1_sm_master_M->solverInfoPtr);
  }

  phasor08_ieee13_1_sm_master_M->Sizes.numSFcns = (3);

  /* register each child */
  {
    (void) memset((void *)
                  &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  3*sizeof(SimStruct));
    phasor08_ieee13_1_sm_master_M->childSfunctions =
      (&phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    phasor08_ieee13_1_sm_master_M->childSfunctions[0] =
      (&phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.childSFunctions[0]);
    phasor08_ieee13_1_sm_master_M->childSfunctions[1] =
      (&phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.childSFunctions[1]);
    phasor08_ieee13_1_sm_master_M->childSfunctions[2] =
      (&phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.childSFunctions[2]);

    /* Level2 S-Function Block: phasor08_ieee13_1_sm_master/<S12>/S-Function (RECV_Param) */
    {
      SimStruct *rts = phasor08_ieee13_1_sm_master_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, phasor08_ieee13_1_sm_master_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 17);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            phasor08_ieee13_1_sm_master_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "phasor08_ieee13_1_sm_master/Sm_master/OpComm/Receive/S-Function");
      ssSetRTModel(rts,phasor08_ieee13_1_sm_master_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.SFunction_P2_Size);
      }

      /* registration */
      RECV_Param(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: phasor08_ieee13_1_sm_master/<S2>/Solver (OpIRTS) */
    {
      SimStruct *rts = phasor08_ieee13_1_sm_master_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, phasor08_ieee13_1_sm_master_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 4);
        ssSetPortInfoForInputs(rts,
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, phasor08_ieee13_1_sm_master_B.Switch);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 3);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, phasor08_ieee13_1_sm_master_B.Switch_n);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 2);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &phasor08_ieee13_1_sm_master_B.SFunction
                               [12]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 4);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3,
                               phasor08_ieee13_1_sm_master_B.DelayToavoidalgebraicloop);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 12);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 6);
        _ssSetPortInfo2ForOutputUnits(rts,
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 3, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 4, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 5, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 12);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            phasor08_ieee13_1_sm_master_B.Solver_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 12);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            phasor08_ieee13_1_sm_master_B.Solver_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 12);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            phasor08_ieee13_1_sm_master_B.Solver_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 12);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            phasor08_ieee13_1_sm_master_B.Solver_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 2);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            phasor08_ieee13_1_sm_master_B.Solver_o5));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 4);
          ssSetOutputPortSignal(rts, 5, ((real_T *)
            phasor08_ieee13_1_sm_master_B.Solver_o6));
        }
      }

      /* path info */
      ssSetModelName(rts, "Solver");
      ssSetPath(rts, "phasor08_ieee13_1_sm_master/Sm_master/Solver");
      ssSetRTModel(rts,phasor08_ieee13_1_sm_master_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 22);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.Solver_P22_Size);
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
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
    }

    /* Level2 S-Function Block: phasor08_ieee13_1_sm_master/<S19>/S-Function (OP_SEND) */
    {
      SimStruct *rts = phasor08_ieee13_1_sm_master_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, phasor08_ieee13_1_sm_master_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn2.UPtrs0;

          {
            int_T i1;
            const real_T *u0 = &phasor08_ieee13_1_sm_master_B.Solver_o1[0];
            for (i1=0; i1 < 12; i1++) {
              sfcnUPtrs[i1] = &u0[i1];
            }

            u0 = &phasor08_ieee13_1_sm_master_B.Solver_o2[0];
            for (i1=0; i1 < 12; i1++) {
              sfcnUPtrs[i1+ 12] = &u0[i1];
            }

            u0 = &phasor08_ieee13_1_sm_master_B.Solver_o3[0];
            for (i1=0; i1 < 12; i1++) {
              sfcnUPtrs[i1+ 24] = &u0[i1];
            }

            u0 = &phasor08_ieee13_1_sm_master_B.Solver_o4[0];
            for (i1=0; i1 < 12; i1++) {
              sfcnUPtrs[i1+ 36] = &u0[i1];
            }

            sfcnUPtrs[48] = &phasor08_ieee13_1_sm_master_B.Solver_o5[0];
            sfcnUPtrs[49] = &phasor08_ieee13_1_sm_master_B.Solver_o5[1];
            sfcnUPtrs[50] = &phasor08_ieee13_1_sm_master_B.Solver_o6[0];
            sfcnUPtrs[51] = &phasor08_ieee13_1_sm_master_B.Solver_o6[1];
            sfcnUPtrs[52] = &phasor08_ieee13_1_sm_master_B.Solver_o6[2];
            sfcnUPtrs[53] = &phasor08_ieee13_1_sm_master_B.Solver_o6[3];
            u0 = &phasor08_ieee13_1_sm_master_B.DelayToavoidalgebraicloop[0];
            for (i1=0; i1 < 12; i1++) {
              sfcnUPtrs[i1+ 54] = &u0[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 66);
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "phasor08_ieee13_1_sm_master/Sm_master/rtlab_send_subsystem/Subsystem2/Send2/S-Function");
      ssSetRTModel(rts,phasor08_ieee13_1_sm_master_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       phasor08_ieee13_1_sm_master_P.SFunction_P1_Size_i);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &phasor08_ieee13_1_sm_master_DW.SFunction_IWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &phasor08_ieee13_1_sm_master_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 5);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &phasor08_ieee13_1_sm_master_DW.SFunction_IWORK[0]);
      }

      /* registration */
      OP_SEND(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.01);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 66);
      ssSetInputPortDataType(rts, 0, SS_DOUBLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  phasor08_ieee13_1_sm_master_M->Sizes.numContStates = (0);/* Number of continuous states */
  phasor08_ieee13_1_sm_master_M->Sizes.numY = (0);/* Number of model outputs */
  phasor08_ieee13_1_sm_master_M->Sizes.numU = (0);/* Number of model inputs */
  phasor08_ieee13_1_sm_master_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  phasor08_ieee13_1_sm_master_M->Sizes.numSampTimes = (2);/* Number of sample times */
  phasor08_ieee13_1_sm_master_M->Sizes.numBlocks = (53);/* Number of blocks */
  phasor08_ieee13_1_sm_master_M->Sizes.numBlockIO = (30);/* Number of block outputs */
  phasor08_ieee13_1_sm_master_M->Sizes.numBlockPrms = (288);/* Sum of parameter "widths" */
  return phasor08_ieee13_1_sm_master_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/

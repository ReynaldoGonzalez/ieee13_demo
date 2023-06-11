/*
 * phasor08_ieee13_1_sm_master_data.c
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

/* Block parameters (default storage) */
P_phasor08_ieee13_1_sm_master_T phasor08_ieee13_1_sm_master_P = {
  /* Computed Parameter: Solver_P2_Size
   * Referenced by: '<S2>/Solver' (Parameter: P2Size)
   */
  { 1.0, 1.0 },

  /* Variable: Ts
   * Referenced by:
   *   '<S2>/Solver' (Parameter: P2)
   *   '<S5>/Constant' (Parameter: Value)
   *   '<S6>/Constant' (Parameter: Value)
   */
  0.01,

  /* Mask Parameter: InverseTimeOvercurrentRelay_Ipc
   * Referenced by:
   *   '<S3>/Switch' (Parameter: Threshold)
   *   '<S8>/const 1 1' (Parameter: Value)
   */
  { 1000.0, 1000.0, 1000.0, 1000.0, 1000.0, 1000.0, 1000.0, 1000.0, 1000.0,
    1000.0, 1000.0, 1000.0 },

  /* Mask Parameter: u1PH_Qic
   * Referenced by: '<S8>/const 1' (Parameter: Value)
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Mask Parameter: u1PH_SW1
   * Referenced by: '<S8>/const 2' (Parameter: Value)
   */
  0.0,

  /* Mask Parameter: InverseTimeOvercurrentRelay_TD5
   * Referenced by: '<S8>/timedial' (Parameter: Gain)
   */
  { 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05, 0.05 },

  /* Mask Parameter: u1PH_Treshold
   * Referenced by: '<S8>/const 1 ' (Parameter: Value)
   */
  { 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5 },

  /* Expression: 0
   * Referenced by: '<S1>/S-Function1' (Parameter: Value)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/S-Function' (Parameter: InitialCondition)
   */
  0.0,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S12>/S-Function' (Parameter: P1Size)
   */
  { 1.0, 1.0 },

  /* Expression: Data_width
   * Referenced by: '<S12>/S-Function' (Parameter: P1)
   */
  17.0,

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S12>/S-Function' (Parameter: P2Size)
   */
  { 17.0, 1.0 },

  /* Expression: InitialConditions
   * Referenced by: '<S12>/S-Function' (Parameter: P2)
   */
  { 8.0, 8.0, 8.0, 1.0, 0.0, 0.0, 0.0, 340.0, 250.0, 5.0, 170.0, 125.0, 0.0, 0.0,
    0.0, 0.0, 0.0 },

  /* Expression: 0.0
   * Referenced by: '<S3>/Delay To avoid algebraic loop' (Parameter: InitialCondition)
   */
  0.0,

  /* Computed Parameter: Solver_P1_Size
   * Referenced by: '<S2>/Solver' (Parameter: P1Size)
   */
  { 1.0, 6.0 },

  /* Computed Parameter: Solver_P1
   * Referenced by: '<S2>/Solver' (Parameter: P1)
   */
  { 83.0, 121.0, 115.0, 116.0, 101.0, 109.0 },

  /* Computed Parameter: Solver_P3_Size
   * Referenced by: '<S2>/Solver' (Parameter: P3Size)
   */
  { 1.0, 19.0 },

  /* Computed Parameter: Solver_P3
   * Referenced by: '<S2>/Solver' (Parameter: P3)
   */
  { 112.0, 104.0, 97.0, 115.0, 111.0, 114.0, 48.0, 56.0, 95.0, 73.0, 69.0, 69.0,
    69.0, 49.0, 51.0, 46.0, 120.0, 108.0, 115.0 },

  /* Computed Parameter: Solver_P4_Size
   * Referenced by: '<S2>/Solver' (Parameter: P4Size)
   */
  { 1.0, 1.0 },

  /* Expression: np
   * Referenced by: '<S2>/Solver' (Parameter: P4)
   */
  1.0,

  /* Computed Parameter: Solver_P5_Size
   * Referenced by: '<S2>/Solver' (Parameter: P5Size)
   */
  { 1.0, 4.0 },

  /* Computed Parameter: Solver_P5
   * Referenced by: '<S2>/Solver' (Parameter: P5)
   */
  { 67.0, 65.0, 80.0, 73.0 },

  /* Computed Parameter: Solver_P6_Size
   * Referenced by: '<S2>/Solver' (Parameter: P6Size)
   */
  { 0.0, 0.0 },

  /* Computed Parameter: Solver_P7_Size
   * Referenced by: '<S2>/Solver' (Parameter: P7Size)
   */
  { 1.0, 9.0 },

  /* Computed Parameter: Solver_P7
   * Referenced by: '<S2>/Solver' (Parameter: P7)
   */
  { 99.0, 97.0, 112.0, 105.0, 99.0, 111.0, 109.0, 112.0, 95.0 },

  /* Computed Parameter: Solver_P8_Size
   * Referenced by: '<S2>/Solver' (Parameter: P8Size)
   */
  { 1.0, 8.0 },

  /* Computed Parameter: Solver_P8
   * Referenced by: '<S2>/Solver' (Parameter: P8)
   */
  { 102.0, 109.0, 117.0, 99.0, 111.0, 109.0, 112.0, 95.0 },

  /* Computed Parameter: Solver_P9_Size
   * Referenced by: '<S2>/Solver' (Parameter: P9Size)
   */
  { 1.0, 1.0 },

  /* Expression: exporty
   * Referenced by: '<S2>/Solver' (Parameter: P9)
   */
  0.0,

  /* Computed Parameter: Solver_P10_Size
   * Referenced by: '<S2>/Solver' (Parameter: P10Size)
   */
  { 1.0, 1.0 },

  /* Expression: builtin
   * Referenced by: '<S2>/Solver' (Parameter: P10)
   */
  1.0,

  /* Computed Parameter: Solver_P11_Size
   * Referenced by: '<S2>/Solver' (Parameter: P11Size)
   */
  { 1.0, 1.0 },

  /* Expression: logging
   * Referenced by: '<S2>/Solver' (Parameter: P11)
   */
  0.0,

  /* Computed Parameter: Solver_P12_Size
   * Referenced by: '<S2>/Solver' (Parameter: P12Size)
   */
  { 1.0, 1.0 },

  /* Expression: sim_mode
   * Referenced by: '<S2>/Solver' (Parameter: P12)
   */
  1.0,

  /* Computed Parameter: Solver_P13_Size
   * Referenced by: '<S2>/Solver' (Parameter: P13Size)
   */
  { 1.0, 1.0 },

  /* Expression: pf_max_it
   * Referenced by: '<S2>/Solver' (Parameter: P13)
   */
  100.0,

  /* Computed Parameter: Solver_P14_Size
   * Referenced by: '<S2>/Solver' (Parameter: P14Size)
   */
  { 1.0, 1.0 },

  /* Expression: pf_tol_v
   * Referenced by: '<S2>/Solver' (Parameter: P14)
   */
  1.0E-6,

  /* Computed Parameter: Solver_P15_Size
   * Referenced by: '<S2>/Solver' (Parameter: P15Size)
   */
  { 1.0, 1.0 },

  /* Expression: pf_flat_start
   * Referenced by: '<S2>/Solver' (Parameter: P15)
   */
  0.0,

  /* Computed Parameter: Solver_P16_Size
   * Referenced by: '<S2>/Solver' (Parameter: P16Size)
   */
  { 1.0, 1.0 },

  /* Expression: pf_smart_start
   * Referenced by: '<S2>/Solver' (Parameter: P16)
   */
  0.0,

  /* Computed Parameter: Solver_P17_Size
   * Referenced by: '<S2>/Solver' (Parameter: P17Size)
   */
  { 1.0, 1.0 },

  /* Expression: pf_export
   * Referenced by: '<S2>/Solver' (Parameter: P17)
   */
  0.0,

  /* Computed Parameter: Solver_P18_Size
   * Referenced by: '<S2>/Solver' (Parameter: P18Size)
   */
  { 1.0, 1.0 },

  /* Expression: optim_threads
   * Referenced by: '<S2>/Solver' (Parameter: P18)
   */
  0.0,

  /* Computed Parameter: Solver_P19_Size
   * Referenced by: '<S2>/Solver' (Parameter: P19Size)
   */
  { 1.0, 1.0 },

  /* Expression: script_activate_postinit
   * Referenced by: '<S2>/Solver' (Parameter: P19)
   */
  0.0,

  /* Computed Parameter: Solver_P20_Size
   * Referenced by: '<S2>/Solver' (Parameter: P20Size)
   */
  { 0.0, 0.0 },

  /* Computed Parameter: Solver_P21_Size
   * Referenced by: '<S2>/Solver' (Parameter: P21Size)
   */
  { 1.0, 1.0 },

  /* Expression: perflog_on
   * Referenced by: '<S2>/Solver' (Parameter: P21)
   */
  0.0,

  /* Computed Parameter: Solver_P22_Size
   * Referenced by: '<S2>/Solver' (Parameter: P22Size)
   */
  { 0.0, 0.0 },

  /* Computed Parameter: SFunction_P1_Size_i
   * Referenced by: '<S19>/S-Function' (Parameter: P1Size)
   */
  { 1.0, 1.0 },

  /* Expression: Acqu_group
   * Referenced by: '<S19>/S-Function' (Parameter: P1)
   */
  1.0,

  /* Expression: zeros(1,N)
   * Referenced by: '<S8>/0' (Parameter: Value)
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: ones(1,N)
   * Referenced by: '<S8>/1' (Parameter: Value)
   */
  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: zeros(1,N)
   * Referenced by: '<S3>/Zero' (Parameter: Value)
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: ones(1,N)
   * Referenced by: '<S3>/One' (Parameter: Value)
   */
  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S8>/Discrete-Time Integrator' (Parameter: gainval)
   */
  0.01,

  /* Expression: 1e6
   * Referenced by: '<S8>/Discrete-Time Integrator' (Parameter: UpperSaturationLimit)
   */
  1.0E+6,

  /* Expression: 0
   * Referenced by: '<S8>/Discrete-Time Integrator' (Parameter: LowerSaturationLimit)
   */
  0.0,

  /* Expression: ones(1,N)
   * Referenced by: '<S8>/const' (Parameter: Value)
   */
  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: abc
   * Referenced by: '<S3>/abc_coff' (Parameter: Value)
   */
  { 0.0, 0.14, 0.02 },

  /* Expression: ones(1,N)
   * Referenced by: '<S11>/Constant' (Parameter: Value)
   */
  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: zeros(1,N)
   * Referenced by: '<S11>/Constant1' (Parameter: Value)
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 1
   * Referenced by: '<S8>/sw_Q1' (Parameter: Threshold)
   */
  1.0,

  /* Expression: ones(1,N)
   * Referenced by: '<S9>/Constant' (Parameter: Value)
   */
  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Expression: 0
   * Referenced by: '<S9>/To Hold' (Parameter: InitialCondition)
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S9>/Detected' (Parameter: Threshold)
   */
  0.0,

  /* Computed Parameter: Switch1_Threshold
   * Referenced by: '<S11>/Switch1' (Parameter: Threshold)
   */
  1,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S11>/Switch' (Parameter: Threshold)
   */
  2
};

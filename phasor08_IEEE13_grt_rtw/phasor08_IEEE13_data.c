/*
 * phasor08_IEEE13_data.c
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

/* Block parameters (default storage) */
P_phasor08_IEEE13_T phasor08_IEEE13_P = {
  /* Computed Parameter: Solver_P2_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 1.0 },

  /* Variable: Ts
   * Referenced by:
   *   '<S1>/Solver'
   *   '<S4>/Constant'
   *   '<S5>/Constant'
   */
  0.01,

  /* Computed Parameter: OpComm_P1_Size
   * Referenced by: '<S3>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: nbport
   * Referenced by: '<S3>/OpComm'
   */
  2.0,

  /* Computed Parameter: OpComm_P2_Size
   * Referenced by: '<S3>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: st
   * Referenced by: '<S3>/OpComm'
   */
  0.0,

  /* Computed Parameter: OpComm_P3_Size
   * Referenced by: '<S3>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: groupe_acq
   * Referenced by: '<S3>/OpComm'
   */
  1.0,

  /* Computed Parameter: OpComm_P4_Size
   * Referenced by: '<S3>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: Missed_Data
   * Referenced by: '<S3>/OpComm'
   */
  0.0,

  /* Computed Parameter: OpComm_P5_Size
   * Referenced by: '<S3>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: Offset
   * Referenced by: '<S3>/OpComm'
   */
  0.0,

  /* Computed Parameter: OpComm_P6_Size
   * Referenced by: '<S3>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: Sim_Time
   * Referenced by: '<S3>/OpComm'
   */
  0.0,

  /* Computed Parameter: OpComm_P7_Size
   * Referenced by: '<S3>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: Samples
   * Referenced by: '<S3>/OpComm'
   */
  0.0,

  /* Computed Parameter: OpComm_P8_Size
   * Referenced by: '<S3>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: subsys_rate
   * Referenced by: '<S3>/OpComm'
   */
  0.0,

  /* Computed Parameter: OpComm_P9_Size
   * Referenced by: '<S3>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: dynSigOut
   * Referenced by: '<S3>/OpComm'
   */
  0.0,

  /* Computed Parameter: OpComm_P10_Size
   * Referenced by: '<S3>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: from_console
   * Referenced by: '<S3>/OpComm'
   */
  1.0,

  /* Computed Parameter: OpComm_P1_Size_o
   * Referenced by: '<S6>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: nbport
   * Referenced by: '<S6>/OpComm'
   */
  5.0,

  /* Computed Parameter: OpComm_P2_Size_k
   * Referenced by: '<S6>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: st
   * Referenced by: '<S6>/OpComm'
   */
  0.0,

  /* Computed Parameter: OpComm_P3_Size_d
   * Referenced by: '<S6>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: groupe_acq
   * Referenced by: '<S6>/OpComm'
   */
  1.0,

  /* Computed Parameter: OpComm_P4_Size_d
   * Referenced by: '<S6>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: Missed_Data
   * Referenced by: '<S6>/OpComm'
   */
  0.0,

  /* Computed Parameter: OpComm_P5_Size_o
   * Referenced by: '<S6>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: Offset
   * Referenced by: '<S6>/OpComm'
   */
  0.0,

  /* Computed Parameter: OpComm_P6_Size_c
   * Referenced by: '<S6>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: Sim_Time
   * Referenced by: '<S6>/OpComm'
   */
  0.0,

  /* Computed Parameter: OpComm_P7_Size_j
   * Referenced by: '<S6>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: Samples
   * Referenced by: '<S6>/OpComm'
   */
  0.0,

  /* Computed Parameter: OpComm_P8_Size_k
   * Referenced by: '<S6>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: subsys_rate
   * Referenced by: '<S6>/OpComm'
   */
  0.0,

  /* Computed Parameter: OpComm_P9_Size_m
   * Referenced by: '<S6>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: dynSigOut
   * Referenced by: '<S6>/OpComm'
   */
  0.0,

  /* Computed Parameter: OpComm_P10_Size_p
   * Referenced by: '<S6>/OpComm'
   */
  { 1.0, 1.0 },

  /* Expression: from_console
   * Referenced by: '<S6>/OpComm'
   */
  0.0,

  /* Expression: [8 8 8]
   * Referenced by: '<S2>/LineFault0'
   */
  { 8.0, 8.0, 8.0 },

  /* Expression: 1
   * Referenced by: '<S2>/Event Time (seconds)'
   */
  1.0,

  /* Expression: [0 0 0]
   * Referenced by: '<S2>/LineFault1'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: [340,250]
   * Referenced by: '<S2>/before'
   */
  { 340.0, 250.0 },

  /* Expression: 5
   * Referenced by: '<S2>/time'
   */
  5.0,

  /* Expression: [170,125]
   * Referenced by: '<S2>/after event values'
   */
  { 170.0, 125.0 },

  /* Computed Parameter: Solver_P1_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 6.0 },

  /* Computed Parameter: Solver_P1
   * Referenced by: '<S1>/Solver'
   */
  { 83.0, 121.0, 115.0, 116.0, 101.0, 109.0 },

  /* Computed Parameter: Solver_P3_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 19.0 },

  /* Computed Parameter: Solver_P3
   * Referenced by: '<S1>/Solver'
   */
  { 112.0, 104.0, 97.0, 115.0, 111.0, 114.0, 48.0, 56.0, 95.0, 73.0, 69.0, 69.0,
    69.0, 49.0, 51.0, 46.0, 120.0, 108.0, 115.0 },

  /* Computed Parameter: Solver_P4_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 1.0 },

  /* Expression: np
   * Referenced by: '<S1>/Solver'
   */
  1.0,

  /* Computed Parameter: Solver_P5_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 4.0 },

  /* Computed Parameter: Solver_P5
   * Referenced by: '<S1>/Solver'
   */
  { 67.0, 65.0, 80.0, 73.0 },

  /* Computed Parameter: Solver_P6_Size
   * Referenced by: '<S1>/Solver'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: Solver_P7_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 9.0 },

  /* Computed Parameter: Solver_P7
   * Referenced by: '<S1>/Solver'
   */
  { 99.0, 97.0, 112.0, 105.0, 99.0, 111.0, 109.0, 112.0, 95.0 },

  /* Computed Parameter: Solver_P8_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 8.0 },

  /* Computed Parameter: Solver_P8
   * Referenced by: '<S1>/Solver'
   */
  { 102.0, 109.0, 117.0, 99.0, 111.0, 109.0, 112.0, 95.0 },

  /* Computed Parameter: Solver_P9_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 1.0 },

  /* Expression: exporty
   * Referenced by: '<S1>/Solver'
   */
  0.0,

  /* Computed Parameter: Solver_P10_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 1.0 },

  /* Expression: builtin
   * Referenced by: '<S1>/Solver'
   */
  1.0,

  /* Computed Parameter: Solver_P11_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 1.0 },

  /* Expression: logging
   * Referenced by: '<S1>/Solver'
   */
  0.0,

  /* Computed Parameter: Solver_P12_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 1.0 },

  /* Expression: sim_mode
   * Referenced by: '<S1>/Solver'
   */
  3.0,

  /* Computed Parameter: Solver_P13_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 1.0 },

  /* Expression: pf_max_it
   * Referenced by: '<S1>/Solver'
   */
  100.0,

  /* Computed Parameter: Solver_P14_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 1.0 },

  /* Expression: pf_tol_v
   * Referenced by: '<S1>/Solver'
   */
  1.0E-8,

  /* Computed Parameter: Solver_P15_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 1.0 },

  /* Expression: pf_flat_start
   * Referenced by: '<S1>/Solver'
   */
  0.0,

  /* Computed Parameter: Solver_P16_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 1.0 },

  /* Expression: pf_smart_start
   * Referenced by: '<S1>/Solver'
   */
  0.0,

  /* Computed Parameter: Solver_P17_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 1.0 },

  /* Expression: pf_export
   * Referenced by: '<S1>/Solver'
   */
  0.0,

  /* Computed Parameter: Solver_P18_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 1.0 },

  /* Expression: optim_threads
   * Referenced by: '<S1>/Solver'
   */
  0.0,

  /* Computed Parameter: Solver_P19_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 1.0 },

  /* Expression: script_activate_postinit
   * Referenced by: '<S1>/Solver'
   */
  0.0,

  /* Computed Parameter: Solver_P20_Size
   * Referenced by: '<S1>/Solver'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: Solver_P21_Size
   * Referenced by: '<S1>/Solver'
   */
  { 1.0, 1.0 },

  /* Expression: perflog_on
   * Referenced by: '<S1>/Solver'
   */
  0.0,

  /* Computed Parameter: Solver_P22_Size
   * Referenced by: '<S1>/Solver'
   */
  { 0.0, 0.0 }
};

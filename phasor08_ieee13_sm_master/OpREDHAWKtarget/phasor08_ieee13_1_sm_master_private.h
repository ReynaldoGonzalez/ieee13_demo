/*
 * phasor08_ieee13_1_sm_master_private.h
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

#ifndef RTW_HEADER_phasor08_ieee13_1_sm_master_private_h_
#define RTW_HEADER_phasor08_ieee13_1_sm_master_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

extern real_T rt_powd_snf(real_T u0, real_T u1);
extern void RECV_Param(SimStruct *rts);
extern void OpIRTS(SimStruct *rts);
extern void OP_SEND(SimStruct *rts);

#endif                   /* RTW_HEADER_phasor08_ieee13_1_sm_master_private_h_ */

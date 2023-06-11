/*
 * phasor08_ieee13_1_sm_master.h
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

#ifndef RTW_HEADER_phasor08_ieee13_1_sm_master_h_
#define RTW_HEADER_phasor08_ieee13_1_sm_master_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#ifndef phasor08_ieee13_1_sm_master_COMMON_INCLUDES_
#define phasor08_ieee13_1_sm_master_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#endif                        /* phasor08_ieee13_1_sm_master_COMMON_INCLUDES_ */

#include "phasor08_ieee13_1_sm_master_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->ModelData.CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->ModelData.CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ()
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ()
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ()
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ()
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ()
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->ModelData.dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->ModelData.dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ()
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ()
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->ModelData.dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->ModelData.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define phasor08_ieee13_1_sm_master_rtModel RT_MODEL_phasor08_ieee13_1_sm_master_T

/* user code (top of header file) */
/* System '<Root>' */
/* Opal-RT Technologies */
extern int opalSizeDwork;
extern unsigned int opalSizeBlockIO;
extern unsigned int opalSizeRTP;
extern void * pRtModel;                //pointer on the RTmodel struc
int_T Opal_rtmGetNumBlockParams(void *ptr);
int_T Opal_rtmGetNumBlockIO(void *ptr);

/* Block signals (default storage) */
typedef struct {
  real_T Sum;                          /* '<S1>/Sum' (Output 1)  */
  real_T SFunction[17];                /* '<S12>/S-Function' (Output 1)  */
  real_T Sum_g;                        /* '<S5>/Sum' (Output 1)  */
  real_T Switch[3];                    /* '<S5>/Switch' (Output 1)  */
  real_T Sum_f;                        /* '<S6>/Sum' (Output 1)  */
  real_T Switch_n[2];                  /* '<S6>/Switch' (Output 1)  */
  real_T DelayToavoidalgebraicloop[12];
                          /* '<S3>/Delay To avoid algebraic loop' (Output 1)  */
  real_T Solver_o1[12];                /* '<S2>/Solver' (Output 1)  */
  real_T Solver_o2[12];                /* '<S2>/Solver' (Output 2)  */
  real_T Solver_o3[12];                /* '<S2>/Solver' (Output 3)  */
  real_T Solver_o4[12];                /* '<S2>/Solver' (Output 4)  */
  real_T Solver_o5[2];                 /* '<S2>/Solver' (Output 5)  */
  real_T Solver_o6[4];                 /* '<S2>/Solver' (Output 6)  */
  real_T Switch_p[12];                 /* '<S3>/Switch' (Output 1)  */
  real_T const1[12];                   /* '<S8>/const 1' (Output 1)  */
  real_T Divide1[12];                  /* '<S8>/Divide1' (Output 1)  */
  real_T Switch_h[12];                 /* '<S11>/Switch' (Output 1)  */
  real_T Detected[12];                 /* '<S9>/Detected' (Output 1)  */
  real_T y[12];                        /* '<S8>/MATLAB Function' (Output 1)  */
  real_T SFunction_g;                  /* '<S1>/S-Function' (Output 1)  */
  real_T DiscreteTimeIntegrator[12];
                               /* '<S8>/Discrete-Time Integrator' (Output 1)  */
  real_T Clock;                        /* '<S6>/Clock' (Output 1)  */
  real_T DataTypeConversion3[12];/* '<S11>/Data Type Conversion3' (Output 1)  */
  real_T ToHold[12];                   /* '<S9>/To Hold' (Output 1)  */
  real_T sw_Q1[12];                    /* '<S8>/sw_Q1' (Output 1)  */
  int8_T DataTypeConversion2[12];/* '<S11>/Data Type Conversion2' (Output 1)  */
  boolean_T Boolean;                   /* '<S3>/Boolean' (Output 1)  */
  boolean_T RESET;                     /* '<S9>/RESET' (Output 1)  */
  boolean_T RelationalOperator;     /* '<S6>/Relational Operator' (Output 1)  */
  boolean_T ToRESET[12];               /* '<S9>/To RESET' (Output 1)  */
} B_phasor08_ieee13_1_sm_master_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DelayToavoidalgebraicloop_DSTAT[12];
                           /* '<S3>/Delay To avoid algebraic loop' (DWork 1)  */
  real_T DiscreteTimeIntegrator_DSTATE[12];
                                /* '<S8>/Discrete-Time Integrator' (DWork 1)  */
  real_T SFunction_PreviousInput;      /* '<S1>/S-Function' (DWork 1)  */
  real_T ToHold_PreviousInput[12];     /* '<S9>/To Hold' (DWork 1)  */
  int_T SFunction_IWORK[5];            /* '<S19>/S-Function' (DWork 1)  */
  int8_T DiscreteTimeIntegrator_PrevRese[12];
                                /* '<S8>/Discrete-Time Integrator' (DWork 2)  */
} DW_phasor08_ieee13_1_sm_master_T;

/* Backward compatible GRT Identifiers */
#define rtB                            phasor08_ieee13_1_sm_master_B
#define BlockIO                        B_phasor08_ieee13_1_sm_master_T
#define rtP                            phasor08_ieee13_1_sm_master_P
#define Parameters                     P_phasor08_ieee13_1_sm_master_T
#define rtDWork                        phasor08_ieee13_1_sm_master_DW
#define D_Work                         DW_phasor08_ieee13_1_sm_master_T

/* Parameters (default storage) */
struct P_phasor08_ieee13_1_sm_master_T_ {
  real_T Solver_P2_Size[2];            /* Computed Parameter: Solver_P2_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P2Size)
                                        */
  real_T Ts;                           /* Variable: Ts
                                        * Referenced by:
                                        *   '<S2>/Solver' (Parameter: P2)
                                        *   '<S5>/Constant' (Parameter: Value)
                                        *   '<S6>/Constant' (Parameter: Value)
                                        */
  real_T InverseTimeOvercurrentRelay_Ipc[12];
                              /* Mask Parameter: InverseTimeOvercurrentRelay_Ipc
                               * Referenced by:
                               *   '<S3>/Switch' (Parameter: Threshold)
                               *   '<S8>/const 1 1' (Parameter: Value)
                               */
  real_T u1PH_Qic[12];                 /* Mask Parameter: u1PH_Qic
                                        * Referenced by: '<S8>/const 1' (Parameter: Value)
                                        */
  real_T u1PH_SW1;                     /* Mask Parameter: u1PH_SW1
                                        * Referenced by: '<S8>/const 2' (Parameter: Value)
                                        */
  real_T InverseTimeOvercurrentRelay_TD5[12];
                              /* Mask Parameter: InverseTimeOvercurrentRelay_TD5
                               * Referenced by: '<S8>/timedial' (Parameter: Gain)
                               */
  real_T u1PH_Treshold[12];            /* Mask Parameter: u1PH_Treshold
                                        * Referenced by: '<S8>/const 1 ' (Parameter: Value)
                                        */
  real_T SFunction1_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/S-Function1' (Parameter: Value)
                                        */
  real_T SFunction_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/S-Function' (Parameter: InitialCondition)
                                        */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S12>/S-Function' (Parameter: P1Size)
                                        */
  real_T SFunction_P1;                 /* Expression: Data_width
                                        * Referenced by: '<S12>/S-Function' (Parameter: P1)
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S12>/S-Function' (Parameter: P2Size)
                                        */
  real_T SFunction_P2[17];             /* Expression: InitialConditions
                                        * Referenced by: '<S12>/S-Function' (Parameter: P2)
                                        */
  real_T DelayToavoidalgebraicloop_Initi;/* Expression: 0.0
                                          * Referenced by: '<S3>/Delay To avoid algebraic loop' (Parameter: InitialCondition)
                                          */
  real_T Solver_P1_Size[2];            /* Computed Parameter: Solver_P1_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P1Size)
                                        */
  real_T Solver_P1[6];                 /* Computed Parameter: Solver_P1
                                        * Referenced by: '<S2>/Solver' (Parameter: P1)
                                        */
  real_T Solver_P3_Size[2];            /* Computed Parameter: Solver_P3_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P3Size)
                                        */
  real_T Solver_P3[19];                /* Computed Parameter: Solver_P3
                                        * Referenced by: '<S2>/Solver' (Parameter: P3)
                                        */
  real_T Solver_P4_Size[2];            /* Computed Parameter: Solver_P4_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P4Size)
                                        */
  real_T Solver_P4;                    /* Expression: np
                                        * Referenced by: '<S2>/Solver' (Parameter: P4)
                                        */
  real_T Solver_P5_Size[2];            /* Computed Parameter: Solver_P5_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P5Size)
                                        */
  real_T Solver_P5[4];                 /* Computed Parameter: Solver_P5
                                        * Referenced by: '<S2>/Solver' (Parameter: P5)
                                        */
  real_T Solver_P6_Size[2];            /* Computed Parameter: Solver_P6_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P6Size)
                                        */
  real_T Solver_P7_Size[2];            /* Computed Parameter: Solver_P7_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P7Size)
                                        */
  real_T Solver_P7[9];                 /* Computed Parameter: Solver_P7
                                        * Referenced by: '<S2>/Solver' (Parameter: P7)
                                        */
  real_T Solver_P8_Size[2];            /* Computed Parameter: Solver_P8_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P8Size)
                                        */
  real_T Solver_P8[8];                 /* Computed Parameter: Solver_P8
                                        * Referenced by: '<S2>/Solver' (Parameter: P8)
                                        */
  real_T Solver_P9_Size[2];            /* Computed Parameter: Solver_P9_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P9Size)
                                        */
  real_T Solver_P9;                    /* Expression: exporty
                                        * Referenced by: '<S2>/Solver' (Parameter: P9)
                                        */
  real_T Solver_P10_Size[2];           /* Computed Parameter: Solver_P10_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P10Size)
                                        */
  real_T Solver_P10;                   /* Expression: builtin
                                        * Referenced by: '<S2>/Solver' (Parameter: P10)
                                        */
  real_T Solver_P11_Size[2];           /* Computed Parameter: Solver_P11_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P11Size)
                                        */
  real_T Solver_P11;                   /* Expression: logging
                                        * Referenced by: '<S2>/Solver' (Parameter: P11)
                                        */
  real_T Solver_P12_Size[2];           /* Computed Parameter: Solver_P12_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P12Size)
                                        */
  real_T Solver_P12;                   /* Expression: sim_mode
                                        * Referenced by: '<S2>/Solver' (Parameter: P12)
                                        */
  real_T Solver_P13_Size[2];           /* Computed Parameter: Solver_P13_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P13Size)
                                        */
  real_T Solver_P13;                   /* Expression: pf_max_it
                                        * Referenced by: '<S2>/Solver' (Parameter: P13)
                                        */
  real_T Solver_P14_Size[2];           /* Computed Parameter: Solver_P14_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P14Size)
                                        */
  real_T Solver_P14;                   /* Expression: pf_tol_v
                                        * Referenced by: '<S2>/Solver' (Parameter: P14)
                                        */
  real_T Solver_P15_Size[2];           /* Computed Parameter: Solver_P15_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P15Size)
                                        */
  real_T Solver_P15;                   /* Expression: pf_flat_start
                                        * Referenced by: '<S2>/Solver' (Parameter: P15)
                                        */
  real_T Solver_P16_Size[2];           /* Computed Parameter: Solver_P16_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P16Size)
                                        */
  real_T Solver_P16;                   /* Expression: pf_smart_start
                                        * Referenced by: '<S2>/Solver' (Parameter: P16)
                                        */
  real_T Solver_P17_Size[2];           /* Computed Parameter: Solver_P17_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P17Size)
                                        */
  real_T Solver_P17;                   /* Expression: pf_export
                                        * Referenced by: '<S2>/Solver' (Parameter: P17)
                                        */
  real_T Solver_P18_Size[2];           /* Computed Parameter: Solver_P18_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P18Size)
                                        */
  real_T Solver_P18;                   /* Expression: optim_threads
                                        * Referenced by: '<S2>/Solver' (Parameter: P18)
                                        */
  real_T Solver_P19_Size[2];           /* Computed Parameter: Solver_P19_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P19Size)
                                        */
  real_T Solver_P19;                   /* Expression: script_activate_postinit
                                        * Referenced by: '<S2>/Solver' (Parameter: P19)
                                        */
  real_T Solver_P20_Size[2];           /* Computed Parameter: Solver_P20_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P20Size)
                                        */
  real_T Solver_P21_Size[2];           /* Computed Parameter: Solver_P21_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P21Size)
                                        */
  real_T Solver_P21;                   /* Expression: perflog_on
                                        * Referenced by: '<S2>/Solver' (Parameter: P21)
                                        */
  real_T Solver_P22_Size[2];           /* Computed Parameter: Solver_P22_Size
                                        * Referenced by: '<S2>/Solver' (Parameter: P22Size)
                                        */
  real_T SFunction_P1_Size_i[2];      /* Computed Parameter: SFunction_P1_Size_i
                                       * Referenced by: '<S19>/S-Function' (Parameter: P1Size)
                                       */
  real_T SFunction_P1_d;               /* Expression: Acqu_group
                                        * Referenced by: '<S19>/S-Function' (Parameter: P1)
                                        */
  real_T u_Value[12];                  /* Expression: zeros(1,N)
                                        * Referenced by: '<S8>/0' (Parameter: Value)
                                        */
  real_T u_Value_p[12];                /* Expression: ones(1,N)
                                        * Referenced by: '<S8>/1' (Parameter: Value)
                                        */
  real_T Zero_Value[12];               /* Expression: zeros(1,N)
                                        * Referenced by: '<S3>/Zero' (Parameter: Value)
                                        */
  real_T One_Value[12];                /* Expression: ones(1,N)
                                        * Referenced by: '<S3>/One' (Parameter: Value)
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S8>/Discrete-Time Integrator' (Parameter: gainval)
                            */
  real_T DiscreteTimeIntegrator_UpperSat;/* Expression: 1e6
                                          * Referenced by: '<S8>/Discrete-Time Integrator' (Parameter: UpperSaturationLimit)
                                          */
  real_T DiscreteTimeIntegrator_LowerSat;/* Expression: 0
                                          * Referenced by: '<S8>/Discrete-Time Integrator' (Parameter: LowerSaturationLimit)
                                          */
  real_T const_Value[12];              /* Expression: ones(1,N)
                                        * Referenced by: '<S8>/const' (Parameter: Value)
                                        */
  real_T abc_coff_Value[3];            /* Expression: abc
                                        * Referenced by: '<S3>/abc_coff' (Parameter: Value)
                                        */
  real_T Constant_Value[12];           /* Expression: ones(1,N)
                                        * Referenced by: '<S11>/Constant' (Parameter: Value)
                                        */
  real_T Constant1_Value[12];          /* Expression: zeros(1,N)
                                        * Referenced by: '<S11>/Constant1' (Parameter: Value)
                                        */
  real_T sw_Q1_Threshold;              /* Expression: 1
                                        * Referenced by: '<S8>/sw_Q1' (Parameter: Threshold)
                                        */
  real_T Constant_Value_e[12];         /* Expression: ones(1,N)
                                        * Referenced by: '<S9>/Constant' (Parameter: Value)
                                        */
  real_T ToHold_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S9>/To Hold' (Parameter: InitialCondition)
                                        */
  real_T Detected_Threshold;           /* Expression: 0
                                        * Referenced by: '<S9>/Detected' (Parameter: Threshold)
                                        */
  int8_T Switch1_Threshold;            /* Computed Parameter: Switch1_Threshold
                                        * Referenced by: '<S11>/Switch1' (Parameter: Threshold)
                                        */
  int8_T Switch_Threshold;             /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S11>/Switch' (Parameter: Threshold)
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_phasor08_ieee13_1_sm_master_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[3];
    SimStruct *childSFunctionPtrs[3];
    struct _ssBlkInfo2 blkInfo2[3];
    struct _ssSFcnModelMethods2 methods2[3];
    struct _ssSFcnModelMethods3 methods3[3];
    struct _ssSFcnModelMethods4 methods4[3];
    struct _ssStatesInfo2 statesInfo2[3];
    ssPeriodicStatesInfo periodicStatesInfo[3];
    struct _ssPortInfo2 inputOutputPortInfo2[3];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[4];
      struct _ssInPortUnit inputPortUnits[4];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[4];
      struct _ssPortOutputs outputPortInfo[6];
      struct _ssOutPortUnit outputPortUnits[6];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[6];
      uint_T attribs[22];
      mxArray *params[22];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[66];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;
  } NonInlinedSFcns;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T CTOutputIncnstWithState;
    void *dwork;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_phasor08_ieee13_1_sm_master_T phasor08_ieee13_1_sm_master_P;

/* Block signals (default storage) */
extern B_phasor08_ieee13_1_sm_master_T phasor08_ieee13_1_sm_master_B;

/* Block states (default storage) */
extern DW_phasor08_ieee13_1_sm_master_T phasor08_ieee13_1_sm_master_DW;

/*====================*
 * External functions *
 *====================*/
extern phasor08_ieee13_1_sm_master_rtModel *phasor08_ieee13_1_sm_master(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_phasor08_ieee13_1_sm_master_T *const
  phasor08_ieee13_1_sm_master_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'phasor08_ieee13_1_sm_master'
 * '<S1>'   : 'phasor08_ieee13_1_sm_master/OpCCode_do_not_touch'
 * '<S2>'   : 'phasor08_ieee13_1_sm_master/Sm_master'
 * '<S3>'   : 'phasor08_ieee13_1_sm_master/Sm_master/Inverse Time Overcurrent Relay'
 * '<S4>'   : 'phasor08_ieee13_1_sm_master/Sm_master/OpComm'
 * '<S5>'   : 'phasor08_ieee13_1_sm_master/Sm_master/Subsystem'
 * '<S6>'   : 'phasor08_ieee13_1_sm_master/Sm_master/Subsystem2'
 * '<S7>'   : 'phasor08_ieee13_1_sm_master/Sm_master/rtlab_send_subsystem'
 * '<S8>'   : 'phasor08_ieee13_1_sm_master/Sm_master/Inverse Time Overcurrent Relay/51PH'
 * '<S9>'   : 'phasor08_ieee13_1_sm_master/Sm_master/Inverse Time Overcurrent Relay/SR FLIPFLOP'
 * '<S10>'  : 'phasor08_ieee13_1_sm_master/Sm_master/Inverse Time Overcurrent Relay/51PH/MATLAB Function'
 * '<S11>'  : 'phasor08_ieee13_1_sm_master/Sm_master/Inverse Time Overcurrent Relay/51PH/SW'
 * '<S12>'  : 'phasor08_ieee13_1_sm_master/Sm_master/OpComm/Receive'
 * '<S13>'  : 'phasor08_ieee13_1_sm_master/Sm_master/OpComm/busStruct'
 * '<S14>'  : 'phasor08_ieee13_1_sm_master/Sm_master/OpComm/busStruct/Sub1'
 * '<S15>'  : 'phasor08_ieee13_1_sm_master/Sm_master/OpComm/busStruct/Sub2'
 * '<S16>'  : 'phasor08_ieee13_1_sm_master/Sm_master/OpComm/busStruct/Sub3'
 * '<S17>'  : 'phasor08_ieee13_1_sm_master/Sm_master/OpComm/busStruct/Sub4'
 * '<S18>'  : 'phasor08_ieee13_1_sm_master/Sm_master/rtlab_send_subsystem/Subsystem2'
 * '<S19>'  : 'phasor08_ieee13_1_sm_master/Sm_master/rtlab_send_subsystem/Subsystem2/Send2'
 */
#endif                           /* RTW_HEADER_phasor08_ieee13_1_sm_master_h_ */

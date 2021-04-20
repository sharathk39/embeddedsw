/******************************************************************************
* Copyright (C) 2021 Xilinx, Inc.  All rights reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/

/*****************************************************************************/
/**
*
* @file xdfeccf_hw.h
* @addtogroup dfeccf_v1_0
* @{
*
* Contains the register definitions for xdfeccf. This is
* created to be used initially while waiting for IP.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who    Date     Changes
* ----- ---    -------- -----------------------------------------------
* 1.0   dc     10/27/20 Initial version
*       dc     02/08/21 align driver to curent specification
*       dc     03/16/21 update activate & deactivate api
*       dc     03/25/21 Device tree item name change
*       dc     04/20/21 Doxygen documentation update
*
* </pre>
*
******************************************************************************/
#ifndef XDFECCF_HW_H_
#define XDFECCF_HW_H_

#ifdef __cplusplus
extern "C" {
#endif

/**************************** Definitions *******************************/
/* CORE functionality */
#define XDFECCF_VERSION_OFFSET 0x00U /**< Register offset */
#define XDFECCF_VERSION_PATCH_WIDTH 8U
#define XDFECCF_VERSION_PATCH_OFFSET 0U
#define XDFECCF_VERSION_REVISION_WIDTH 8U
#define XDFECCF_VERSION_REVISION_OFFSET 8U
#define XDFECCF_VERSION_MINOR_WIDTH 8U
#define XDFECCF_VERSION_MINOR_OFFSET 16U
#define XDFECCF_VERSION_MAJOR_WIDTH 8U
#define XDFECCF_VERSION_MAJOR_OFFSET 24U

#define XDFECCF_RESET_OFFSET 0x04U /**< Register offset */
#define XDFECCF_RESET_OFF 0x00U
#define XDFECCF_RESET_ON 0x01U
#define XDFECCF_MODEL_PARAM_OFFSET 0x08U /**< Register offset */
#define XDFECCF_MODEL_PARAM_RESERVED_WIDTH 1U
#define XDFECCF_MODEL_PARAM_RESERVED_OFFSET 0U
#define XDFECCF_MODEL_PARAM_NUM_ANTENNA_WIDTH 4U
#define XDFECCF_MODEL_PARAM_NUM_ANTENNA_OFFSET 4U
#define XDFECCF_MODEL_PARAM_NUM_CC_PER_ANTENNA_WIDTH 4U
#define XDFECCF_MODEL_PARAM_NUM_CC_PER_ANTENNA_OFFSET 8U
#define XDFECCF_MODEL_PARAM_ANTENNA_INTERLEAVE_WIDTH 3U
#define XDFECCF_MODEL_PARAM_ANTENNA_INTERLEAVE_OFFSET 12U
#define XDFECCF_GAIN_STG_EN_OFFSET 0x0C /**< Register offset */
#define XDFECCF_GAIN_STG_EN_DISABLED 0x00
#define XDFECCF_GAIN_STG_EN_ENABLED 0x01

/* State */
#define XDFECCF_STATE_OPERATIONAL_OFFSET 0x10U /**< Register offset */
#define XDFECCF_STATE_OPERATIONAL_BITFIELD_WIDTH 1U
#define XDFECCF_STATE_OPERATIONAL_BITFIELD_OFFSET 0U
#define XDFECCF_STATE_OPERATIONAL_NO 0U
#define XDFECCF_STATE_OPERATIONAL_YES 1U
#define XDFECCF_STATE_LOW_POWER_OFFSET 0x14U /**< Register offset */

/* Triggers */
#define XDFECCF_TRIGGERS_ACTIVATE_OFFSET 0x20U /**< Register offset */
#define XDFECCF_TRIGGERS_LOW_POWER_OFFSET 0x28U /**< Register offset */
#define XDFECCF_TRIGGERS_CC_UPDATE_OFFSET 0x2CU /**< Register offset */
/* Bit fields */
#define XDFECCF_TRIGGERS_ENABLE_WIDTH 1U
#define XDFECCF_TRIGGERS_ENABLE_OFFSET 0U
#define XDFECCF_TRIGGERS_ENABLE_DISABLED 0U
#define XDFECCF_TRIGGERS_ENABLE_ENABLED 1U
#define XDFECCF_TRIGGERS_SOURCE_WIDTH 2U
#define XDFECCF_TRIGGERS_SOURCE_OFFSET 4U
#define XDFECCF_TRIGGERS_SIGNAL_EDGE_WIDTH 2U
#define XDFECCF_TRIGGERS_SIGNAL_EDGE_OFFSET 8U
#define XDFECCF_TRIGGERS_ONE_SHOT_WIDTH 1U
#define XDFECCF_TRIGGERS_ONE_SHOT_OFFSET 12U
#define XDFECCF_TRIGGERS_ONE_SHOT_CONTINUOUS 0U
#define XDFECCF_TRIGGERS_ONE_SHOT_ONESHOT 1U
#define XDFECCF_TRIGGERS_TUSER_BIT_WIDTH 8U
#define XDFECCF_TRIGGERS_TUSER_BIT_OFFSET 16U

/* IRQ status */
#define XDFECCF_ISR 0x40U /**< Register offset */
#define XDFECCF_ISR_HAS_NOT_OCCURRED 0U
#define XDFECCF_ISR_OCCURRED 1U
#define XDFECCF_IER 0x44U /**< Register offset */
#define XDFECCF_IER_NO_CHANGE 0U
#define XDFECCF_IER_SET_BIT 1U
#define XDFECCF_IDR 0x48U /**< Register offset */
#define XDFECCF_IDR_NO_CHANGE 0U
#define XDFECCF_IDR_SET_BIT 1U
#define XDFECCF_IMR 0x4CU /**< Register offset */
#define XDFECCF_IMR_INTERRUPT 0U
#define XDFECCF_IMR_NO_INTERRUPT 1U

#define XDFECCF_OVERFLOW_WIDTH 1U
#define XDFECCF_OVERFLOW_OFFSET 0U
#define XDFECCF_CC_UPDATE_TRIGGERED_WIDTH 1U
#define XDFECCF_CC_UPDATE_TRIGGERED_OFFSET 1U
#define XDFECCF_CC_SEQUENCE_ERROR_WIDTH 1U
#define XDFECCF_CC_SEQUENCE_ERROR_OFFSET 2U
#define XDFECCF_IRQ_FLAGS_MASK 0x7U

#define XDFECCF_OVERFLOW 0x50U /**< Register offset */
#define XDFECCF_OVERFLOW_BEFORE_GAIN_REAL_WIDTH 1U
#define XDFECCF_OVERFLOW_BEFORE_GAIN_REAL_OFFSET 0U
#define XDFECCF_OVERFLOW_BEFORE_GAIN_IMAG_WIDTH 1U
#define XDFECCF_OVERFLOW_BEFORE_GAIN_IMAG_OFFSET 1U
#define XDFECCF_OVERFLOW_AFTER_GAIN_REAL_WIDTH 1U
#define XDFECCF_OVERFLOW_AFTER_GAIN_REAL_OFFSET 4U
#define XDFECCF_OVERFLOW_AFTER_GAIN_IMAG_WIDTH 1U
#define XDFECCF_OVERFLOW_AFTER_GAIN_IMAG_OFFSET 5U
#define XDFECCF_ANTENNA_WIDTH 4U
#define XDFECCF_ANTENNA_OFFSET 8U
#define XDFECCF_CCID_WIDTH 4U
#define XDFECCF_CCID_OFFSET 12U

/* CC Configuration */
#define XDFECCF_SEQUENCE_LENGTH_CURRENT 0x1000U /**< Register offset */
#define XDFECCF_SEQUENCE_LENGTH_NEXT 0x1004U /**< Register offset */
#define XDFECCF_SEQUENCE_CURRENT 0x1100U /**< Register offset */
#define XDFECCF_SEQUENCE_NEXT 0x1140U /**< Register offset */
#define XDFECCF_CARRIER_CONFIGURATION_CURRENT 0x1200U /**< Register offset */
#define XDFECCF_CARRIER_CONFIGURATION_NEXT 0x1240U /**< Register offset */
#define XDFECCF_ENABLE_WIDTH 1U
#define XDFECCF_ENABLE_OFFSET 0U
#define XDFECCF_ENABLE_DISABLED 0U
#define XDFECCF_ENABLE_ENABLED 1U
#define XDFECCF_FLUSH_WIDTH 1U
#define XDFECCF_FLUSH_OFFSET 1U
#define XDFECCF_MAPPED_ID_WIDTH 4U
#define XDFECCF_MAPPED_ID_OFFSET 4U
#define XDFECCF_RE_COEFF_SET_WIDTH 3U
#define XDFECCF_RE_COEFF_SET_OFFSET 8U
#define XDFECCF_IM_COEFF_SET_WIDTH 3U
#define XDFECCF_IM_COEFF_SET_OFFSET 12U
#define XDFECCF_GAIN_WIDTH 16U
#define XDFECCF_GAIN_OFFSET 16U
#define XDFECCF_ANTENNA_CONFIGURATION_CURRENT 0x1300U /**< Register offset */
#define XDFECCF_ANTENNA_CONFIGURATION_NEXT 0x1304U /**< Register offset */

/* Filter */
#define XDFECCF_COEFF_LOAD 0x3000U /**< Register offset */
#define XDFECCF_STATUS_WIDTH 1U
#define XDFECCF_STATUS_OFFSET 0U
#define XDFECCF_STATUS_NOT_LOADING 0U
#define XDFECCF_STATUS_LOADING 1U
#define XDFECCF_SET_NUM_WIDTH 3U
#define XDFECCF_SET_NUM_OFFSET 8U
#define XDFECCF_COEFF_CFG 0x3004U /**< Register offset */
#define XDFECCF_NUMBER_UNITS_WIDTH 6U
#define XDFECCF_NUMBER_UNITS_OFFSET 0U
#define XDFECCF_SHIFT_VALUE_WIDTH 4U
#define XDFECCF_SHIFT_VALUE_OFFSET 8U
#define XDFECCF_IS_SYMMETRIC_WIDTH 1U
#define XDFECCF_IS_SYMMETRIC_OFFSET 12U
#define XDFECCF_USE_ODD_TAPS_WIDTH 1U
#define XDFECCF_USE_ODD_TAPS_OFFSET 16U
#define XDFECCF_COEFF_VALUE 0x3400U /**< Register offset */
#define XDFECCF_COEFF_VALUE_WIDTH 15U
#define XDFECCF_COEFF_VALUE_OFFSET 0U

#ifdef __cplusplus
}
#endif

#endif
/** @} */

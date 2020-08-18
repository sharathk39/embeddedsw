/******************************************************************************
*
* Copyright (C) 2005 - 2019 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMANGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*
******************************************************************************/

/*****************************************************************************/
/**
* @file xaie2gbl_reginit.c
* @{
*
* This file contains the instances of the register bit field definitions for the
* Core, Memory, NoC and PL module registers.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who     Date     Changes
* ----- ------  -------- -----------------------------------------------------
* 1.0   Tejus   07/30/2019  Initial creation
* 1.1   Tejus   10/21/2019  Optimize stream switch data structures
* </pre>
*
******************************************************************************/

/***************************** Include Files *********************************/
#include "xaiegbl.h"
#include "xaiemlgbl_params.h"

/************************** Constant Definitions *****************************/

/**************************** Type Definitions *******************************/

/**************************** Macro Definitions ******************************/

/************************** Variable Definitions *****************************/
/*
 * Global instance for Core module Core_Control register.
 */
const static XAie_RegCoreCtrl Aie2CoreCtrlReg =
{
	XAIE2GBL_CORE_MODULE_CORE_CONTROL,
	{XAIE2GBL_CORE_MODULE_CORE_CONTROL_ENABLE_LSB, XAIE2GBL_CORE_MODULE_CORE_CONTROL_ENABLE_MASK},
	{XAIE2GBL_CORE_MODULE_CORE_CONTROL_RESET_LSB, XAIE2GBL_CORE_MODULE_CORE_CONTROL_RESET_MASK}
};

/*
 * Global instance for Core module Core_Status register.
 */
const static XAie_RegCoreSts Aie2CoreStsReg =
{
	XAIE2GBL_CORE_MODULE_CORE_STATUS,
	{XAIE2GBL_CORE_MODULE_CORE_STATUS_CORE_DONE_LSB, XAIE2GBL_CORE_MODULE_CORE_STATUS_CORE_DONE_MASK},
	{XAIE2GBL_CORE_MODULE_CORE_STATUS_RESET_LSB, XAIE2GBL_CORE_MODULE_CORE_STATUS_RESET_MASK},
	{XAIE2GBL_CORE_MODULE_CORE_STATUS_ENABLE_LSB, XAIE2GBL_CORE_MODULE_CORE_STATUS_ENABLE_MASK}
};

/* Data structure to capture register offsets and masks for Mem Tile Dma */
const static XAie_DmaBdProp Aie2MemTileDmaProp =
{
	.BaseAddr.Idx = 1,
	.BaseAddr.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_1_BASE_ADDRESS_LSB,
	.BaseAddr.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_1_BASE_ADDRESS_MASK,
	.BufferLen.Idx = 0,
	.BufferLen.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_0_BUFFER_LENGTH_LSB,
	.BufferLen.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_0_BUFFER_LENGTH_MASK,
	.EnCompression.Idx = 4,
	.EnCompression.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_4_ENABLE_COMPRESSION_LSB,
	.EnCompression.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_4_ENABLE_COMPRESSION_MASK,
	.EnPkt.Idx = 0,
	.EnPkt.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_0_ENABLE_PACKET_LSB,
	.EnPkt.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_0_ENABLE_PACKET_MASK,
	.OutofOrderBdId.Idx = 0,
	.OutofOrderBdId.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_0_OUT_OF_ORDER_BD_ID_LSB,
	.OutofOrderBdId.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_0_OUT_OF_ORDER_BD_ID_MASK,
	.PktId.Idx = 0,
	.PktId.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_0_PACKET_ID_LSB,
	.PktId.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_0_PACKET_ID_MASK,
	.PktType.Idx = 0,
	.PktType.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_0_PACKET_TYPE_LSB,
	.PktType.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_0_PACKET_TYPE_MASK,
	.D1_StepSize.Idx = 3,
	.D1_StepSize.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_3_D1_STEPSIZE_LSB,
	.D1_StepSize.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_3_D1_STEPSIZE_MASK,
	.D0_StepSize.Idx = 2,
	.D0_StepSize.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_2_D0_STEPSIZE_LSB,
	.D0_StepSize.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_2_D0_STEPSIZE_MASK,
	.D1_Wrap.Idx = 3,
	.D1_Wrap.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_3_D1_WRAP_LSB,
	.D1_Wrap.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_3_D1_WRAP_MASK,
	.D0_Wrap.Idx = 2,
	.D0_Wrap.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_2_D0_WRAP_LSB,
	.D0_Wrap.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_2_D0_WRAP_MASK,
	.D2_StepSize.Idx = 4,
	.D2_StepSize.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_4_D2_STEPSIZE_LSB,
	.D2_StepSize.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_4_D2_STEPSIZE_MASK,
	.IterCurr.Idx = 6,
	.IterCurr.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_6_ITERATION_CURRENT_LSB,
	.IterCurr.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_6_ITERATION_CURRENT_MASK,
	.IterWrap.Idx = 6,
	.IterWrap.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_6_ITERATION_WRAP_LSB,
	.IterWrap.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_6_ITERATION_WRAP_MASK,
	.IterStepSize.Idx = 6,
	.IterStepSize.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_6_ITERATION_STEPSIZE_LSB,
	.IterStepSize.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_6_ITERATION_STEPSIZE_MASK,
	.NxtBd.Idx = 1,
	.NxtBd.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_1_NEXT_BD_LSB,
	.NxtBd.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_1_NEXT_BD_MASK,
	.UseNxtBd.Idx = 1,
	.UseNxtBd.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_1_USE_NEXT_BD_LSB,
	.UseNxtBd.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_1_USE_NEXT_BD_MASK,
	.ValidBd.Idx = 7,
	.ValidBd.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_7_VALID_BD_LSB,
	.ValidBd.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_7_VALID_BD_MASK,
	.LckRelVal.Idx = 7,
	.LckRelVal.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_7_LOCK_REL_VALUE_LSB,
	.LckRelVal.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_7_LOCK_REL_VALUE_MASK,
	.LckRelId.Idx = 7,
	.LckRelId.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_7_LOCK_REL_ID_LSB,
	.LckRelId.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_7_LOCK_REL_ID_MASK,
	.LckAcqEn.Idx = 7,
	.LckAcqEn.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_7_LOCK_ACQ_ENABLE_LSB,
	.LckAcqEn.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_7_LOCK_ACQ_ENABLE_MASK,
	.LckAcqVal.Idx = 7,
	.LckAcqVal.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_7_LOCK_ACQ_VALUE_LSB,
	.LckAcqVal.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_7_LOCK_ACQ_VALUE_MASK,
	.LckAcqId.Idx = 7,
	.LckAcqId.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_7_LOCK_ACQ_ID_LSB,
	.LckAcqId.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_7_LOCK_ACQ_ID_MASK,
	.D0_ZeroBefore.Idx = 1,
	.D0_ZeroBefore.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_1_D0_ZERO_BEFORE_LSB,
	.D0_ZeroBefore.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_1_D0_ZERO_BEFORE_MASK,
	.D1_ZeroBefore.Idx = 3,
	.D1_ZeroBefore.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_3_D1_ZERO_BEFORE_LSB,
	.D1_ZeroBefore.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_3_D1_ZERO_BEFORE_MASK,
	.D2_ZeroBefore.Idx = 4,
	.D2_ZeroBefore.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_4_D2_ZERO_BEFORE_LSB,
	.D2_ZeroBefore.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_4_D2_ZERO_BEFORE_MASK,
	.D0_ZeroAfter.Idx = 5,
	.D0_ZeroAfter.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_5_D0_ZERO_AFTER_LSB,
	.D0_ZeroAfter.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_5_D0_ZERO_AFTER_MASK,
	.D1_ZeroAfter.Idx = 5,
	.D1_ZeroAfter.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_5_D1_ZERO_AFTER_LSB,
	.D1_ZeroAfter.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_5_D1_ZERO_AFTER_MASK,
	.D2_ZeroAfter.Idx = 5,
	.D2_ZeroAfter.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_5_D2_ZERO_AFTER_LSB,
	.D2_ZeroAfter.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_5_D2_ZERO_AFTER_MASK,
	.D2_Wrap.Idx = 4,
	.D2_Wrap.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_4_D2_WRAP_LSB,
	.D2_Wrap.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_4_D2_WRAP_MASK,
	.D3_StepSize.Idx = 5,
	.D3_StepSize.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_5_D3_STEPSIZE_LSB,
	.D3_StepSize.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_5_D3_STEPSIZE_MASK,
};

/* Data structure to capture register offsets and masks for Tile Dma */
const static XAie_DmaBdProp Aie2TileDmaProp =
{
	.BaseAddr.Idx = 0,
	.BaseAddr.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_0_BASE_ADDRESS_LSB,
	.BaseAddr.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_0_BASE_ADDRESS_MASK,
	.BufferLen.Idx = 0,
	.BufferLen.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_0_BUFFER_LENGTH_LSB,
	.BufferLen.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_0_BUFFER_LENGTH_MASK,
	.EnCompression.Idx = 1,
	.EnCompression.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_1_ENABLE_COMPRESSION_LSB,
	.EnCompression.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_1_ENABLE_COMPRESSION_MASK,
	.EnPkt.Idx = 1,
	.EnPkt.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_1_ENABLE_PACKET_LSB,
	.EnPkt.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_1_ENABLE_PACKET_MASK,
	.OutofOrderBdId.Idx = 1,
	.OutofOrderBdId.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_1_OUT_OF_ORDER_BD_ID_LSB,
	.OutofOrderBdId.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_1_OUT_OF_ORDER_BD_ID_MASK,
	.PktId.Idx = 1,
	.PktId.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_1_PACKET_ID_LSB,
	.PktId.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_1_PACKET_ID_MASK,
	.PktType.Idx = 1,
	.PktType.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_1_PACKET_TYPE_LSB,
	.PktType.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_1_PACKET_TYPE_MASK,
	.D1_StepSize.Idx = 2,
	.D1_StepSize.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_2_D1_STEPSIZE_LSB,
	.D1_StepSize.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_2_D1_STEPSIZE_MASK,
	.D0_StepSize.Idx = 2,
	.D0_StepSize.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_2_D0_STEPSIZE_LSB,
	.D0_StepSize.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_2_D0_STEPSIZE_MASK,
	.D1_Wrap.Idx = 3,
	.D1_Wrap.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_3_D1_WRAP_LSB,
	.D1_Wrap.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_3_D1_WRAP_MASK,
	.D0_Wrap.Idx = 3,
	.D0_Wrap.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_3_D0_WRAP_LSB,
	.D0_Wrap.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_3_D0_WRAP_MASK,
	.D2_StepSize.Idx = 3,
	.D2_StepSize.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_3_D2_STEPSIZE_LSB,
	.D2_StepSize.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_3_D2_STEPSIZE_MASK,
	.IterCurr.Idx = 4,
	.IterCurr.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_4_ITERATION_CURRENT_LSB,
	.IterCurr.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_4_ITERATION_CURRENT_MASK,
	.IterWrap.Idx = 4,
	.IterWrap.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_4_ITERATION_WRAP_LSB,
	.IterWrap.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_4_ITERATION_WRAP_MASK,
	.IterStepSize.Idx = 4,
	.IterStepSize.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_4_ITERATION_STEPSIZE_LSB,
	.IterStepSize.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_4_ITERATION_STEPSIZE_MASK,
	.NxtBd.Idx = 5,
	.NxtBd.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_NEXT_BD_LSB,
	.NxtBd.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_NEXT_BD_MASK,
	.UseNxtBd.Idx = 5,
	.UseNxtBd.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_USE_NEXT_BD_LSB,
	.UseNxtBd.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_USE_NEXT_BD_MASK,
	.ValidBd.Idx = 5,
	.ValidBd.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_VALID_BD_LSB,
	.ValidBd.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_VALID_BD_MASK,
	.LckRelVal.Idx = 5,
	.LckRelVal.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_LOCK_REL_VALUE_LSB,
	.LckRelVal.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_LOCK_REL_VALUE_MASK,
	.LckRelId.Idx = 5,
	.LckRelId.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_LOCK_REL_ID_LSB,
	.LckRelId.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_LOCK_REL_ID_MASK,
	.LckAcqEn.Idx = 5,
	.LckAcqEn.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_LOCK_ACQ_ENABLE_LSB,
	.LckAcqEn.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_LOCK_ACQ_ENABLE_MASK,
	.LckAcqVal.Idx = 5,
	.LckAcqVal.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_LOCK_ACQ_VALUE_LSB,
	.LckAcqVal.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_LOCK_ACQ_VALUE_MASK,
	.LckAcqId.Idx = 5,
	.LckAcqId.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_LOCK_ACQ_ID_LSB,
	.LckAcqId.Mask = XAIE2GBL_MEMORY_MODULE_DMA_BD0_5_LOCK_ACQ_ID_MASK,
	.D0_ZeroBefore.Idx = 0,
	.D0_ZeroBefore.Lsb = 0,
	.D0_ZeroBefore.Mask = 0,
	.D1_ZeroBefore.Idx = 0,
	.D1_ZeroBefore.Lsb = 0,
	.D1_ZeroBefore.Mask = 0,
	.D2_ZeroBefore.Idx = 0,
	.D2_ZeroBefore.Lsb = 0,
	.D2_ZeroBefore.Mask = 0,
	.D0_ZeroAfter.Idx = 0,
	.D0_ZeroAfter.Lsb = 0,
	.D0_ZeroAfter.Mask = 0,
	.D1_ZeroAfter.Idx = 0,
	.D1_ZeroAfter.Lsb = 0,
	.D1_ZeroAfter.Mask = 0,
	.D2_ZeroAfter.Idx = 0,
	.D2_ZeroAfter.Lsb = 0,
	.D2_ZeroAfter.Mask = 0,
	.D2_Wrap.Idx = 0,
	.D2_Wrap.Lsb = 0,
	.D2_Wrap.Mask = 0,
	.D3_StepSize.Idx = 0,
	.D3_StepSize.Lsb = 0,
	.D3_StepSize.Mask = 0
};

/* Data structure to capture register offsets and masks for Mem Tile and
 * Tile Dma Channels
 */
const static XAie_DmaChProp Aie2DmaChProp =
{
	.CtrlId.Idx = 0,
	.CtrlId.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_S2MM_0_CTRL_CONTROLLER_ID_LSB,
	.CtrlId.Mask =XAIE2GBL_MEMORY_MODULE_DMA_S2MM_0_CTRL_CONTROLLER_ID_MASK ,
	.EnCompression.Idx = 0,
	.EnCompression.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_S2MM_0_CTRL_DECOMPRESSION_ENABLE_LSB,
	.EnCompression.Mask = XAIE2GBL_MEMORY_MODULE_DMA_S2MM_0_CTRL_DECOMPRESSION_ENABLE_MASK,
	.EnOutofOrder.Idx = 0,
	.EnOutofOrder.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_S2MM_0_CTRL_ENABLE_OUT_OF_ORDER_LSB,
	.EnOutofOrder.Mask = XAIE2GBL_MEMORY_MODULE_DMA_S2MM_0_CTRL_ENABLE_OUT_OF_ORDER_MASK,
	.Reset.Idx = 0,
	.Reset.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_S2MM_0_CTRL_RESET_LSB,
	.Reset.Mask = XAIE2GBL_MEMORY_MODULE_DMA_S2MM_0_CTRL_RESET_MASK,
	.EnToken.Idx = 1,
	.EnToken.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_S2MM_0_START_QUEUE_ENABLE_TOKEN_ISSUE_LSB,
	.EnToken.Mask = XAIE2GBL_MEMORY_MODULE_DMA_S2MM_0_START_QUEUE_ENABLE_TOKEN_ISSUE_MASK,
	.RptCount.Idx = 1,
	.RptCount.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_S2MM_0_START_QUEUE_REPEAT_COUNT_LSB,
	.RptCount.Mask = XAIE2GBL_MEMORY_MODULE_DMA_S2MM_0_START_QUEUE_REPEAT_COUNT_MASK,
	.StartBd.Idx = 1,
	.StartBd.Lsb = XAIE2GBL_MEMORY_MODULE_DMA_S2MM_0_START_QUEUE_START_BD_ID_LSB,
	.StartBd.Mask = XAIE2GBL_MEMORY_MODULE_DMA_S2MM_0_START_QUEUE_START_BD_ID_MASK,
};

/* Tile Dma Module */
const static XAie_DmaMod Aie2TileDmaMod =
{
	.BaseAddr = XAIE2GBL_MEMORY_MODULE_DMA_BD0_0,
	.IdxOffset = 0x20,  	/* This is the offset between each BD */
	.NumBdReg = 6,	  	/* Number of registers for each BD */
	.NumBds = 16,	   	/* Number of BDs for AIE2 Tile DMA */
	.NumLocks = 16,
	.ChCtrlBase = XAIE2GBL_MEMORY_MODULE_DMA_S2MM_0_CTRL,
	.NumChannels = 2,  /* Number of s2mm/mm2s channels */
	.ChIdxOffset = 0x8,  /* This is the offset between each channel */
	.BdProp = &Aie2TileDmaProp,
	.ChProp = &Aie2DmaChProp
};

const static XAie_DmaChProp Aie2MemTileDmaChProp =
{
	.CtrlId.Idx = 0,
	.CtrlId.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_S2MM_0_CTRL_CONTROLLER_ID_LSB,
	.CtrlId.Mask =XAIE2GBL_MEM_TILE_MODULE_DMA_S2MM_0_CTRL_CONTROLLER_ID_MASK ,
	.EnCompression.Idx = 0,
	.EnCompression.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_S2MM_0_CTRL_DECOMPRESSION_ENABLE_LSB,
	.EnCompression.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_S2MM_0_CTRL_DECOMPRESSION_ENABLE_MASK,
	.EnOutofOrder.Idx = 0,
	.EnOutofOrder.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_S2MM_0_CTRL_ENABLE_OUT_OF_ORDER_LSB,
	.EnOutofOrder.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_S2MM_0_CTRL_ENABLE_OUT_OF_ORDER_MASK,
	.Reset.Idx = 0,
	.Reset.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_S2MM_0_CTRL_RESET_LSB,
	.Reset.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_S2MM_0_CTRL_RESET_MASK,
	.EnToken.Idx = 1,
	.EnToken.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_S2MM_0_START_QUEUE_ENABLE_TOKEN_ISSUE_LSB,
	.EnToken.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_S2MM_0_START_QUEUE_ENABLE_TOKEN_ISSUE_MASK,
	.RptCount.Idx = 1,
	.RptCount.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_S2MM_0_START_QUEUE_REPEAT_COUNT_LSB,
	.RptCount.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_S2MM_0_START_QUEUE_REPEAT_COUNT_MASK,
	.StartBd.Idx = 1,
	.StartBd.Lsb = XAIE2GBL_MEM_TILE_MODULE_DMA_S2MM_0_START_QUEUE_START_BD_ID_LSB,
	.StartBd.Mask = XAIE2GBL_MEM_TILE_MODULE_DMA_S2MM_0_START_QUEUE_START_BD_ID_MASK,
};

/* Mem Tile Dma Module */
const static XAie_DmaMod Aie2MemTileDmaMod =
{
	.BaseAddr = XAIE2GBL_MEM_TILE_MODULE_DMA_BD0_0,
	.IdxOffset = 0x20,  /* This is the offset between each BD */
	.NumBdReg = 8,	  /* Number of registers for each BD */
	.NumBds = 48,	   /* Number of BDs for AIE2 Tile DMA */
	.NumLocks = 64,
	.ChCtrlBase = XAIE2GBL_MEM_TILE_MODULE_DMA_S2MM_0_CTRL,
	.NumChannels = 6,  /* number of s2mm/mm2s channels */
	.ChIdxOffset = 0x8,  /* This is the offset between each channel */
	.BdProp = &Aie2MemTileDmaProp,
	.ChProp = &Aie2MemTileDmaChProp
};

/*
 * Array of all Tile Stream Switch Master Config registers
 * The data structure contains number of ports and the register offsets
 */
const static XAie_StrmPort Aie2TileStrmMstr[SS_PORT_TYPE_MAX] =
{
	{	/* Core */
		.NumPorts = 1,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0,
	},
	{	/* DMA */
		.NumPorts = 2,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_DMA0,
	},
	{	/* Ctrl */
		.NumPorts = 1,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_TILE_CTRL,
	},
	{	/* Fifo */
		.NumPorts = 1,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_FIFO0,
	},
	{	/* South */
		.NumPorts = 4,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_SOUTH0,
	},
	{	/* West */
		.NumPorts = 4,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_WEST0,
	},
	{	/* North */
		.NumPorts = 6,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_NORTH0,
	},
	{	/* East */
		.NumPorts = 4,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_EAST0,
	},
	{	/* Trace */
		.NumPorts = 0,
		.PortBaseAddr = 0
	}
};

/*
 * Array of all Tile Stream Switch Slave Config registers
 * The data structure contains number of ports and the register offsets
 */
const static XAie_StrmPort Aie2TileStrmSlv[SS_PORT_TYPE_MAX] =
{
	{	/* Core */
		.NumPorts = 1,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_AIE_CORE0,
	},
	{	/* DMA */
		.NumPorts = 2,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_DMA_0,
	},
	{	/* Ctrl */
		.NumPorts = 1,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_TILE_CTRL,
	},
	{	/* Fifo */
		.NumPorts = 1,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_FIFO_0,
	},
	{	/* South */
		.NumPorts = 6,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_SOUTH_0,
	},
	{	/* West */
		.NumPorts = 4,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_WEST_0,
	},
	{	/* North */
		.NumPorts = 4,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_NORTH_0,
	},
	{	/* East */
		.NumPorts = 4,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_EAST_0,
	},
	{	/* Trace */
		.NumPorts = 1,
		.PortBaseAddr = XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_MEM_TRACE
	}
};

/*
 * Array of all Shim NOC/PL Stream Switch Master Config registers
 * The data structure contains number of ports and the register offsets
 */
const static XAie_StrmPort Aie2ShimStrmMstr[SS_PORT_TYPE_MAX] =
{
	{	/* Core */
		.NumPorts = 0,
		.PortBaseAddr = 0,
	},
	{	/* DMA */
		.NumPorts = 0,
		.PortBaseAddr = 0,
	},
	{	/* Ctrl */
		.NumPorts = 1,
		.PortBaseAddr = XAIE2GBL_PL_MODULE_STREAM_SWITCH_MASTER_CONFIG_TILE_CTRL,
	},
	{	/* Fifo */
		.NumPorts = 1,
		.PortBaseAddr = XAIE2GBL_PL_MODULE_STREAM_SWITCH_MASTER_CONFIG_FIFO0,
	},
	{	/* South */
		.NumPorts = 6,
		.PortBaseAddr = XAIE2GBL_PL_MODULE_STREAM_SWITCH_MASTER_CONFIG_SOUTH0,
	},
	{	/* West */
		.NumPorts = 4,
		.PortBaseAddr = XAIE2GBL_PL_MODULE_STREAM_SWITCH_MASTER_CONFIG_WEST0,
	},
	{	/* North */
		.NumPorts = 6,
		.PortBaseAddr = XAIE2GBL_PL_MODULE_STREAM_SWITCH_MASTER_CONFIG_NORTH0,
	},
	{	/* East */
		.NumPorts = 4,
		.PortBaseAddr = XAIE2GBL_PL_MODULE_STREAM_SWITCH_MASTER_CONFIG_EAST0,
	},
	{	/* Trace */
		.NumPorts = 0,
		.PortBaseAddr = 0
	}
};

/*
 * Array of all Shim NOC/PL Stream Switch Slave Config registers
 * The data structure contains number of ports and the register offsets
 */
const static XAie_StrmPort Aie2ShimStrmSlv[SS_PORT_TYPE_MAX] =
{
	{	/* Core */
		.NumPorts = 0,
		.PortBaseAddr = 0,
	},
	{	/* DMA */
		.NumPorts = 0,
		.PortBaseAddr = 0,
	},
	{	/* Ctrl */
		.NumPorts = 1,
		.PortBaseAddr = XAIE2GBL_PL_MODULE_STREAM_SWITCH_SLAVE_CONFIG_TILE_CTRL,
	},
	{	/* Fifo */
		.NumPorts = 1,
		.PortBaseAddr = XAIE2GBL_PL_MODULE_STREAM_SWITCH_SLAVE_CONFIG_FIFO_0,
	},
	{	/* South */
		.NumPorts = 8,
		.PortBaseAddr = XAIE2GBL_PL_MODULE_STREAM_SWITCH_SLAVE_CONFIG_SOUTH_0,
	},
	{	/* West */
		.NumPorts = 4,
		.PortBaseAddr = XAIE2GBL_PL_MODULE_STREAM_SWITCH_SLAVE_CONFIG_WEST_0,
	},
	{	/* North */
		.NumPorts = 4,
		.PortBaseAddr = XAIE2GBL_PL_MODULE_STREAM_SWITCH_SLAVE_CONFIG_NORTH_0,
	},
	{	/* East */
		.NumPorts = 4,
		.PortBaseAddr = XAIE2GBL_PL_MODULE_STREAM_SWITCH_SLAVE_CONFIG_EAST_0,
	},
	{	/* Trace */
		.NumPorts = 1,
		.PortBaseAddr = XAIE2GBL_PL_MODULE_STREAM_SWITCH_SLAVE_CONFIG_TRACE
	}
};

/*
 * Array of all Mem Tile Stream Switch Master Config registers
 * The data structure contains number of ports and the register offsets
 */
const static XAie_StrmPort Aie2MemTileStrmMstr[SS_PORT_TYPE_MAX] =
{
	{	/* Core */
		.NumPorts = 0,
		.PortBaseAddr = 0,
	},
	{	/* DMA */
		.NumPorts = 6,
		.PortBaseAddr = XAIE2GBL_MEM_TILE_MODULE_STREAM_SWITCH_MASTER_CONFIG_DMA0,
	},
	{	/* Ctrl */
		.NumPorts = 1,
		.PortBaseAddr = XAIE2GBL_MEM_TILE_MODULE_STREAM_SWITCH_MASTER_CONFIG_TILE_CTRL,
	},
	{	/* Fifo */
		.NumPorts = 0,
		.PortBaseAddr = 0,
	},
	{	/* South */
		.NumPorts = 4,
		.PortBaseAddr = XAIE2GBL_MEM_TILE_MODULE_STREAM_SWITCH_MASTER_CONFIG_SOUTH0,
	},
	{	/* West */
		.NumPorts = 0,
		.PortBaseAddr = 0,
	},
	{	/* North */
		.NumPorts = 6,
		.PortBaseAddr = XAIE2GBL_MEM_TILE_MODULE_STREAM_SWITCH_MASTER_CONFIG_NORTH0,
	},
	{	/* East */
		.NumPorts = 0,
		.PortBaseAddr = 0,
	},
	{	/* Trace */
		.NumPorts = 0,
		.PortBaseAddr = 0
	}
};

/*
 * Array of all Mem Tile Stream Switch Slave Config registers
 * The data structure contains number of ports and the register offsets
 */
const static XAie_StrmPort Aie2MemTileStrmSlv[SS_PORT_TYPE_MAX] =
{
	{	/* Core */
		.NumPorts = 0,
		.PortBaseAddr = 0,
	},
	{	/* DMA */
		.NumPorts = 6,
		.PortBaseAddr = XAIE2GBL_MEM_TILE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_DMA_0,
	},
	{	/* Ctrl */
		.NumPorts = 1,
		.PortBaseAddr = XAIE2GBL_MEM_TILE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_TILE_CTRL,
	},
	{	/* Fifo */
		.NumPorts = 0,
		.PortBaseAddr = 0,
	},
	{	/* South */
		.NumPorts = 6,
		.PortBaseAddr = XAIE2GBL_MEM_TILE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_SOUTH_0,
	},
	{	/* West */
		.NumPorts = 0,
		.PortBaseAddr = 0,
	},
	{	/* North */
		.NumPorts = 4,
		.PortBaseAddr = XAIE2GBL_MEM_TILE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_NORTH_0,
	},
	{	/* East */
		.NumPorts = 0,
		.PortBaseAddr = 0,
	},
	{	/* Trace */
		.NumPorts = 1,
		.PortBaseAddr = XAIE2GBL_MEM_TILE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_TRACE
	}
};

/*
 * Data structure to capture all stream configs for XAIEGBL_TILE_TYPE_AIETILE
 */
const static XAie_StrmMod Aie2TileStrmSw =
{
	XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_AIE_CORE0,
	0x4,
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_MASTER_ENABLE_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_MASTER_ENABLE_MASK},
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_PACKET_ENABLE_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_PACKET_ENABLE_MASK},
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_DROP_HEADER_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_DROP_HEADER_MASK},
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_CONFIGURATION_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_CONFIGURATION_MASK},
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_AIE_CORE0_SLAVE_ENABLE_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_AIE_CORE0_SLAVE_ENABLE_MASK},
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_AIE_CORE0_PACKET_ENABLE_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_AIE_CORE0_PACKET_ENABLE_MASK},
	Aie2TileStrmMstr,
	Aie2TileStrmSlv
};

/*
 * Data structure to capture all stream configs for XAIEGBL_TILE_TYPE_SHIMNOC/PL
 */
const static XAie_StrmMod Aie2ShimStrmSw =
{
	XAIE2GBL_PL_MODULE_STREAM_SWITCH_SLAVE_CONFIG_TILE_CTRL,
	0x4,
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_MASTER_ENABLE_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_MASTER_ENABLE_MASK},
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_PACKET_ENABLE_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_PACKET_ENABLE_MASK},
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_DROP_HEADER_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_DROP_HEADER_MASK},
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_CONFIGURATION_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_CONFIGURATION_MASK},
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_AIE_CORE0_SLAVE_ENABLE_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_AIE_CORE0_SLAVE_ENABLE_MASK},
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_AIE_CORE0_PACKET_ENABLE_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_AIE_CORE0_PACKET_ENABLE_MASK},
	Aie2ShimStrmMstr,
	Aie2ShimStrmSlv
};

/*
 * Data structure to capture all stream configs for XAIEGBL_TILE_TYPE_MEMTILE
 */
const static XAie_StrmMod Aie2MemTileStrmSw =
{
	XAIE2GBL_MEM_TILE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_DMA_0,
	0x4,
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_MASTER_ENABLE_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_MASTER_ENABLE_MASK},
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_PACKET_ENABLE_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_PACKET_ENABLE_MASK},
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_DROP_HEADER_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_DROP_HEADER_MASK},
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_CONFIGURATION_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_MASTER_CONFIG_AIE_CORE0_CONFIGURATION_MASK},
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_AIE_CORE0_SLAVE_ENABLE_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_AIE_CORE0_SLAVE_ENABLE_MASK},
	{XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_AIE_CORE0_PACKET_ENABLE_LSB, XAIE2GBL_CORE_MODULE_STREAM_SWITCH_SLAVE_CONFIG_AIE_CORE0_PACKET_ENABLE_MASK},
	Aie2MemTileStrmMstr,
	Aie2MemTileStrmSlv
};

/* Core Module */
const static XAie_CoreMod Aie2CoreMod =
{
	.ProgMemAddr = XAIE2GBL_CORE_MODULE_PROGRAM_MEMORY,
	.CoreCtrl = &Aie2CoreCtrlReg,
	.CoreSts = &Aie2CoreStsReg,
	.CoreMemSize = 0x10000,		/* AIE2 Tile Memory is 64kB */
	.CoreEastAddrStart = 0x70000,
	.CoreEastAddrEnd = 0x7FFFF,
	.CoreWestAddrStart = 0x50000,
	.CoreWestAddrEnd = 0x5FFFF,
	.CoreSouthAddrStart = 0x40000,
	.CoreSouthAddrEnd = 0x4FFFF,
	.CoreNorthAddrStart = 0x60000,
	.CoreNorthAddrEnd = 0x6FFFF,
};

/* Data Memory Module for Tile data memory*/
const static XAie_MemMod Aie2TileMemMod =
{
	.Size = 0x10000,
	.MemAddr = XAIE2GBL_MEMORY_MODULE_DATAMEMORY
};

/* Data Memory Module for Mem Tile data memory*/
const static XAie_MemMod Aie2MemTileMemMod =
{
	.Size = 0x80000,
	.MemAddr = XAIE2GBL_MEM_TILE_MODULE_DATAMEMORY
};

/*
 * AIE2 Module
 * This data structure captures all the modules for each tile type.
 * Depending on the tile type, this data strcuture can be used to access all
 * hardware properties of individual modules.
 */
XAie_TileMod Aie2Mod[] =
{
	{
		/*
		 * AIE2 Tile Module indexed using XAIEGBL_TILE_TYPE_AIETILE
		 */
		.CoreMod = &Aie2CoreMod,
		.StrmSw  = &Aie2TileStrmSw,
		.DmaMod  = &Aie2TileDmaMod,
		.MemMod  = &Aie2TileMemMod,
	},
	{
		/*
		 * AIE2 Shim Noc Module indexed using XAIEGBL_TILE_TYPE_SHIMNOC
		 */
		.CoreMod = NULL,
		.StrmSw  = &Aie2ShimStrmSw,
		.DmaMod  = NULL,
		.MemMod  = NULL,
	},
	{
		/*
		 * AIE2 Shim PL Module indexed using XAIEGBL_TILE_TYPE_SHIMPL
		 */
		.CoreMod = NULL,
		.StrmSw  = &Aie2ShimStrmSw,
		.DmaMod  = NULL,
		.MemMod  = NULL,
	},
	{
		/*
		 * AIE2 MemTile Module indexed using XAIEGBL_TILE_TYPE_MEMTILE
		 */
		.CoreMod = NULL,
		.StrmSw  = &Aie2MemTileStrmSw,
		.DmaMod  = &Aie2MemTileDmaMod,
		.MemMod  = &Aie2MemTileMemMod,
	}
};

/** @} */

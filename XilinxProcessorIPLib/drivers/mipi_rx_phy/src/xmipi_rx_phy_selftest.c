/******************************************************************************
* Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/

/*****************************************************************************/
/**
*
* @file xmipi_rx_phy_selftest.c
*
* @addtogroup mipi_rx_phy Overview
* @{
*
* Contains diagnostic/self-test functions for the XMipi_Rx_Phy component.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver Who Date     Changes
* --- --- -------- ------------------------------------------------------------
* 1.0 pg 16/02/24 Initial release
* </pre>
*
******************************************************************************/

/***************************** Include Files *********************************/

#include "xil_io.h"
#include "xstatus.h"
#include "xmipi_rx_phy.h"

/************************** Constant Definitions *****************************/

/**************************** Type Definitions *******************************/


/***************** Macros (Inline Functions) Definitions *********************/


/************************** Function Prototypes ******************************/


/************************** Variable Definitions *****************************/


/*****************************************************************************/
/**
*
* Runs a self-test on the driver/device. This test checks if HS Timeout value
* present in register matches the one from the generated file.
*
* @param 	InstancePtr is a pointer to the XMipi_Rx_Phy instance.
*
* @return
* 		- XST_SUCCESS if self-test was successful
*		- XST_FAILURE if the read value was not equal to _g.c file
*
* @note 	None.
*
******************************************************************************/
u32 XMipi_Rx_Phy_SelfTest(XMipi_Rx_Phy *InstancePtr)
{
	u32 Result;

	Result = XMipi_Rx_Phy_GetInfo(InstancePtr, XMIPI_RX_PHY_HANDLE_HSTIMEOUT);

	if ((InstancePtr->Config.HSTimeOut) == Result) {
		return XST_SUCCESS;
	}
	else {
		return XST_FAILURE;
	}
}
/** @} */

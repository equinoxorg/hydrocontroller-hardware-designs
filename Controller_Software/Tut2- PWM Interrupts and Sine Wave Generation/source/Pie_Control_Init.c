//###########################################################################
//
// FILE:	F2806x_PieCtrl.c
//
// TITLE:	F2806x Device PIE Control Register Initialization Functions.
//
//###########################################################################
// $TI Release: F2806x C/C++ Header Files and Peripheral Examples V130 $
// $Release Date: November 30, 2011 $
//###########################################################################

#include "F2806x_Device.h"

//---------------------------------------------------------------------------
// InitPieCtrl:
//---------------------------------------------------------------------------
// This function initializes the PIE control registers to a known state.
//
void InitPieCtrl(void)
{
    // Disable Interrupts at the CPU level:
    DINT;

    // Disable the PIE
    PieCtrlRegs.PIECTRL.bit.ENPIE = 0;

	// Clear all PIEIER registers:
	PieCtrlRegs.PIEIER1.all = 0x0000;
	PieCtrlRegs.PIEIER2.all = 0x0000;
	PieCtrlRegs.PIEIER3.all = 0x0000;
	PieCtrlRegs.PIEIER4.all = 0x0000;
	PieCtrlRegs.PIEIER5.all = 0x0000;
	PieCtrlRegs.PIEIER6.all = 0x0000;
	PieCtrlRegs.PIEIER7.all = 0x0000;
	PieCtrlRegs.PIEIER8.all = 0x0000;
	PieCtrlRegs.PIEIER9.all = 0x0000;
	PieCtrlRegs.PIEIER10.all= 0x0000;
	PieCtrlRegs.PIEIER11.all= 0x0000;
	PieCtrlRegs.PIEIER12.all= 0x0000;

	// Clear all PIEIFR registers:
	PieCtrlRegs.PIEIFR1.all = 0x0000;
	PieCtrlRegs.PIEIFR2.all = 0x0000;
	PieCtrlRegs.PIEIFR3.all = 0x0000;
	PieCtrlRegs.PIEIFR4.all = 0x0000;
	PieCtrlRegs.PIEIFR5.all = 0x0000;
	PieCtrlRegs.PIEIFR6.all = 0x0000;
	PieCtrlRegs.PIEIFR7.all = 0x0000;
	PieCtrlRegs.PIEIFR8.all = 0x0000;
	PieCtrlRegs.PIEIFR9.all	= 0x0000;
	PieCtrlRegs.PIEIFR10.all= 0x0000;
	PieCtrlRegs.PIEIFR11.all= 0x0000;
	PieCtrlRegs.PIEIFR12.all= 0x0000;

}

//---------------------------------------------------------------------------
// EnableInterrupts:
//---------------------------------------------------------------------------
// This function enables the PIE module and CPU interrupts
//
void EnableInterrupts(void)
{

    // Enable the PIE
    PieCtrlRegs.PIECTRL.bit.ENPIE = 1;

	// Enables PIE to drive a pulse into the CPU
	PieCtrlRegs.PIEACK.all = 0xFFFF;

	// Enable Interrupts at the CPU level
    EINT;

}

//===========================================================================
// End of file.
//===========================================================================

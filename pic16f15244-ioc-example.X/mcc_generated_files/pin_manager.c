/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.0
        Device            :  PIC16F15244
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.20
        MPLAB             :  MPLAB X 5.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "pin_manager.h"
#include "mcc.h"

void (*IOCCF2_InterruptHandler)(void);

void PIN_MANAGER_Initialize(void)
{
    // LATx registers
    LATA = 0x00;
    LATB = 0x00;
    LATC = 0x00;

    // TRISx registers
    TRISA = 0x3F;
    TRISB = 0xF0;
    TRISC = 0xFE;

    // ANSELx registers
    ANSELC = 0xFB;
    ANSELB = 0xF0;
    ANSELA = 0x37;

    // WPUx registers
    WPUB = 0x00;
    WPUA = 0x00;
    WPUC = 0x04;

    // ODx registers
    ODCONA = 0x00;
    ODCONB = 0x00;
    ODCONC = 0x00;

    // SLRCONx registers
    SLRCONA = 0x37;
    SLRCONB = 0xF0;
    SLRCONC = 0xFF;

    // INLVLx registers
    INLVLA = 0x3F;
    INLVLB = 0xF0;
    INLVLC = 0xFF;

    // IOCx registers 
    IOCCFbits.IOCCF2 = 0;                                                       // Interrupt on change for group IOCCF - flag
    IOCCNbits.IOCCN2 = 1;                                                       // Interrupt on change for group IOCCN - negative
    IOCCPbits.IOCCP2 = 0;                                                       // Interrupt on change for group IOCCP - positive

    IOCCF2_SetInterruptHandler(IOCCF2_DefaultInterruptHandler); 
    PIE0bits.IOCIE = 1;                                                         // Enable IOCI interrupt
    
	// PPS registers
    RC0PPS = 0x05;                                                              // RC0->EUSART1:TX1;    
}
  
void PIN_MANAGER_IOC(void)
{   	
    if(IOCCFbits.IOCCF2 == 1)                                                   // Interrupt on change for pin IOCCF2
    {    
        IOCCF2_ISR(); 
    }	
}

void IOCCF2_ISR(void)                                                           // IOCCF2 Interrupt Service Routine
{
    if(IOCCF2_InterruptHandler)
    {
        IOCCF2_InterruptHandler();
    }
    IOCCFbits.IOCCF2 = 0;
}

void IOCCF2_SetInterruptHandler(void (* InterruptHandler)(void))                // Allows selecting an interrupt handler for IOCCF2 at application runtime
{
    IOCCF2_InterruptHandler = InterruptHandler;
}

void IOCCF2_DefaultInterruptHandler(void)                                       // Default interrupt handler for IOCCF2
{
    printf("Button pressed! \r\n");
}

/**
 End of File
*/
/**
  Generated Pins header File

  Company:
    Microchip Technology Inc.

  File Name:
    pins.h

  Summary:
    This is generated driver header for pins. 

  Description:
    This header file provides APIs for all pins selected in the GUI.

  Generation Information:
    Driver Version:  3.0.0

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

#ifndef PINS_H
#define PINS_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_OD                   ODCONBbits.ODCB5
#define IO_RB5_ANS                  ANSELBbits.ANSB5
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define IO_RB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set IO_RC0 aliases
#define IO_RC0_TRIS                 TRISCbits.TRISC0
#define IO_RC0_LAT                  LATCbits.LATC0
#define IO_RC0_PORT                 PORTCbits.RC0
#define IO_RC0_WPU                  WPUCbits.WPUC0
#define IO_RC0_OD                   ODCONCbits.ODCC0
#define IO_RC0_ANS                  ANSELCbits.ANSC0
#define IO_RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IO_RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IO_RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IO_RC0_GetValue()           PORTCbits.RC0
#define IO_RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IO_RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IO_RC0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define IO_RC0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define IO_RC0_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define IO_RC0_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define IO_RC0_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define IO_RC0_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set IO_RC2 aliases
#define SW0_TRIS                 TRISCbits.TRISC2
#define SW0_LAT                  LATCbits.LATC2
#define SW0_PORT                 PORTCbits.RC2
#define SW0_WPU                  WPUCbits.WPUC2
#define SW0_OD                   ODCONCbits.ODCC2
#define SW0_ANS                  ANSELCbits.ANSC2
#define SW0_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define SW0_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define SW0_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define SW0_GetValue()           PORTCbits.RC2
#define SW0_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define SW0_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define SW0_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define SW0_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define SW0_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define SW0_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define SW0_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define SW0_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the RC2 pin functionality
 * @Example
    RC2_ISR();
 */
void RC2_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for RC2 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for RC2 at application runtime
    
  @Preconditions
    Pins intializer called

  @Returns
    none.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    RC2_SetInterruptHandler(MyInterruptHandler);

*/
void RC2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for RC2 pin

  @Description
    This is a dynamic interrupt handler to be used together with the RC2_SetInterruptHandler() method.
    This handler is called every time the RC2 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pins intializer called

  @Returns
    none.

  @Param
    none.

  @Example
    PIN_MANAGER_Initialize();
    RC2_SetInterruptHandler(IOCCF2_InterruptHandler);

*/
extern void (*RC2_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF2 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF2_SetInterruptHandler() method.
    This handler is called every time the IOCCF2 ISR is executed. 
    
  @Preconditions
    Pins intializer called

  @Returns
    none.

  @Param
    none.

  @Example
    PIN_MANAGER_Initialize();
    RC2_SetInterruptHandler(IOCCF2_DefaultInterruptHandler);

*/
void RC2_DefaultInterruptHandler(void);




#endif // PINS_H
/**
 End of File
*/
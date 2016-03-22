
#ifndef SYSTEM_H
#define SYSTEM_H

#include <xc.h>
#include <stdbool.h>


#include "usb_config.h"

#define MAIN_RETURN void

//fixed_address_memory.h
#define FIXED_ADDRESS_MEMORY

#define KEYBOARD_INPUT_REPORT_DATA_BUFFER_ADDRESS_TAG  @0x240
#define KEYBOARD_OUTPUT_REPORT_DATA_BUFFER_ADDRESS_TAG  @0x248

#define self_power                                      1


/*** System States **************************************************/
typedef enum
{
    SYSTEM_STATE_USB_START,
    SYSTEM_STATE_USB_SUSPEND,
    SYSTEM_STATE_USB_RESUME
} SYSTEM_STATE;

/*********************************************************************
* Function: void SYSTEM_Initialize( SYSTEM_STATE state )
*
* Overview: Initializes the system.
*
* PreCondition: None
*
* Input:  SYSTEM_STATE - the state to initialize the system into
*
* Output: None
*
********************************************************************/
void SYSTEM_Initialize( SYSTEM_STATE state );
/* System Level #define Macros                                                */
/******************************************************************************/

/* TODO Define system operating frequency */

/* Microcontroller MIPs (FCY) */
#define SYS_FREQ        12000000L
#define FCY             SYS_FREQ/4
#define _XTAL_FREQ 12000000

/******************************************************************************/
/* System Function Prototypes                                                 */
/******************************************************************************/

/* Custom oscillator configuration funtions, reset source evaluation
functions, and other non-peripheral microcontroller initialization functions
go here. */

void ConfigureOscillator(void); /* Handles clock switching/osc initialization */





/*********************************************************************
* Function: void SYSTEM_Tasks(void)
*
* Overview: Runs system level tasks that keep the system running
*
* PreCondition: System has been initalized with SYSTEM_Initialize()
*
* Input: None
*
* Output: None
*
********************************************************************/
//void SYSTEM_Tasks(void);
#define SYSTEM_Tasks()

#endif //SYSTEM_H

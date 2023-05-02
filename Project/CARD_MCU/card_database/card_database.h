/*
 * terminal_process.h
 *
 * Created: 02/05/2023 19:51:04
 *  Author: 20101
 */ 


#ifndef TERMINAL_PROCESS_H_
#define TERMINAL_PROCESS_H_

#include "../Common/STD_Types.h"
#include "../ECUAL/eeprom/HEEPROM_Interface.h"
#include "../ECUAL/husart/husart.h"


#define		PIN_LENGTH			5

typedef enum
{
	DATA_SAVED,
	DATA_NSAVED,
	DATA_READ,
	DATA_NREAD	
}EN_TerminalDataState;

typedef enum
{
	PINGET_NOK = 0,
	PINGET_OK

}en_terminalPinGetStatus_t;

typedef enum
{
	PANGET_NOK = 0,
	PANGET_OK

}en_terminalPanGetStatus_t;

typedef enum
{
	PIN_Match_NOK,
	PIN_Match_OK
}en_CardPinMatchError_t;

/*
 * AUTHOR			: Bassel Yasser Mahmoud
 * FUNCTION			: APP_terminalPinGet
 * DESCRIPTION		: Get pin from User within terminal and doing some validation
 * RETURN			: en_terminalPinGetStatus_t {PINGET_NOK or PINGET_OK}
 */
en_terminalPinGetStatus_t APP_terminalPinGet(Uchar8_t* arr);

/*
 * AUTHOR			: Sharpel
 * FUNCTION			: APP_terminalPanGet
 * DESCRIPTION		: Get pan from User within terminal and doing some validation
 * RETURN			: en_terminalPanGetStatus_t {PANGET_NOK or PANGET_OK}
 */
en_terminalPanGetStatus_t APP_terminalPanGet(Uchar8_t* arr);

EN_TerminalDataState SaveCardData(Uchar8_t *CardPan,Uchar8_t *CardPin);

EN_TerminalDataState ReadCardData(Uchar8_t *CardPan,Uchar8_t *CardPin);

en_CardPinMatchError_t CARD_MatchPINs();


#endif /* TERMINAL_PROCESS_H_ */
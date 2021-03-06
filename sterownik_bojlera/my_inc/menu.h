#ifndef MENU_H_
#define MENU_H_

#include "global.h"
#include "mkuart.h"
#include "switches.h"
#include "time.h"

typedef enum
{
	MENU_FIRST_POSITION,
	MENU_TIME_DATE = MENU_FIRST_POSITION,
	MENU_PROGRAM,
	MENU_TARIFF,
	MENU_MANUAL_ON,
	MENU_MANUAL_OFF,
	MENU_DELETE_PROGRAMS,
	
	MENU_LAST_POSITION = MENU_DELETE_PROGRAMS,
///////////////////////////////////////////////////////
	MENU_PROGRAM_MONDAY_ON_HOUR,
	MENU_PROGRAM_MONDAY_OFF_HOUR,

	MENU_PROGRAM_TUESDAY_ON_HOUR,
	MENU_PROGRAM_TUESDAY_OFF_HOUR,

	MENU_PROGRAM_WEDNESDAY_ON_HOUR,
	MENU_PROGRAM_WEDNESDAY_OFF_HOUR,
	
	MENU_PROGRAM_THURSDAY_ON_HOUR,
	MENU_PROGRAM_THURSDAY_OFF_HOUR,

	MENU_PROGRAM_FRIDAY_ON_HOUR,
	MENU_PROGRAM_FRIDAY_OFF_HOUR,

	MENU_PROGRAM_SATURDAY_ON_HOUR,
	MENU_PROGRAM_SATURDAY_OFF_HOUR,

	MENU_PROGRAM_SUNDAY_ON_HOUR,
	MENU_PROGRAM_SUNDAY_OFF_HOUR,
			
	MENU_TIME_DATE_SECOND,
	MENU_TIME_DATE_MINUTE,
	MENU_TIME_DATE_HOUR,
	MENU_TIME_DATE_WEEKDAY,
	MENU_TIME_DATE_DAY,
	MENU_TIME_DATE_MONTH,
	MENU_TIME_DATE_YEARS,

	MENU_TARIFF1_ON_HOUR,
	MENU_TARIFF1_OFF_HOUR,
	MENU_TARIFF1_WEEKDAY_FROM,
	MENU_TARIFF1_WEEKDAY_TO,
	MENU_TARIFF2_ON_HOUR,
	MENU_TARIFF2_OFF_HOUR,
	MENU_TARIFF2_WEEKDAY_FROM,
	MENU_TARIFF2_WEEKDAY_TO,
	MENU_TARIFF3_ON_HOUR,
	MENU_TARIFF3_OFF_HOUR,
	MENU_TARIFF3_WEEKDAY_FROM,
	MENU_TARIFF3_WEEKDAY_TO,
					
	MENU_SAVE,
	MENU_DELETE_CLEAR_EEPROM,
} menu_type_t;

typedef enum
{
	SWITCH_FUNC_NAVI,
	SWITCH_FUNC_REPV
}switch_fun_t;

volatile uint8_t menuActive;
char timeStr[50];

void menuHandler(void);
void menuFunctionHandler(void);
void menuSwitchFunc(void);

#endif /* MENU_H_ */
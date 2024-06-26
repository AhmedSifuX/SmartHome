/***********************************************************************/
/***********************************************************************/
/********************  Author: Ahmed Hany       ************************/
/********************  SWC: KPD             	************************/
/********************  LAYER: HAL               ************************/
/********************  VERSION: 1.0             ************************/
/********************  DATE:7/3/2024            ************************/
/***********************************************************************/
/***********************************************************************/



#ifndef KPD_CONFIG_H_
#define KPD_CONFIG_H_

#define KPD_PORT_ROW   DIO_PORTD
#define KPD_PORT_COL   DIO_PORTD

#define KPD_ROW0   DIO_PIN0
#define KPD_ROW1   DIO_PIN1
#define KPD_ROW2   DIO_PIN2
#define KPD_ROW3   DIO_PIN3

#define KPD_COL0   DIO_PIN4
#define KPD_COL1   DIO_PIN5
#define KPD_COL2   DIO_PIN6
#define KPD_COL3   DIO_PIN7

#define KPD_ROW_NUMBER 4
#define KPD_COL_NUMBER 4


/*
{'7','8','9','/'}
{'4','5','6','x'}
{'1','2','3','-'}
{'C','0','=','+'}
*/
#define KPD_arr  {{'7','8','9','/'},{'4','5','6','X'},{'1','2','3','-'},{'C','0','=','+'}}








#endif
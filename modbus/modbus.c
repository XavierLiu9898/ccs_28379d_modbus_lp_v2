/*
 * modbus.c
 *
 *  Created on: 2024��3��12��
 *      Author: Xavier.
 */


#include "modbus.h"
uint16_t Tx_Buff[16] = {0};


void Test_Sending(void)
{
    char * msg = "Hello!";
    SCI_writeCharArray(sci_modbus_BASE,(uint16_t *)(msg),
                       6);
}

/*
 * ADC.h
 *
 *  Created on: Jun 5, 2020
 *      Author: aknapen, crapp, sdanthinne
 */

#ifndef ADC_H_
#define ADC_H_

#include "msp.h"
#include "delay.h"
#include "uart.h"

#define calibration_slope 201
#define calibration_offset 9300

void setup_ADC();
uint16_t read_ADC();
uint32_t calibrated_adc_voltage(void);

/*
 * Returns a calibrated voltage from adc input in uV
 */
uint32_t calibrated_adc_voltage(void);

uint16_t adc_flag;
uint16_t adc_val;

#endif /* ADC_H_ */

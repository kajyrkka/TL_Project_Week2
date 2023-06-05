/*
 * Copyright (c) 2020 Libre Solar Technologies GmbH
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <zephyr/logging/log.h>
#include <dk_buttons_and_leds.h>
#include <inttypes.h>
#include <stddef.h>
#include <stdint.h>
#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#include <zephyr/sys/util.h>
#include "adc.h"
#include <zephyr/device.h>
#include <zephyr/devicetree.h>



#define USER_LED1         	 	DK_LED1
#define USER_LED2          		DK_LED2
#define USER_LED3               DK_LED3
#define USER_LED4               DK_LED4

#define USER_BUTTON_1           DK_BTN1_MSK
#define USER_BUTTON_2           DK_BTN2_MSK
#define USER_BUTTON_3           DK_BTN3_MSK
#define USER_BUTTON_4           DK_BTN4_MSK

LOG_MODULE_REGISTER(MAIN, LOG_LEVEL_INF);

static void button_changed(uint32_t button_state, uint32_t has_changed)
{
	//printk("button_state = %d\n",button_state);
	//printk("has_changed = %d\n",has_changed);
	if ((has_changed & USER_BUTTON_1) && (button_state & USER_BUTTON_1)) 
	{
		printk("Nappi 1 alhaalla\n");
	}

	if ((has_changed & USER_BUTTON_2) && (button_state & USER_BUTTON_2)) 
	{
		printk("Nappi 2 alhaalla\n");
	}		
	
	if ((has_changed & USER_BUTTON_3) && (button_state & USER_BUTTON_3)) 
	{
		printk("Nappi 3 alhaalla\n");
	}		

	if ((has_changed & USER_BUTTON_4) && (button_state & USER_BUTTON_4)) 
	{
		printk("Nappi 4 alhaalla\n");
	}		
}


void main(void)
{
	int err;
	err = dk_leds_init();
	if (err) {
		LOG_ERR("LEDs init failed (err %d)\n", err);
		return;
	}

	err = dk_buttons_init(button_changed);
	if (err) {
		printk("Cannot init buttons (err: %d)\n", err);
		return;
	}
	
	
	if(initializeADC() != 0)
	{
	printk("ADC initialization failed!");
	return;
	}

	while (1) 
	{
		struct Measurement m = readADCValue();
		printk("x = %d,  y = %d,  z = %d\n",m.x,m.y,m.z);
		
		k_sleep(K_MSEC(1000));
		
		dk_set_led_on(USER_LED1);
		dk_set_led_on(USER_LED2);
		dk_set_led_on(USER_LED3);
		dk_set_led_on(USER_LED4);
		 
		k_sleep(K_MSEC(1000));
		
		dk_set_led_off(USER_LED1);
		dk_set_led_off(USER_LED2);
		dk_set_led_off(USER_LED3);
		dk_set_led_off(USER_LED4);


	}
}



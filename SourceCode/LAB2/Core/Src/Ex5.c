/*
 * Ex5.c
 *
 *  Created on: Oct 28, 2024
 *      Author: TIEN DUY
 */
#include "main.h"
#include "Ex3.h"

int index_led = 0;
extern int hour;
extern int minute;
extern int led_buffer[4];

void updateClockBuffer() {
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
	update7SEG(index_led);
	index_led++;
	if (index_led > 3) {
		index_led = 0;
	}
}

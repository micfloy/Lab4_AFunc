/*
 * Clock_Set.c
 *
 *  Created on: Oct 25, 2013
 *      Author: C15Michael.Bentley
 */
#include <msp430.h>
#include "Clock_Set.h"

void clockSet_1MHz() {

	DCOCTL = 0x00;
	BCSCTL1 = CALCBC1_1MHz;
	DCOCTL = CALDCO_1MHz;

}

void clockSet_8MHz() {

	DCOCTL = 0x00;
	BCSCTL1 = CALCBC1_8MHz;
	DCOCTL = CALDCO_8MHz;

}

void clockSet_12MHz(){

	DCOCTL = 0x00;
	BCSCTL1 = CALCBC1_12MHz;
	DCOCTL = CALDCO_12MHz;

}

void clockSet_16MHz() {

	DCOCTL = 0x00;
	BCSCTL1 = CALCBC1_16MHz;
	DCOCTL = CALDCO_16MHz;

}

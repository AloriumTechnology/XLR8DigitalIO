/*
 * Copyright (c) 2016 by Alorium Technology, Bryan Craker <bryan.craker@superiontech.com>
 * XLR8 library to give access to Sno back pins.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of either the GNU General Public License version 2
 * or the GNU Lesser General Public License version 2.1, both as
 * published by the Free Software Foundation.
 */

#ifndef _XLR8_DIGITALIO_H_INCLUDED
#define _XLR8_DIGITALIO_H_INCLUDED

#include <XLR8DigitalIOAddr.h>
#include <Arduino.h>

void XLR8pinMode(int pin, int mode) {
  if (mode == OUTPUT) {
    // Port D
    if ((pin >=  0) && (pin <=  7)) DDRD = DDRD | (0x01 << (pin -  0));
    // Port B
    if ((pin >=  8) && (pin <= 13)) DDRB = DDRB | (0x01 << (pin -  8));
    // Port C
    if ((pin >= 14) && (pin <= 19)) DDRC = DDRC | (0x01 << (pin - 14));
    // Port A
    if ((pin >= 22) && (pin <= 27)) DDRA = DDRA | (0x01 << (pin - 22));
    // Port E
    if ((pin >= 28) && (pin <= 33)) DDRE = DDRE | (0x01 << (pin - 28));
    // Port G
    if ((pin >= 34) && (pin <= 39)) DDRG = DDRG | (0x01 << (pin - 34));
  }
  else if (mode == INPUT) {
    // Port D
    if ((pin >=  0) && (pin <=  7)) DDRD = DDRD & ~(0x01 << (pin -  0));
    // Port B
    if ((pin >=  8) && (pin <= 13)) DDRB = DDRB & ~(0x01 << (pin -  8));
    // Port C
    if ((pin >= 14) && (pin <= 19)) DDRC = DDRC & ~(0x01 << (pin - 14));
    // Port A
    if ((pin >= 22) && (pin <= 27)) DDRA = DDRA & ~(0x01 << (pin - 22));
    // Port E
    if ((pin >= 28) && (pin <= 33)) DDRE = DDRE & ~(0x01 << (pin - 28));
    // Port G
    if ((pin >= 34) && (pin <= 39)) DDRG = DDRG & ~(0x01 << (pin - 34));
  }
};

void XLR8digitalWrite(int pin, int value) {
  if (value == HIGH) {
    // Port D
    if ((pin >=  0) && (pin <=  7)) PORTD = PORTD | (0x01 << (pin -  0));
    // Port B
    if ((pin >=  8) && (pin <= 13)) PORTB = PORTB | (0x01 << (pin -  8));
    // Port C
    if ((pin >= 14) && (pin <= 19)) PORTC = PORTC | (0x01 << (pin - 14));
    // Port A
    if ((pin >= 22) && (pin <= 27)) PORTA = PORTA | (0x01 << (pin - 22));
    // Port E
    if ((pin >= 28) && (pin <= 33)) PORTE = PORTE | (0x01 << (pin - 28));
    // Port G
    if ((pin >= 34) && (pin <= 39)) PORTG = PORTG | (0x01 << (pin - 34));
  }
  else if (value == LOW) {
    // Port D
    if ((pin >=  0) && (pin <=  7)) PORTD = PORTD & ~(0x01 << (pin -  0));
    // Port B
    if ((pin >=  8) && (pin <= 13)) PORTB = PORTB & ~(0x01 << (pin -  8));
    // Port C
    if ((pin >= 14) && (pin <= 19)) PORTC = PORTC & ~(0x01 << (pin - 14));
    // Port A
    if ((pin >= 22) && (pin <= 27)) PORTA = PORTA & ~(0x01 << (pin - 22));
    // Port E
    if ((pin >= 28) && (pin <= 33)) PORTE = PORTE & ~(0x01 << (pin - 28));
    // Port G
    if ((pin >= 34) && (pin <= 39)) PORTG = PORTG & ~(0x01 << (pin - 34));
  }
};

int XLR8digitalRead(int pin) {
  // Port D
  if ((pin >=  0) && (pin <=  7)) return B00000001 & (PIND >> (pin -  0));
  // Port B
  if ((pin >=  8) && (pin <= 13)) return B00000001 & (PINB >> (pin -  8));
  // Port C
  if ((pin >= 14) && (pin <= 19)) return B00000001 & (PINC >> (pin - 14));
  // Port A
  if ((pin >= 22) && (pin <= 27)) return B00000001 & (PINA >> (pin - 22));
  // Port E
  if ((pin >= 28) && (pin <= 33)) return B00000001 & (PINE >> (pin - 28));
  // Port G
  if ((pin >= 34) && (pin <= 39)) return B00000001 & (PING >> (pin - 34));
};

#endif


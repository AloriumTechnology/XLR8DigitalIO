/*
 * Copyright (c) 2016 by Alorium Technology, Bryan Craker <bryan.craker@superiontech.com>
 * XLR8 library to give access to Sno back pins. This file is only the new register addresses.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of either the GNU General Public License version 2
 * or the GNU Lesser General Public License version 2.1, both as
 * published by the Free Software Foundation.
 */

#ifndef _XLR8_DIGITALIOADDR_H_INCLUDED
#define _XLR8_DIGITALIOADDR_H_INCLUDED

#define DDRA  _SFR_IO8(0x01)
#define PORTA _SFR_IO8(0x02)
#define PINA  _SFR_IO8(0x00)

#define DDRE  _SFR_IO8(0x0d)
#define PORTE _SFR_IO8(0x0e)
#define PINE  _SFR_IO8(0x0c)

#define DDRG  _SFR_IO8(0x13)
#define PORTG _SFR_IO8(0x14)
#define PING  _SFR_IO8(0x12)

#endif


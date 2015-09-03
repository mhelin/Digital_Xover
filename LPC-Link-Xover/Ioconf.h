/**************************************************************************//**
 *
 * @file     ioconf.h
 * @purpose  This file is used to config ioconf module.
 * @version  1.0
 * @date     18.08.2015
 * @author   NXP MCU Team
 *
 * @note     This file is for reference only. 
 *           PINMUX(Pin address, Function Number) need to be defined by user.
 * 
 * Copyright (C) 2012 NXP Semiconductors(NXP). All rights reserved.
 *
 * @par
 * Software that is described herein is for illustrative purposes only
 * which provides customers with programming information regarding the
 * products. This software is supplied "AS IS" without any warranties.
 * NXP Semiconductors assumes no responsibility or liability for the
 * use of the software, conveys no license or title under any patent,
 * copyright, or mask work right to the product. NXP Semiconductors
 * reserves the right to make changes in the software without
 * notification. NXP Semiconductors also make no representation or
 * warranty that such application will be suitable for the specified
 * use without further testing or modification.
 * Permission to use, copy, modify, and distribute this software and its
 * documentation is hereby granted, under NXP Semiconductors??
 * relevant copyright in the software, without fee, provided that it
 * is used in conjunction with NXP Semiconductors microcontrollers.  This
 * copyright, permission, and disclaimer notice must appear in all copies of
 * this code.
 **********************************************************************/
  
#ifndef _PINMUX_H_
#define _PINMUX_H_
  
#define MUX_EVM() \
  PINMUX(P3_3,  0); \
  PINMUX(P3_0,  0); \
  PINMUX(P2_11,  0); \
  PINMUX(P2_13,  0); \
  PINMUX(P3_5,  0); \
  PINMUX(P3_4,  0); \
  PINMUX(P2_12,  0); \
  PINMUX(P2_9,  0); \
  PINMUX(P2_8,  0); \
  PINMUX(P3_6,  0); \
  PINMUX(P6_11,  0); \
  PINMUX(P2_7,  0); \
  PINMUX(P3_7,  0); \
  PINMUX(P2_3,  0); \
  PINMUX(P2_4,  0); \
  PINMUX(P2_5,  0); \
  PINMUX(P3_8,  0); \
  PINMUX(P2_10,  0); \
  PINMUX(P2_2,  0); \
  PINMUX(P6_4,  0); \
  PINMUX(P3_1,  1); \
  PINMUX(P6_9,  0); \
  PINMUX(P6_5,  0); \
  PINMUX(P0_1,  3); \
  PINMUX(P0_0,  3); \
  PINMUX(P1_7,  0); \
  PINMUX(P6_1,  0); \
  PINMUX(P3_2,  1); \
  PINMUX(P2_1,  0); \
  PINMUX(P2_6,  0); \
  PINMUX(P2_0,  0); \
  PINMUX(P1_0,  0); \
  PINMUX(PF_4,  7); \
  PINMUX(P1_8,  0); \
  PINMUX(P1_10,  0); \
  PINMUX(P6_0,  0); \
  PINMUX(P1_13,  0); \
  PINMUX(P1_16,  0); \
  PINMUX(P1_17,  6); \
  PINMUX(P1_3,  0); \
  PINMUX(P1_4,  0); \
  PINMUX(P1_5,  6); \
  PINMUX(P1_9,  0); \
  PINMUX(P1_11,  0); \
  PINMUX(P1_14,  6); \
  PINMUX(P6_2,  0); \
  PINMUX(P1_18,  0); \
  PINMUX(P1_2,  0); \
  PINMUX(P1_1,  0); \
  PINMUX(CLK0,  0); \
  PINMUX(P1_6,  6); \
  PINMUX(CLK2 ,  0); \
  PINMUX(P1_12,  0); \
  PINMUX(P1_15,  0); \
  PINMUX(P1_19,  0); \
  PINMUX(P1_20,  0); \
  
#endif

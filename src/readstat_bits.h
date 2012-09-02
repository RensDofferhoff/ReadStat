//
//  dta_util.h
//  Wizard
//
//  Created by Evan Miller on 12/16/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#define READSTAT_MACHINE_IS_TWOS_COMPLEMENT ((char)0xFF == (char)-1)

#undef READSTAT_MACHINE_IS_TWOS_COMPLEMENT
#define READSTAT_MACHINE_IS_TWOS_COMPLEMENT 0

char ones_to_twos_complement1(char num);
int16_t ones_to_twos_complement2(int16_t num);
int32_t ones_to_twos_complement4(int32_t num);
uint16_t byteswap2(uint16_t num);
uint32_t byteswap4(uint32_t num);
uint64_t byteswap8(uint64_t num);

float byteswap_float(float num);
double byteswap_double(double num);

//
// oled test program
//
// Written by Larry Bank
// Copyright 2017 BitBank Software, Inc. All Rights Reserved.
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//    http://www.apache.org/licenses/LICENSE-2.0
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//===========================================================================

#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "oled96.h"

int main(int argc, char *argv[])
{
int i, iChannel;
int iOLEDAddr = 0x3c; // typical address; it can also be 0x3d
int iOLEDType = OLED_128x32; // Change this for your specific display
int bFlip = 1, bInvert = 1;

	i = -1;
	iChannel = -1;
	while (i != 0 && iChannel < 2) // try I2C channel 0 through 2
	{
		iChannel++;
		i=oledInit(iChannel, iOLEDAddr, iOLEDType, bFlip, bInvert);
	}
	if (i == 0)
	{
		printf("Successfully opened I2C bus %d\n", iChannel);
		oledFill(0); // fill with black
		oledWriteString(0,0,"OLED 96 Library!",FONT_NORMAL);
		oledWriteString(3,1,"BIG!",FONT_BIG);
		oledWriteString(0,1,"Small", FONT_SMALL);
		for (i=0; i<64; i++)
		{
			oledSetPixel(i, 16+i, 1);
			oledSetPixel(127-i, 16+i, 1);
		}
		printf("Press ENTER to quit\n");
		getchar();
		oledShutdown();
	}
	else
	{
		printf("Unable to initialize I2C bus 0-2, please check your connections and verify the device address by typing 'i2cdetect -y <channel>\n");
	}
   return 0;
} /* main() */

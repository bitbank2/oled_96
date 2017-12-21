//
// oled test program
// Written by Larry Bank
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "oled96.h"

int main(int argc, char *argv[])
{
int i;

	i=oledInit(0, 0x3c, 1, 1); // for Raspberry Pi, use channel 1
	if (i == 0)
	{
		oledFill(0); // fill with black
		oledWriteString(0,0,"OLED 96 Library!",0);
		oledWriteString(2,2,"BIG!",1);
		for (i=0; i<64; i++)
		{
			oledSetPixel(i, 16+i, 1);
			oledSetPixel(127-i, 16+i, 1);
		}
		printf("Press ENTER to quit\n");
		getchar();
		oledShutdown();
	}
   return 0;
} /* main() */

//
// OLED96
// Library for accessing the 0.96" SSD1306 128x64 OLED display
// Written by Larry Bank
// Copyright (c) 2017 BitBank Software, Inc.
// Project started 1/15/2017
//
// Initialize the OLED96 library for a specific I2C address
int oledInit(int iAddress);

// Turns off the display and closes the I2C handle
void oledShutdown(void);

// Fills the display with the byte pattern
int oledFill(unsigned char ucPattern);

// Write a text string to the display at x (column 0-127) and y (row 0-7)
// bLarge = 0 - 8x8 font, bLarge = 1 - 16x24 font
int oledWriteString(int x, int y, char *szText, int bLarge);

// Sets a pixel to On (1) or Off (0)
// Coordinate system is pixels, not text rows (0-127, 0-63)
int oledSetPixel(int x, int y, unsigned char ucPixel);


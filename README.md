** OLED_96 **

OLED_96 is a simple C library for working with the SSD1306 128x64 OLED display
when connected to the I2C bus. Tested on various ARM SBCs and Arduinos.
The idea is to provide a simple interface for C programmers to make use of 
those low-cost OLED displays without having to read the data sheet or figure
out I2C programming.<br>
<br>
Written by Larry Bank<br>
Project started 1/15/2017<br>
bitbank@pobox.com<br>

Latest Changes:<br>
---------------<br>
The Arduino version now includes support for my BitBang_I2C library so that any
two GPIO pins can be used to drive the display.<br>
The library now supports 3 sizes of SSD1306 displays (and SH1106): 132x64, 128x64, 128x32, and 64x32<br>

Features:<br>
--------<br>
- Efficient individual pixel drawing<br>
- Small, Medium and large fonts (6x8, 8x8, 16x32)<br>
- Invert and flip 180 options (entire display)<br>
- Optional inverted text<br>
- Brightness control<br>
- Support for 64x32, 128x32, 128x64 and 132x64 (SH1106) displays<br>
<br>
*NEW* Display a Windows BMP (Arduino version).<br>
This code was added to make it simpler to display a full screen logo bitmap by
just copying a 1-bpp Windows BMP into the flash memory and calling 1 function.
<br>

If you find this code useful, please consider buying me a cup of coffee

[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=SR4F44J2UR8S4)

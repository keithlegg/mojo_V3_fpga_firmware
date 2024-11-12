# mojo_V3_fpga_firmware
legacy firmware for the mojo V3 with modern LUFA library (raw serial, not using arduino IDE) 

THIS IS THE OLD LEGACY FIRMWARE, NOT THE ONE THAT THE AUTHOR SAYS TO USE. 

legacy firmware code - Justin Rajewski

LUFA Library- Copyright (C) Dean Camera 
dean [at] fourwalledcubicle [dot] com, www.lufa-lib.org

This is a "modern" version that will compile on linux with the latest version of LUFA in an attempt to keep the Mojo FPGA alive and relevant. 


To install:

It may be useful to make a power cable or power the Mojo from other means than the USB plug, so you can avoid bus conflicts with the reset pins.
Inversely, you should unplug the programmer if you want to plug the USB in for the same reasons. 
All you need is an AVR programmer, avrdude, and the avr compiler tools.  

"cd" to the root directory of this repo and type "make" 
to flash to the device, you can run the included shell script that invokes the programmer with a single line.
You may need to edit the shell file to match yout programmer and setup. 


Extras:

There is an empty template project called "mojo_nop_firmware" 
You can use to set all pins on the microcontroller to a HIGHZ state to disable it. 
You can also use this as a simple template to write your own firmware for the onboard ATMega32U chip 


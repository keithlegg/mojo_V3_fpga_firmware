# mojo_V3_fpga_firmware
legacy firmware for the mojo V3 with modern LUFA library (raw serial, not using arduino IDE) 

THIS IS THE OLD LEGACY FIRMWARE, NOT THE ONE THAT THE AUTHOR SAYS TO USE. 

Uses code from two other github repos mentioned in the readme: 

This is a "modern" version that will compile on the latest linux (ubuntu 24.04.1 LTS) with the latest version of LUFA (v170418) in an attempt to keep the Mojo FPGA alive and relevant. Be aware the LUFA library has been trimmed down and is not complete. 


To install:

It may be useful to make a power cable or power the Mojo from other means than the USB plug, so you can avoid bus conflicts with the reset pins.
Inversely, you should unplug the programmer if you want to plug the USB in for the same reasons. 
All you need is an AVR programmer, avrdude, and the avr compiler tools.  


To compile:

"cd" to the root directory of this repo and type "make".


To flash to the device: 

You can run the included shell script that invokes the programmer with a single line.
You may need to edit the shell file to match your programmer and environment. 


Extras:

There is an empty template project called "mojo_nop_firmware" 
You can use to set all pins on the microcontroller to a HIGHZ state to disable it. 
You can also use this as a (very) simple template to write your own firmware for the onboard ATMega32U chip.




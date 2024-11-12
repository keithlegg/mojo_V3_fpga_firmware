# mojo_V3_fpga_firmware
legacy firmware for the mojo V3 with modern LUFA library (raw serial, not using arduino IDE) 

THIS IS THE OLD LEGACY FIRMWARE, NOT THE ONE THAT THE AUTHOR SAYS TO USE. 

To install:
    It may be useful to make a power cable or power the Mojo from other means than the USB plug, so you can avoid bus conflicts with the reset pins.
    Inversely, you should unplug the programmer if you want to plug the USB in for the same reasons. 
    All you need is an AVR programmer, avrdude, and the avr compiler tools.  
    just cd to the root directory and type "make" 
    to install, you can run the included shell script that invokes the programmer with a single line 


Extras:
    There is an empty template project called "mojo_nop_firmware" 
    You can use to set all pins on the microcontroller to a HIGHZ state to disable it. 
    You can also use this as a simple template to write your own firmware for the onboard ATMega32U chip 


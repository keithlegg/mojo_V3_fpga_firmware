  legacy firmware code Created on: Mar 27, 2013
       Author: Justin Rajewski

  LUFA Library- Copyright (C) Dean Camera, 2013.
  dean [at] fourwalledcubicle [dot] com, www.lufa-lib.org

  Copyright 2013  Dean Camera (dean [at] fourwalledcubicle [dot] com)
  Permission to use, copy, modify, distribute, and sell this
  software and its documentation for any purpose is hereby granted
  without fee, provided that the above copyright notice appear in
  all copies and that both that the copyright notice and this
  permission notice and warranty disclaimer appear in supporting
  documentation, and that the name of the author not be used in
  advertising or publicity pertaining to distribution of the
  software without specific, written prior permission.

  The author disclaims all warranties with regard to this
  software, including all implied warranties of merchantability
  and fitness.  In no event shall the author be liable for any
  special, indirect or consequential damages or any damages
  whatsoever resulting from loss of use, data or profits, whether
  in an action of contract, negligence or other tortious action,
  arising out of or in connection with the use or performance of
  this software.


November 11, 2024 
    Keith Legg basically just upgraded the old firmware to work with the latest LUFA libray 
    LUFA can be found here: https://github.com/abcminiuser/lufa
    Old firmware for mojo V3: https://github.com/embmicro/mojo-firmware-legacy


To install:
    It may be useful to make a power cable or power the Mojo from other means than the USB plug, so you can avoid bnus conflicts with the reset pins.
    Inversely, you should unplug the programmer if you want to plug the USB in for the same reasons. 

    All you need is an AVR programmer, avrdude, and the avr compiler tools.  
    just type "make" in the root directory 
    to install, run the included shell script that invokes the programmer with a single line 


Extras:
    There is an empty template project called "mojo_nop_firmware" 
    You can use to set all pins on the microcontroller to a HIGHZ state to disable it. 
    You can also use this as a simple template to write your own firmware for the onboard ATMega32U chip 








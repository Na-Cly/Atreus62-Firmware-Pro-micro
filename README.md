# Atreus62-Firmware-Pro-micro
Atreus62 Firmware for the pro micro. 


Instructions: 

1. Modify the matrix.c to mirror your pinout. I follow this guide to make sure I am making all the neccesary changes.
  https://deskthority.net/workshop-f7/how-to-build-your-very-own-keyboard-firmware-t7177.html
  The pinout hints for pro micro to teensy 2.0 -> http://i.imgur.com/wMNx2u6.png
2. After followiing the in depth guide make sure your firmware compiles `sudo make -f Makefile` (inside the working folder)
3. I use avrdude to flash the pro micro. It can be a little finicky using the command
  `sudo avrdude -p atmega32u4 -P /dev/ttyACM0  -c avr109  -U flash:w:atreus62.hex` 
  -where atreus62.hex is the compiled firmware name and the /dev/ttyACM0 is the device. 
4.  follow this guide for flashing the pro micro. 
    https://deskthority.net/workshop-f7/how-to-use-a-pro-micro-as-a-cheap-controller-converter-like-soarer-s-t8448.html
    
5. Bask in the fact that you saved ~15-20 USD using a pro micro instead of a teensy 2.0

Side note: for the issue of not having a programming button on the pro micro I simply connect the two pins through a series of key switches that I want to use, in my case The top  left and bottom left keys, the left thumb key and the number 5 key all pressed at 1x will complete a physical press of the "programming button" on the pro micro.

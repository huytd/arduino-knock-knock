Arduino Knock! Knock! 
=====================
###_You knock! Your Arduino answer!!!_

This is the simple Arduino program that detect knock and display the Hello World text to Nokia 5110 LCD.

Watch demo here:

[![You knock, your Arduino answer!](http://img.youtube.com/vi/2jj6VNMmu64/0.jpg)](http://www.youtube.com/watch?v=2jj6VNMmu64)

##Libraries:

1. Adafruit GFX Library ([get it here](https://github.com/adafruit/Adafruit-GFX-Library))
2. Adafruit PCD8544 Library ([get it here](https://github.com/adafruit/Adafruit-PCD8544-Nokia-5110-LCD-library))

##Components:

1. Aduino UNO 
2. Nokia 5110 LCD ([find it here](https://www.sparkfun.com/products/10168))
3. KEYES Knock Module ([find it here](http://www.dx.com/p/keyes-knock-module-for-arduino-223700#.VEH7d5PLfPY))
4. Jump Wire
5. Breadboard (optional)

##Wiring

**1. The knock module:**

For wiring the knock module, looking for the minus `-` icon (_because some knock module has the different layout_), this must be connected with the `GND` pin, connect it to Arduino follow this:

- Minus  --- GND
- VCC --- VCC (5V)
- Output --- Pin 2

Then, you can find some where to hide your knock module, for me, I put it inside my wood cover notebook, for easier knock.

**2. The Nokia LCD:**

Following Adafruit's guide to wiring the Nokia LCD (`Software SPI`, if you want to make the display faster, use `Hardware SPI`). In this tutorial, I use Arduino UNO, this must be different if you're using another kind of Arduino (Leonardo, MEGA,...)

- CLK --- Pin 7
- DIN --- Pin 6
- D/C --- Pin 5
- CS  --- Pin 4
- RST --- Pin 3

##Coding

See the attached source code in this repo. 

##Testing

Knock twice and you will see the Nokia LCD turned on, the text: "Hello World!" displayed!
Wait 2 seconds, the display turned off. 



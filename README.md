# XLR8 Digital Input/Output Library
Digital I/O communication for use with an XLR8 Snō board.

**Features:**

- Drop in replacement for normal Arduino digital communication. Gives access to the extra pins on an XLR8 Snō, also compatible with the standard pins.

**More Information:**

- For use with an [XLR8 Snō Board](https://www.aloriumtech.com/products/).

**Usage:**

The XLR8DigitalIO library is included with the line

  #include <XLR8DigitalIO.h>

Pins are then accessed with the functions XLR8pinMode, XLR8digitalRead, and XLR8digitalWrite, exactly as you would normally with an Arduino board. However, this will give additional access to the extra digital pins on an XLR8 Snō from digital pin 22 through 39.

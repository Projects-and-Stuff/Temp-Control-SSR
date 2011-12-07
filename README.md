# Temp Control SSR #
#### A Solid State Relay designed to switch loads of up to 8A and up to 220VAC ####

I'm designing a Solid-State Relay circuit board which is controlled by a temperature sensor.

The original purpose for this project involves a story: As I'm writing this, I'm deployed in Afghanistan. We have somewhat limited resources for frivolous things, and apparently this extends to keeping foods and drinks cool. We were able to scrounge a freezer, and so we continuously have to open the freezer lid to thaw our milk, water, and foods. It's not the best set-up, but we cannot get a proper refrigerator out here.

So I set out to make a device to cut off the power to the freezer when it's overly cold, and turn it back on before the food gets warm. Because I'm using a microcontroller, I can experiment with carious feedback and control designs in software as I look for the best solution. I've designed the initial boards with terminals for the temperature sensor, so it's possible to modify the firmware for other types of sensors.

---

The current hardware iteration of this project is actually a bit over-engineered and large. A future design will shrink the board to a more manageable size, and reduce costs.

---

*File Structure*

* ./Firmware/ --> Firmware for the project (Written in C Utilizing AVR Studio 5 and AVRGCC)
* ./Hardware/ --> Kicad Project for TempControl Hardware
* ./GerberOutput/ --> The latest Gerber Files for manufacture
* ./Notes/ --> Project Notes, BOM, and Research

---

Additional information, research, and notes can be found at http://www.projectsandstuff.com, or email us at support@projectsandstuff.com

Let us know if you fork and make improvements. We'd be glad to consider merges that improve this project.

---

UPDATES:

Updated Trace widths and clearance per ANSI/IPC-2221A Standards

---

CURRENT AUTHORS:

> [Jack Linke](http://www.jacklinke.com)
jacklinke@gmail.com
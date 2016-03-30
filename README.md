# USB-Drop-Stick
Don't plug in unknown flashdrives!


# What is this?

A demonstration of why flashdrives of unknown pedigree can be very dangerous.

See:
http://jrainimo.com/build/?p=601

The original goal was to have a very inexpensive (<$5) dev board that can be left in projects without feeling guilty. But it quickly turned into a USB experimentation project.

It fits into a standard USB flashdrive case, because that's super convenient, and it has one 8-pin port broken out for whatever this gets used for.

The "Blink.X" project in the firmware folder does exactly what it says on the tin. It's the obvious starter firmware to be forked for other stuff.

# Why is it dangerous?

The other two projects, HID.X and HID2.X are slightly more complicated.
HID.X identifies itself as a USB keyboard and immediately starts typing a-z, and 0-9 upon being plugged in. This is barely changed from the Microchip example code, and doesn't include their USB libraries.
To compile this, you'll need to go [here](http://www.microchip.com/mplab/microchip-libraries-for-applications) and download Microchip Libraries for Applications. It's free and includes some very cool USB stuff.

HID2.X uses the same libraries, and identifies itself as a HID keyboard as well. It types `GUI-key->R, notepad.exe, hello world`. On a Windows machine, this opens Notepad and types "hello world".

Innocuous, but it's pretty obvious that this can be used in pretty scary ways.

That's pretty much as far as I intend to take this, I've lost interest. There might be methods of detecting what kind of computer the drive gets plugged into and tailoring the attack, too.
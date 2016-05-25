# USBvil
Don't plug in unknown flashdrives!


# What is this?

A demonstration of why flashdrives of unknown pedigree can be very dangerous.

See:
http://jrainimo.com/build/?p=601

The original goal was to have a very inexpensive (<$5) dev board that can be left in projects without feeling guilty. But it quickly turned into a USB experimentation project.

It fits into a standard USB flashdrive case, because that's super convenient, and it has one 8-pin port broken out for whatever this gets used for.

The "Blink.X" project in the firmware folder does exactly what it says on the tin. It's the obvious starter firmware to be forked for other stuff.

# Why is it dangerous?

The other two projects, HID and HID2 are slightly more complicated.
HID identifies itself as a USB keyboard and immediately starts typing a-z, and 0-9 upon being plugged in. This is barely changed from the Microchip example code, and doesn't include their USB libraries.

HID2 uses the same libraries, and identifies itself as a HID keyboard as well. It types `GUI-key->R, notepad.exe, hello world`. On a Windows machine, this opens Notepad and types "hello world".

Innocuous, but it's pretty obvious that this can be used in pretty scary ways.

That's pretty much as far as I intend to take this, I've lost interest. There might be methods of detecting what kind of computer the drive gets plugged into and tailoring the attack, too.

# How do I get started?

If you don't have the latest version of Microchip [MPLAB X](http://www.microchip.com/mplab/mplab-x-ide) and the [XC8 compiler](http://www.microchip.com/mplab/compilers), download them at the links. Everything is free.

To compile this, you'll need to go [here](http://www.microchip.com/mplab/microchip-libraries-for-applications) and download Microchip Libraries for Applications. It also includes some other very cool USB stuff.

After installation, go to whereever you installed it, and copy the `mla` folder into `Firmware` in this repo.

At the very least, you should have `USBvil\Firmware\mla\bsp` and `USBvil\Firmware\mla\framework` and all of the files inside.


After that, open up MPLAB, open project, and navigate to the `HID` folder - This is the more vanilla version, and better for starting something new. Compile it once to test, and then start modifying! `main.c` and `app_device_keyboard.c` are where the fun happens.

Alternatively, I have included the hex and elf firmware images if you just want to flash the board.


# How do I make one?

Just for kicks, I'm testing out Kitnic. Check it [here](https://kitnic.it/boards/github.com/JarrettR/USBvil/).

The service should make the board/BOM ordering process a little bit easier, we'll see how it goes. That's just a landing page to this repo, so all of the data is here, too.
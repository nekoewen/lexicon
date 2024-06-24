# Build Guide
Although it has some complex firmware features, the Lexicon’s hardware is standard for hobbyist mechanical keyboards, and not difficult to assemble. This guide will walk you through the necessary steps. Please take appropriate safety precautions when soldering and working on electronics.

Most standard MX keycap sets will work with the Lexicon, but you will need 1.25u, 2.25u, and 2.75u keycaps for the split spacebar. Many keycap sets include these, but they can be purchased separately as well.

## Bill of Materials
-	Lexicon 69 PCB and plates
-	69 MX-style switches with keycaps
-	6 2u MX stabilizers (PCB mount; can be clip-in or screw-in)
-	4+ adhesive feet
-	16 M2 screws (4mm long)
-	8 M2 standoffs (10mm long)
-	USB-C cable

## Tools and Supplies
-	Soldering iron
-	Lead-free solder
-	Precision screwdriver
-	Metal tweezers

# Instructions
## Step 1: Flash Firmware
Plug the keyboard into your device with a USB-C cable. If it doesn’t show up as a drive (called RPI-RP2), hold the reset button while plugging it in. The reset button is on the underside of the PCB, a bit below the USB-C connector.
Drop the .uf2 file you want to use into the drive. The keyboard should reset and begin running the firmware.

## Step 2: Initial Test
Use metal tweezers to test each switch position to ensure that it produces a keystroke. We recommend using a keyboard tester (such as at keyboardtester.com) so you can easily see if each key is responding.

## Step 3: Stabilizers
Assemble the stabilizers and attach them to the PCB. The side with hooks goes into the larger holes, while the side with either a snap-in piece or threading for a screw goes into the smaller holes. In the case of screw-in stabilizers, use a screwdriver to insert and tighten the screws from the bottom of the PCB.

## Step 4: Top Plate Hardware
Attach screws and standoffs to the top plate. The screws should go into the side with the Lexicon logo, with the standoffs on the opposite side.

## Step 5: Place and Solder Switches
Seat some switches in the top plate (the pins should be toward the bottom of the keyboard), then solder them in place on the PCB. From there, continue inserting and soldering switches until they’re all done.
The Caps Lock key has two sets of contacts placed close together. The left one is for using a stepped keycap, while the right is for a non-stepped one. Decide which you’re going to use before soldering that switch. Not all keycap sets include both types of Caps Lock keycaps.
Plug the keyboard in and test the switches. Make sure you haven’t missed soldering any or bent any pins.

## Step 6: Place Keycaps
Place the keycaps on the switches. For the keycaps that go onto stabilizers, make sure they properly move up and down. The included sticker sheet has labels for some of the keys to use if you wish.

## Step 7: Bottom Hardware
Use screws to attach the bottom plate. The side with artwork goes on the bottom of the keyboard, so that the hole for the reset switch sits over the button.
Affix rubber feet to the bottom plate. If you want the keyboard to have a tilt, put taller feet on the rear portion of the board’s bottom.

You’re done! Time to get to writing!

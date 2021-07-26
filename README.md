# Teensy UFC Keypad
 
Arduino code for a 3D-printed keypad for the F/A-18c's UFC panel in DCS: World.
The keypad is arranged in a matrix pattern so that it requires less pins to make, and is controlled by a teensy 2.0 microcontroller programmed with teensyduino and configured to be in `Keyboard + Mouse + Joystick` Mode.
Although not included in this code, I programmed mine such that pressing a combination of keys types in my computer password. This is probably a bad idea security-wise, but I did it anyway.

The code uses the [joystick](https://www.pjrc.com/teensy/td_joystick.html) and [keypad](https://www.pjrc.com/teensy/td_libs_Keypad.html) libraries from PJRC, the creator of the teensy board.

The Actual UFC panel in the F/A-18c has 6 screens, radio controls, and a row of buttons along the bottom. I may add those eventually, but for now I only made the twelve-key keypad and five selector buttons in the center of the UFC panel.
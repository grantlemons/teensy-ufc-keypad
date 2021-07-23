#include <Keypad.h>
#include "secret.h"

#define ENABLE_PULLUPS
#define NUMBUTTONS 17
#define NUMROWS 6
#define NUMCOLS 4
#define DEPRESS_DELAY 5

byte buttons[NUMROWS][NUMCOLS] = {
    {0,0,0,14},
    {1,2,3,15},
    {4,5,6,16},
    {7,8,9,17},
    {10,11,12,18},
    {32, 0, 0, 0}
};

byte rowPins[NUMROWS] = {A5, A6, A7, A8, A9, A11}; 
byte colPins[NUMCOLS] = {A0, A1, A2, A3};

Keypad box = Keypad( makeKeymap(buttons), rowPins, colPins, NUMROWS, NUMCOLS);

void setup() {}

void loop() { 
    CheckAllButtons();
}

void CheckAllButtons(void) {
    if (box.getKeys()) {
        for (int i=0; i<LIST_MAX; i++) {    
            if ( box.key[i].stateChanged ) {
                switch (box.key[i].kstate) {    
                    case PRESSED:
                        Joystick.button(box.key[i].kchar, 1);
                        break;
                    case HOLD:
                        switch (box.key[i].kchar) {
                            case 14:
                                Joystick.button(box.key[i].kchar, 1);
                                delay(DEPRESS_DELAY);
                                break;
                            case 15:
                                Joystick.button(box.key[i].kchar, 1);
                                delay(DEPRESS_DELAY);
                                break;
                            case 16:
                                Joystick.button(box.key[i].kchar, 1);
                                delay(DEPRESS_DELAY);
                                break;
                            case 17:
                                Joystick.button(box.key[i].kchar, 1);
                                delay(DEPRESS_DELAY);
                                break;
                            case 18:
                                Joystick.button(box.key[i].kchar, 1);
                                delay(DEPRESS_DELAY);
                                break;
                            case 32:
                                Keyboard.println(password);
                                break;
                            default:
                                Joystick.button(box.key[i].kchar, 1);
                        }
                        break;
                    case RELEASED:
                        Joystick.button(box.key[i].kchar, 0);
                    case IDLE:
                        Joystick.button(box.key[i].kchar, 0);
                        break;
                }
            }     
        }
    }
}

/** 
 *  Name: George Emad 
 * Tool:Doxygen Plugin
 * @file DIO.c
 * @brief This file is to be used to implement the DIO driver functions.
 */

#include "DIO.h"
#include "bitMath.h"
#include "register.h"

/**
 * @brief Configures the specified port_pin as input or output based on the provided state.
 * @param port_pin The port and pin number combined (e.g., PA0 for Port A, Pin 0).
 * @param state Input (0) or Output (1).
 */
void pinMode(uint8_t port_pin, uint8_t state) {
    uint8_t port = port_pin / 8;
    uint8_t pin = port_pin % 8;

    switch(port) {
        case 0: // Port A
            if(state)
                setBit(DDRA, pin);
            else
                clearBit(DDRA, pin);
            break;
        case 1: // Port B
            if(state)
                setBit(DDRB, pin);
            else
                clearBit(DDRB, pin);
            break;
        case 2: // Port C
            if(state)
                setBit(DDRC, pin);
            else
                clearBit(DDRC, pin);
            break;
        case 3: // Port D
            if(state)
                setBit(DDRD, pin);
            else
                clearBit(DDRD, pin);
            break;
    }
}

/**
 * @brief Writes the specified state (high or low) to the given port_pin.
 * @param port_pin The port and pin number combined.
 * @param state High (1) or Low (0).
 */
void digitalWrite(uint8_t port_pin, uint8_t state) {
    uint8_t port = port_pin / 8;
    uint8_t pin = port_pin % 8;

    switch(port) {
        case 0: // Port A
            if(state)
                setBit(PORTA, pin);
            else
                clearBit(PORTA, pin);
            break;
        case 1: // Port B
            if(state)
                setBit(PORTB, pin);
            else
                clearBit(PORTB, pin);
            break;
        case 2: // Port C
            if(state)
                setBit(PORTC, pin);
            else
                clearBit(PORTC, pin);
            break;
        case 3: // Port D
            if(state)
                setBit(PORTD, pin);
            else
                clearBit(PORTD, pin);
            break;
    }
}

/**
 * @brief Reads the digital state (high or low) of the specified port_pin.
 * @param port_pin The port and pin number combined.
 * @return High (1) or Low (0).
 */
uint8_t digitalRead(uint8_t port_pin) {
    uint8_t port = port_pin / 8;
    uint8_t pin = port_pin % 8;

    switch(port) {
        case 0: // Port A
            return getBit(PINA, pin);
        case 1: // Port B
            return getBit(PINB, pin);
        case 2: // Port C
            return getBit(PINC, pin);
        case 3: // Port D
            return getBit(PIND, pin);
    }

    return 0; // Default return
}

/**
 * @brief Toggles the digital state of the specified port_pin.
 * @param port_pin The port and pin number combined.
 */
void digitalToggle(uint8_t port_pin) {
    uint8_t port = port_pin / 8;
    uint8_t pin = port_pin % 8;

    switch(port) {
        case 0: // Port A
            toggleBit(PORTA, pin);
            break;
        case 1: // Port B
            toggleBit(PORTB, pin);
            break;
        case 2: // Port C
            toggleBit(PORTC, pin);
            break;
        case 3: // Port D
            toggleBit(PORTD, pin);
            break;
    }
}

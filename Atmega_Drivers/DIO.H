/**
 * Name: George Emad 
 * Tool:Doxygen Plugin
 * @file DIO.h
 * @brief This file is to be used to declare the DIO driver functions.
 */

#ifndef DIO_H_
#define DIO_H_

#include "stdTypes.h"

/**
 * @brief Configures the specified port_pin as input or output based on the provided state.
 * @param port_pin The port and pin number combined (e.g., PA0 for Port A, Pin 0).
 * @param state Input (0) or Output (1).
 */
void pinMode(uint8_t port_pin, uint8_t state);

/**
 * @brief Writes the specified state (high or low) to the given port_pin.
 * @param port_pin The port and pin number combined.
 * @param state High (1) or Low (0).
 */
void digitalWrite(uint8_t port_pin, uint8_t state);

/**
 * @brief Reads the digital state (high or low) of the specified port_pin.
 * @param port_pin The port and pin number combined.
 * @return High (1) or Low (0).
 */
uint8_t digitalRead(uint8_t port_pin);

/**
 * @brief Toggles the digital state of the specified port_pin.
 * @param port_pin The port and pin number combined.
 */
void digitalToggle(uint8_t port_pin);

#endif // DIO_H_

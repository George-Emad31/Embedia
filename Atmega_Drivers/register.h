/** 
 * Name: George Emad 
 * Tool:Doxygen Plugin
 * @file register.h
 * @brief This file is to be used to declare the macros for accessing AVR microcontroller registers.
 */

#ifndef REGISTER_H_
#define REGISTER_H_

// Port A
/**
 * @brief Macro for accessing PORTA register of AVR microcontroller.
 */
#define PORTA (*((volatile uint8_t*)0x3B))

/**
 * @brief Macro for accessing DDRA register of AVR microcontroller.
 */
#define DDRA (*((volatile uint8_t*)0x3A))

/**
 * @brief Macro for accessing PINA register of AVR microcontroller.
 */
#define PINA (*((volatile uint8_t*)0x39))

// Port B
/**
 * @brief Macro for accessing PORTB register of AVR microcontroller.
 */
#define PORTB (*((volatile uint8_t*)0x38))

/**
 * @brief Macro for accessing DDRB register of AVR microcontroller.
 */
#define DDRB (*((volatile uint8_t*)0x37))

/**
 * @brief Macro for accessing PINB register of AVR microcontroller.
 */
#define PINB (*((volatile uint8_t*)0x36))

// Port C
/**
 * @brief Macro for accessing PORTC register of AVR microcontroller.
 */
#define PORTC (*((volatile uint8_t*)0x35))

/**
 * @brief Macro for accessing DDRC register of AVR microcontroller.
 */
#define DDRC (*((volatile uint8_t*)0x34))

/**
 * @brief Macro for accessing PINC register of AVR microcontroller.
 */
#define PINC (*((volatile uint8_t*)0x33))

// Port D
/**
 * @brief Macro for accessing PORTD register of AVR microcontroller.
 */
#define PORTD (*((volatile uint8_t*)0x32))

/**
 * @brief Macro for accessing DDRD register of AVR microcontroller.
 */
#define DDRD (*((volatile uint8_t*)0x31))

/**
 * @brief Macro for accessing PIND register of AVR microcontroller.
 */
#define PIND (*((volatile uint8_t*)0x30))

#endif // REGISTER_H_

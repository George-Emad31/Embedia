/**
 * Name: George Emad 
 * Tool:Doxygen Plugin
 * @file bitMath.h
 * @brief This file is to be used to declare the bit manipulation macros.
 */

#ifndef BITMATH_H_
#define BITMATH_H_

/** @brief Macro to set a specific bit in a register */
#define setBit(reg, bitNum) ((reg) |= (1 << (bitNum)))

/** @brief Macro to get the value of a specific bit in a register */
#define getBit(reg, bitNum) (((reg) >> (bitNum)) & 0x01)

/** @brief Macro to clear a specific bit in a register */
#define clearBit(reg, bitNum) ((reg) &= ~(1 << (bitNum)))

/** @brief Macro to toggle a specific bit in a register */
#define toggleBit(reg, bitNum) ((reg) ^= (1 << (bitNum)))

#endif // BITMATH_H_

#ifndef _MAIN_H
#define _MAIN_H

#include <stddef.h>
#include <stdio.h>

/* Prints a character */
int _putchar(char c);
/* Converts a binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);
/* Prints the binary representation of a number */
void print_binary(unsigned long int n);
/* Returns the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);
/* Sets the value of a bit at a given index to 1 */
int set_bit(unsigned long int *n, unsigned int index);
/* Sets the value of a bit at a given index to 0 */
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
/* Checks the endianness of the system */
int get_endianness(void);

#endif

#include "main.h"
/**
* find_msb_position - Finds the position of the most significant bit.
* @number: Decimal value to find the most significant bit position.
*
* Return: The position of the most significant bit.
*/
int find_msb_position(unsigned long int number)
{
int i;
unsigned long int mask;
for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
{
mask = (1UL << i);
if (number & mask)
break;
}
return (i);
}
/**
* print_bin - Prints the binary representation of @number.
* @number: Decimal value to convert to binary.
*
* Return: Nothing.
*/
void print_bin(unsigned long int number)
{
int i;
unsigned long int mask;
i = find_msb_position(number);
for (; i >= 0; i--)
{
mask = (1UL << i);
_putchar((number & mask) ? '1' : '0');
}
}

/**
* set_bit - sets the value of a bit to 1 at a given
*           index.
*
* @n: pointer to the number
* @index: index to set the value of bit to 1
*
* Return: 1 if it worked OR -1 if it failed
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
if (index > (sizeof(unsigned long int) * 8))
return (-1);
mask = 1UL << index;
*n |= mask;
return (1);
}


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
* print_binary - prints the binary representation of @num
*
* @num: decimal value
*
* Return: nothing
*/
void print_binary(unsigned long int num)
{
int bit_pstn;
unsigned long int mask;
/* Find the position of the most significant bit */
bit_pstn = find_msb_position(num);
/* Print the binary representation */
for (; bit_pstn >= 0; bit_pstn--)
{
mask = (1UL << bit_pstn);
_putchar((num & mask) ? '1' : '0');
}
}

/**
* clear_bit - sets the value of a bit to 0 at a given index.
*
* @num_ptr: pointer to the number
* @index: index to set the value of bit to 0
*
* Return: 1 if it worked OR -1 if it failed
*/
int clear_bit(unsigned long int *num_ptr, unsigned int index)
{
unsigned long int mask;
if (index > (sizeof(unsigned long int) * 8))
return (-1);
mask = ~(1UL << index);
*num_ptr &= mask;
return (1);
}

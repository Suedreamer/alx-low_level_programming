#include "main.h"
/**
* print_bin_recursive - Recursively prints the binary representation of @nmbr
*
* @nmbr: Decimal value to convert to binary
*/
void print_bin_recursive(unsigned long int nmbr)
{
if (nmbr >> 1)
print_bin_recursive(nmbr >> 1);
_putchar((nmbr & 1) ? '1' : '0');
}

/**
* print_bin - Prints the binary representation of @nmbr
*
* @nmbr: Decimal value to convert to binary
*/
void print_bin(unsigned long int nmbr)
{
print_bin_recursive(nmbr);
}

/**
* get_bit - Gets a bit at a given index
*
* @n: Decimal value
* @index: Integer value of the bit position to get from @n
*
* Return: The value of the bit or -1 if an error occurred
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
if (index > sizeof(unsigned long int) * 8)
return (-1);
bit = ((n >> index) & 1);
return (bit);
}


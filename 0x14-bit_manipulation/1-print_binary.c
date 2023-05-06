#include "main.h"
/**
* get_binary_length - Find the length of the binary representation of @n
*
* @n: Value to find its binary length
*
* Return: lngth
*/
int get_binary_length(unsigned long int n)
{
int lngth = 0;
if (n == 0)
{
return (0);
}
while (n)
{
lngth++;
n >>= 1;
}
return (lngth - 1);
}
/**
* print_binary - A function that prints the binary representation
* of a decimal number
*
* @n: Decimal number to convert
*
* Return: Nothing
*/
void print_binary(unsigned long int n)
{
int msb_pstn;
if (n == 0)
{
_putchar('0');
return;
}
msb_pstn = get_binary_length(n);
while (msb_pstn >= 0)
{
if (n & (1UL << msb_pstn))
_putchar('1');
else
_putchar('0');
msb_pstn--;
}
}


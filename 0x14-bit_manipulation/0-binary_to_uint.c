#include "main.h"
/**
* binary_to_uint - Converts a binary number to an unsigned int
* @b: String containing 0 and 1 characters
*
* Return: The converted number, or 0 if @b contains an invalid character
*         or is null
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int rtnd_nmbr = 0;
if (!b)
{
return (0);
}
while (*b)
{
if (*b != '0' && *b != '1')
{
return (0);
}
rtnd_nmbr = (rtnd_nmbr << 1) | (*b - '0');
b++;
}
return (rtnd_nmbr);
}


#include "main.h"
/**
* get_endianness - checks the endianness of the system
*
* Return: 1 if little endian, 0 if big endian
*/
int get_endianness(void)
{
unsigned int test_nmbr = 1;
char *byte_pntr = (char *) &test_nmbr;
return (byte_pntr[0]);
}

#include "main.h"


/**
* main - Entry point
*
* Description: prints _putchar using putchar prototype
*
* Return: Always 0 (Success)
*/


int main(void)
{
char str[] = "_putchar";
int chr;


for (chr = 0; chr < 8; ++chr)
_putchar(str[chr]);
_putchar('\n');


return (0);
}

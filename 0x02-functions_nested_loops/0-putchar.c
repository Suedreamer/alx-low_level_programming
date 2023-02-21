#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
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


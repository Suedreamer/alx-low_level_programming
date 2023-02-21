#include"main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/

void times_table(void)
{
	int n, mult, prod;

	for (n = 0; n <= 9; ++n)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');

			prod = n * mult;

			/*
			 * put space if product is a single numbers
			 * place the first digit if its two numbers
			*/
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /*get the first digit*/

			_putchar((prod % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}

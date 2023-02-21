#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Calculates the sum of all the multiples of 3 or 5 below 1024.
*
* Return: Always 0 (success)
*/

int main(void)
{
int sum = 0;
int i;

/* Iterate through all natural numbers below 1024 */
for (i = 1; i < 1024; i++)
{
/* Check if the number is a multiple of 3 or 5 */
if (i % 3 == 0 || i % 5 == 0)
{
sum += i; /* Add the number to the sum */
}
}

/* Print the sum followed by a new line */
printf("%d\n", sum);

return (0);
}

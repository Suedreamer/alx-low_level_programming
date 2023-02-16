#include <stdio.h>
/**
 * main - a program that prints the size of various computer types
 * return 0(success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(int));
printf("Size of long int: %lu bytes(s)\n",(unsigned long)sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %lu byte(s) \n",(unsigned long)sizeof(float));
return (0);
}

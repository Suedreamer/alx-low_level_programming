#include <stdio.h>
/**
 * main - entry point
 *
 * return:lways 0 (success)
 */
int main(void){
	printf("Size of char: %lu byte(s) \n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s) \n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n",sizeof(long long int));
	printf("sie 0f a float:%lu byte(s)\n",sizeof(float));
	return (0);
}

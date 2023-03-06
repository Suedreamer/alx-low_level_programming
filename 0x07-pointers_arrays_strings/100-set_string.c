#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: double pointer to a string
 * @to: pointer to the string to be set
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}

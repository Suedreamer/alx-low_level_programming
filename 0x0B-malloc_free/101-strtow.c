#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* word_count - Counts the number of words in a string.
*
* @str: The string to count.
*
* Return: The number of words.
*/

int word_count(char *str)
{
int words = 0;

while (*str != '\0')
{
if (*str == ' ')
str++;
else
{
words++;
while (*str != ' ' && *str != '\0')
str++;
}
}

return (words);
}

/**
* free_array - Frees an array of strings.
*
* @ar: The array to free.
* @i: The size of the array.
*
* Return: Nothing.
*/

void free_array(char **ar, int i)
{
if (ar != NULL && i != 0)
{
while (i >= 0)
{
free(ar[i]);
i--;
}
free(ar);
}
}

/**
* strtow - Splits a string into an array of words.
*
* @str: The string to split.
*
* Return: A pointer to an array of strings or NULL if it fails.
*/

char **strtow(char *str)
{
int i, s, j, str_l, word;
char **string;

if (str == NULL || *str == '\0')
return (NULL);

str_l = word_count(str);

string = malloc((str_l + 1) * sizeof(char *));
if (string == NULL)
return (NULL);

for (i = s = 0; i < str_l; i++)
{
for (word = s; str[word] != '\0'; word++)
{
if (str[word] == ' ')
s++;

if (str[word] != ' ' && (str[word + 1] == ' ' || str[word + 1] == '\0'))
{
string[i] = malloc((word - s + 2) * sizeof(char));
if (string[i] == NULL)
{
free_array(string, i);
return (NULL);
}
break;
}
}

for (j = 0; s <= word; s++, j++)
string[i][j] = str[s];
string[i][j] = '\0';
}

string[i] = NULL;

return (string);
}


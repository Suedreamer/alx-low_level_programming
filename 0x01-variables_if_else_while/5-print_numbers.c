#include <stdio.h>
/** 
* main - prints numbers from 0 to 9.
*
* Return: Always 0 (success)
*/
int main(void)
{
    int a;

    for (a = 0; a < 10; a++)
    {
        printf("%d", a);
    }
    putchar('\n');
    return (0);
}

#include "main.h"

/**
* _puts - a function that prints a string
* @str: string input
* Return: string
*/
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
<<<<<<< HEAD
_putchar(str[i]);
}
_putchar('\n');
=======
putchar(str[i]);
}
putchar('\n');
>>>>>>> 7fbcfb5cec8fe3973d91c9cac118cd7e89e6451b
}

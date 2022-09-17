#include "main.h"

/**
* print_line   -  prints a line
* @n:  Defines the length of line to be printed
* Return:  Alwasy 0
*/

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
}

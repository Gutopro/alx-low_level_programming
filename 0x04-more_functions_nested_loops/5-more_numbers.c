#include <stdio.h>
#include "main.h"

/**
*more_numbers - entry point
*
*Returns: nothing
*/

void more_numbers(void)
{
int n, m;
for (n = 0; n < 10; n++)
{
for (m = 0; n <= 14; m++)
{
if (m > 9)
{
putchar((m / 10) + '0');
}
putchar((m % 10) + '0');
}
putchar(10);
}

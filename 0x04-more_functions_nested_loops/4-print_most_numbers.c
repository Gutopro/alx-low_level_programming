#include <stdio.h>
#include "main.h"

/**
*print_most_numbers - entry point
*
*Return: 0 if successful
*/
void print_most_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
if (n == 2 || n == 4)
{
continue;
else
printf("%i", n);
}
printf("\n");
}
}

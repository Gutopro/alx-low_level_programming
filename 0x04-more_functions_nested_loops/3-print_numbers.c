#include <stdio.h>
#include "main.h"

/**
*print_numbers - entry point
*
*Returns: 0 if successful
*/
void print_numbers(void)

{
int n;
for (n = 0; n < 10; n++)
{
putchar(n);
}
putchar(10);
}

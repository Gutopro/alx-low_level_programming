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
for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar(10);
}

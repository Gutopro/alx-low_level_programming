#include "main.h"
/**
*swap_int - swaps two integers
*@a - int to be swapped
*@b - int to be swapped
*/


void swap_int(int *a, int *b)
{
int swap;
  
swap = *a;
  
*a = *b;
*b = swap;
}

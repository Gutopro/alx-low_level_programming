#include "main.h"

/**
*_strlen - length of string
*@s: pointer to char
*@len: varaible for length
*Return: does not return anything
*/

int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0';)
{
++len;
}
return (len);
}

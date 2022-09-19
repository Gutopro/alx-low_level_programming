#include "main.h"

/**
*_strlen - length of string
*
*@len: varaible for length
*/

int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
++len;
return (len);
}

#include <stdio.h>
#include <stdlib.h>
/**
*main - prints all arguments recieved
*@argc: first parameter
*@argv: second parameter
*DESCRIPTION: prints all arguments it recieve
*Return: 0 if sucessful
*/
int main(int argc, char **argv)
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}

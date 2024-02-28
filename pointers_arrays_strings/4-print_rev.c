#include "main.h"
/**
*  print_rev - prints reverse of the string followed
* by a new line to standart output
* @str: string parameter
**/
void print_rev(char *str)
{
	int index, string;

	for (index = 0; str[index] != '\0'; index++)
	;
	for (string = index - 1; str[string] != '\0'; string--)
	{
	_putchar(str[string]);
	}
	_putchar('\n');
}

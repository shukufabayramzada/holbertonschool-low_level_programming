#include "main.h"
/**
* _puts - prints string followed
* by a new line to standart output
* @str: string parameter
**/
void _puts(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	{
	_putchar(str[string]);
	}
	_putchar('\n');
}

#include "main.h"
/**
* puts_half - print the half of the string
* @str: string
**/
void puts_half(char *str)
{
	int index, start_index, i;

	for (index = 0; str[index] != 0; index++)
	{
	;
	}
	start_index = index / 2;
	for (i = start_index; i < index; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
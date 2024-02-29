#include "main.h"
/**
* puts_half - print the half of the string
* @str: string
**/
void puts_half(char *str)
{
	int index, start_index, odd_case, i;

	for (index = 0; str[index] != 0; index++)
	{
	;
	}
	start_index = index / 2;
	if (index % 2 == 1)
	{
	odd_case = 1;
	start_index = index / 2 + odd_case;
	}
	for (i = start_index; i < index; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}

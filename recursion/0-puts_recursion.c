#include "main.h"
/**
 * _puts_recursion - function that prints a string
 * @s: string that will be printed
 **/
void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);

	if (*s == '\0')
	{
		_putchar('\n');
	}
}

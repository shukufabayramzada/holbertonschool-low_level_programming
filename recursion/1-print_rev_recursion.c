#include "main.h"
/**
 * _print_rev_recursion - check the code
 * @s: string to be printed
 **/
void _print_rev_recursion(char *s)
{
	if (*s > 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		return;
	}
}

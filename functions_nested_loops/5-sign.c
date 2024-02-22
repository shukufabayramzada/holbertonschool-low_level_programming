#include "main.h"
/**
 * print_sign - entry point or function
 * @n: checked parameter
 * Return: 1 0 or -1 depends on the case
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
		_putchar(48);
	return (0);

}

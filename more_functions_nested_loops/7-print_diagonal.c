#include "main.h"
/**
 * print_diagonal - function or entry point
 * @n: character that will be checked
 **/
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}

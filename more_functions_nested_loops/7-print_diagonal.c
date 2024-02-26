#include "main.h"
/**
 * print_diagonal - function or entry point
 * @n: character that will be checked
 **/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (i != j)
				{
					_putchar(' ');
				}
				else if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
	_putchar('\n');
}

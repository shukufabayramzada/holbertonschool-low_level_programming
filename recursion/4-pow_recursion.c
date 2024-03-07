#include "main.h"
/**
 * _pow_recursion - function returns the power of the number
 * Return: power of the number
 * @x: base
 * @y: power
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

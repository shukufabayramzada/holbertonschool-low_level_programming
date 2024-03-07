#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural squareroot
 * Return: natural square root
 * @i: square root of the number
 * @n: number for which we will find square root
 **/
int find_sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n, 1));
	}
}
/**
 * find_sqrt - helper function to find square root
 * @n: number that we have
 * @i: square root of the number
 * Return: square root of the number
 **/
int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, i + 1));
	}
}

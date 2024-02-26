#include "main.h"
/**
 * _isdigit - function or entry point
 * @c: character that will be checked
 * Return: 1 or 0 entry point
 **/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}



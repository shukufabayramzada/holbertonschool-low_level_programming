#include "main.h"
/**
 * _abs - functionor entry point
 * Return: c
 * @c: paramater that we checked
 **/
int _abs(int c)
{
	int abs_value;

	if (c < 0)
	{
		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}


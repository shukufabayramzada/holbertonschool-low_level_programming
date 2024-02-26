#include "main.h"
/**
 * _isupper - function or entry point
 * @c: character that will be checked
 * Return: 0 or 1 depends on the case
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

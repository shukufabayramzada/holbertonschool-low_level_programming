#include "main.h"
/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	while (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		num = num * 2 + (*b - '0');
		b++;
	}
	return (num);
}



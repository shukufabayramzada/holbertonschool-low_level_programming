#include "main.h"
/**
* _atoi - convert a string to an integer
* Return: Always 0.
* @s: given string
**/
int _atoi(char *s)
{
	int sign = 1;
	int integer = 0;
	int digit_found = 0;

	while (*s && (*s < '0' || *s > '9') && *s != '-' && *s != '+')
	s++;
	if (*s == '-')
	{
	sign = -1;
	s++;
	}
	else if (*s == '+')
	{
	s++;
	}

	while (*s >= '0' && *s <= '9')
	{
	integer = integer * 10 + (*s - '0');
	s++;
	digit_found = 1;
	}
	if (digit_found)
	{
	return (sign * integer);
	}
	else
	{
	return (0);
	}
}

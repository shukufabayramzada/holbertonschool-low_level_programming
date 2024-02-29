#include "main.h"
/**
* _atoi - convert a string to an integer
* Return: Always 0.
* @s: given string
**/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int integer = 0;
	

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
	if (*s == '-')
	{
	sign *= -1;
	s++;
	}
	}
	if (*s != '\0')
	{
	while (*s >= '0' && *s <= '9')
	{
	integer = integer * 10 + (*s - '0');
	s++;
	}
	}
	return (0);
}

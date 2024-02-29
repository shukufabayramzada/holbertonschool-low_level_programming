#include "main.h"
/**
* _atoi - convert a string to an integer
* Return: Always 0.
* @s: given string
**/
int _atoi(char *s)
{
	int sign;
	unsigned int integer;
	char *temp;

	temp = s;
	integer = 0;
	sign = 1;

	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
	if (*temp == '-')
	{
	sign *= -1;
	temp++;
	}
	}
	if (*temp != '\0')
	{
	do
	{
	integer = integer * 10 + (*temp - '0');
	temp++;
	}
	while (*temp >= '0' && *temp <= '9');
	}
	return (integer * sign);
}

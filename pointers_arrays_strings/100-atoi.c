#include "main.h"
#include <stdio.h>
/**
* _atoi - convert a string to an integer
* Return: Always 0.
* @s: given string
**/
int _atoi(char *s)
{
	int i, num;

	num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	num = num * 10 + (s[i] - 48);
	}
	printf("%d\n", num);
	return (0);
}

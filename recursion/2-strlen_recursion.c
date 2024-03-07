#include "main.h"
/**
 * _strlen_recursion - function returns the length of a string
 * Return: length
 * @s: string to be used
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

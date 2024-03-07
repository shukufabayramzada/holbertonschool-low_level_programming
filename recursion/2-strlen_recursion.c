#include "main.h"
/**
 * _strlen_recursion - function returns the length of a string
 * Return: length
 * @s: string to be used
 **/
int _strlen_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	if (s[i] == '\0')
	{
		return (i);
		_strlen_recursion(&s[i]);
	}
	return (0);
}

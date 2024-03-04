#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @c: character that will be looking
 * @s: string
 * Return: a pointer to the first occurence of the character c
 **/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c != '\0')
	{
		return (s);
	}
	return (NULL);
}

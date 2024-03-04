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
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
	{
	;
	}

	if (s[i] == c)
	{
	return (s + i);
	}
	else
	return (NULL);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicate the string
 * @str: source string that we have
 * Return: NULL or pointer to the duplicated string
 **/
char *_strdup(char *str)
{
	unsigned int i, len;
	char *new_string;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}

	new_string = malloc((len + 1) * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		new_string[i] = str[i];
	}

	new_string[i] = '\0';
	return (new_string);
}

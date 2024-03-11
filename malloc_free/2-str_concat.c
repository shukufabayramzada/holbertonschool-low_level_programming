#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the newly allocated memory
 **/
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *new_string;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		;
	}
	new_string = malloc((len1 + len2 + 1) * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		new_string[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		new_string[j + i] = s2[j];
	}
	new_string[len1 + len2] = '\0';
	return (new_string);
}


#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string two be compared
 * Return: Always 0 success.
 **/
int _strcmp(char *s1, char *s2)
{
	int i, j;
	int *p, *t;

	for (i = 0; s1[i] != '\0'; i++)
	{
		p = &i;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		t = &j;
	}
	if (p < t)
	{
		return (-15);
	}
	else if (p > t)
	{
		return (15);
	}
	else
		return (0);
}

#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* Return: the number of bytes in the initial segment of s
* @s: given string
* @accept: second string
**/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	;
	}
	for (j = 0; accept[j] != '\0'; j++)
	{
	;
	}
	while (s[i] != accept[j])
	{
	i++;
	if (s[i] == accept[j])
	{
	return (s[i]);
	}
	}
	return (0);
}

#include "main.h"
#include <stddef.h>
/**
* _strstr - locates a substring
* Return: a pointer to the beginning of the located string
* @haystack: main C string to be scanned.
* @needle: is the small string to be searched with-in haystack string.
**/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
	if (haystack[i] == needle[j])
	{
	return (&haystack[i]);
	}
	if (needle[j] == '\0')
	{
	break;
	}
	}
	}
	return (NULL);
}

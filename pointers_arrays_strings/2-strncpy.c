#include "main.h"
/**
 * _strncpy - copies a string
 * Return: string that copied from source string
 * @dest: destination string
 * @src: source string
 * @n: at most bytes
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

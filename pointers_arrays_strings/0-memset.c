#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: where memory area pointed to by
 * @n: first n bytes of the memory area
 * @b: constant bytes
 * Return: a pointer to the memory area s
 **/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr++ = b;
	}
	return (s);
}

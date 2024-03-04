#include "main.h"
/**
 * _memcpy - copies the memory area
 * Return: a pointer to dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr1 = dest;
	char *ptr2 = src;

	while (n--)
	{
		*ptr1++ = *ptr2++;
	}
	return (dest);
}

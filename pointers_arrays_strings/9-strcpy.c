#include "main.h"
/**
* *_strcpy - copies the string
* @dest: first parameter
* @src: second parameter
* Return: the pointer to dest
**/
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	for (; *src != '\0'; src++, dest++)
	{
	*dest = *src;
	}
	*dest = '\0';
	return (ptr);
}


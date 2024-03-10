#include "main.h"
/**
 * is_palindrome - check if string palindrome or not
 * @s: string
 * Return: 1 or 0 depends on the case
 **/
int is_palindrome(char *s)
{
	int i, j;
	int length = 0;
	
	while (s[length] != '\0')
	{
		length++;
	}
	
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}else
		{
			return (1);
		}
	}
	return (0);
}

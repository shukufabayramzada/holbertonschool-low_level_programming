#include "main.h"
/**
* string_toupper - function that changes lowercase letters to uppercase
* Return: string with uppercased letters
* @str: string that to be uppercased
**/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] -= 32;
	}
	}
	return (str);
}

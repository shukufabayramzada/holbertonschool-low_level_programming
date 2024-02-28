#include "main.h"
/**
* rev_string - reverses a strings
* @s: string parameter
**/
void rev_string(char *s)
{
	int index, string;
	char c;


	for (index = 0; s[index] != '\0'; index++)
	{
	;
	}
	for (string = 0; string < index / 2; string++)
	{
	c = s[string];
	s[string] = s[index - string - 1];
	s[index - string - 1] = c;
}
}

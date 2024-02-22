#include "main.h"
/**
 * _isalpha(int c)- function or entry point
 * @c: character that will be checked
 * Return: 1 or 0 depends on the case
 **/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 *_islower - function or entry point
 * Return: 0 or 1 depends on case (success)
 *@c: is parameter
 **/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

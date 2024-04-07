#include "main.h"
/**
 * get_endianness - a function that checks the endianness
 * Return: 1 or 0 depends on the case
 **/
int get_endianness(void)
{
	short a = 1;
	char *c = (char *)&a;

	if (*c)
		return (1);
	else
		return (0);
}

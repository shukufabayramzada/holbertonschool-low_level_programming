#include "main.h"
/**
 * get_bit - function that get value of bit at a given index
 * @n: number
 * @index: index
 * Return: the value of bit index or -1 if it failed
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}

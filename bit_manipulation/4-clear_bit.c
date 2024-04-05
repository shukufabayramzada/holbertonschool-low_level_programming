#include "main.h"
/**
 * clear_bit - set bit at a given index
 * @n: original number
 * @index: index
 * Return: 1 or -1  depends on the case
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	x = ~(x << index);
	*n &= x;
	return (1);
}


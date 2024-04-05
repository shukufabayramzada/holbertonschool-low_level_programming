#include "main.h"
/**
 * flip_bits - count the flip bits
 * @n: number that we have
 * @m: number to be compared with our number
 * Return: count
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}

#include "main.h"
#include <stdio.h>
/**
* print_diagsums - a function that prints the sum of
* the two diagonals of a squ are matrix of integers.
* @a: array of integers
* @size: size of an array
**/
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size ; i++)
	{
		sum1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size ; i++)
	{
		sum2 += a[i];
	a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}





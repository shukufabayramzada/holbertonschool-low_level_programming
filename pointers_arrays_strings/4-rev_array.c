#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @n: is the number of elements
 * @a: array of integers
 **/
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}


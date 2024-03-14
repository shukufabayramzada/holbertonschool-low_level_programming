#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - a function creates an array
 * @min: minimum element
 * @max: maximum element
 * Return: pointer to the alocated memory or NULL depends on the case
 **/
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min + 1; i++)
	{
		array[i] = min + i;
	}
	return (array);
}

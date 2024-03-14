#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - a function allocates memory for an array
 * @nmemb: number of elements
 * @size: bytes of ecah element
 * Return: pointer to the alocated memory or NULL depends on the case
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		array[i] = 0;
	}
	return (array);
}


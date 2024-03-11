#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: size of an array
 * @c: character that will be included into an array
 * Return: A pointer to an array or NULL depends on the case
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);

}

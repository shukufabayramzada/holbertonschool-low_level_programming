#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _ralloc - function that reallocates the memory
 * @ptr: is apointer previously allocated by malloc(old_size)
 * @old_size: size in bytes of the alloacted space for ptr
 * @new_size: new size in bytes of the new memory block
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if(new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return(ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (new_size < old_size)
	{
		old_size = new_size;
	}
	for (i = 0; i < old_size; i++)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (new_ptr);
}



#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - prints all elements of the list_t list
 * @h: pointer to our head node
 * Return: count of the nodes
 **/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		h = (*h).next;
		count++;
	}
	return (count);
}


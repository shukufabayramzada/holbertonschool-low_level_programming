#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to head node
 **/
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *new_node;


	while (current != NULL)
	{
		new_node = (*current).next;
		free((*current).str);
		free(current);
		current = new_node;
	}
}

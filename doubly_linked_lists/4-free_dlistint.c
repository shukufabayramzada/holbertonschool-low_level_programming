#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head node
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *new_node;

	while (current != NULL)
	{
		new_node = (*current).next;
		free(current);
		current = new_node;
	}
}

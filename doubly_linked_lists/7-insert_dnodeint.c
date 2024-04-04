#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert new_node at given index
 * @h: pointer to the head node
 * @idx: index in which we will add new
 * @n: data that we will be added to the linked 
 * Return: new_node taht we added
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	(*new_node).n = n;

	if (idx == 0)
	{
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
			new_node->next = *h;
			new_node->prev = NULL;
			*h = new_node;
			return (new_node);
	}
	current = *h;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	return (new_node);
}



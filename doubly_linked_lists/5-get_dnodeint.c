#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the haed node of the doubly linked list
 * @index: index of nth node
 * Return: nth nopde at the doubly linked list
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = (*current).next;
	}
	return (current);
}


#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * delete_dnodeint_at_index - deletes the node at index of
 * a dlistint_t linked list.
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 *
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index; i++)
		current = current->next;
	if (current == NULL)
		return (-1);
	current->prev->next = current->next;
	if ((*current).next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}



#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_dnodeint_end - add node at the end of the a dlistint_t list
 * @head: pointer to the head node
 * @n: pointer to the added integer
 * Return: address of new_node or NULL
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	(*new_node).n = n;
	(*new_node).next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		(*new_node).prev = NULL;
	}
	else
	{
		last = *head;
		while ((*last).next != NULL)
		{
			last = (*last).next;
		}
		(*last).next = new_node;
		(*new_node).prev = last;
	}
	return (new_node);
}



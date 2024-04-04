#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_dnodeint_at_index - insert new_node at given index
 * @h: pointer to the head node
 * @idx: index in which we will add new node
 * @n: data to be added new node
 * Return: 
 **/
int calcSize(dlistint_t *node)
{
	unsigned int size = 0;

	while (node != NULL)
	{
		node = (*node).next;
		size++;
	}
	return (size);
}
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int size = calcSize (*h);
	dlistint_t *temp;
	dlistint_t *new_node;
	dlistint_t *temp2;

	new_node = malloc(sizeof(dlistint_t));

	
	if (size < idx)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		dlistint_t *add_dnodeint(dlistint_t **head, const int n);
	}
	else if (idx == size)
	{
		dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
	}
	else
	{
		temp = *h;
		(*new_node).n = n;
		(*new_node).next = NULL;
		while (--idx)
		{
			temp = (*temp).next;
			temp2 = (*temp).next;
			(*new_node).prev = temp;
			(*temp).next = new_node;
			(*temp2).prev = new_node;
		}
	}
	return (new_node);
}






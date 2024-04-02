#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_dnodeint - add node at the beginning of the a dlistint_t list
 * @head: pointer to the head node
 * @n: pointer to the added integer
 * Return: address of new_node or NULL
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	(*new_node).n = n;
	(*new_node).next = *head;
	(*new_node).prev = NULL;

	 if (*head != NULL)
	 {
		 (*head)->prev = new_node;
	 }
	 *head = new_node;
	 return (new_node);
}



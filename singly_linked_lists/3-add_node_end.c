#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head node
 * @str: pointer to the string
 * Return: the address of the new element, or NULL if it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;
	

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	(*new_node).str = strdup(str);
	if ((*new_node).str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	(*new_node).len = 0;
	while (str[(*new_node).len] != '\0')
	{
		(*new_node).len++;
	}
	
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		last = *head;
		while((*last).next != NULL)
		{
			last = (*last).next;
		}

	(*last).next = new_node;
	}
	return (new_node);
}

	


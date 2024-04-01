#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head node
 * @str: pointer to the string
 * Return: the address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

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
	while (*str != '\0')
	{
		len++;
		str++;
	}
	(*new_node).len = len;
	(*new_node).next = *head;

	*head = new_node;
	return (new_node);
}

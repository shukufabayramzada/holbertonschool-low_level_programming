#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: point to the head node
 * Return: the sum
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += (*current).n;
		current = (*current).next;
	}
	return (sum);
}

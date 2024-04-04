#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_dnodeint_at_index - insert new_node at given index
 * @h: pointer to the head node
 * @idx: index in which we will add new
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	    unsigned int i;

	        if (h == NULL)
			        return (NULL);

		    new_node = malloc(sizeof(dlistint_t));
		        if (new_node == NULL)
				        return (NULL);
			    new_node->n = n;

			        if (idx == 0)
					    {
						            if (*h != NULL)
								                (*h)->prev = new_node;
							            new_node->next = *h;
								            new_node->prev = NULL;
									            *h = new_node;
										            return (new_node);
											        }

				    temp = *h;
				        for (i = 0; i < idx - 1 && temp != NULL; i++)
						        temp = temp->next;

					    if (temp == NULL)
						        {
								        free(new_node);
									        return (NULL);
										    }

					        new_node->next = temp->next;
						    new_node->prev = temp;
						        if (temp->next != NULL)
								        temp->next->prev = new_node;
							    temp->next = new_node;

							        return (new_node);
}

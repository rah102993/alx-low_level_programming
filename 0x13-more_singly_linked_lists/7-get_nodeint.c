#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list.
 *@head: a pointer to listint_t.
 *@index:  the index of the node, starting at 0.
 * Return: NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *now = head;

	while (now != NULL && i < index)
	{
		now = now->next;
		i++;
	}

	if (i != index)
		return (NULL);

	return (now ? now : NULL);
}

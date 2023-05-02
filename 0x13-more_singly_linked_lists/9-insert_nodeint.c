#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - a function that
 * inserts a new node at a given position.
 *@head: a double pointer to listint_t.
 *@idx: the index of the list where the new node should be added.
 *@n: value stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *now = *head;
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (!n_node || !head)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	for (a = 0; now && a < idx; a++)
	{
		if (a == idx - 1)
		{
			n_node->next = now->next;
			now->next = n_node;
			return (n_node);
		}
		else
			now = now->next;
	}
	return (NULL);
}

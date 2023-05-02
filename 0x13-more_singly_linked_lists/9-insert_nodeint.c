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
	unsigned int a = 0;
	listint_t *now = *head;
	listint_t *n_node;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	while (now != NULL && a < idx - 1)
	{
		now = now->next;
		a++;
	}

	if (a != idx - 1)
		return (NULL);

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = now->next;
	now->next = n_node;

	return (n_node);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - A function that adds
 * a new node at the end of a listint_t list.
 *@head: Double pointer to listint_t.
 *@n: Integer representing new node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *p_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	p_node = *head;
	while (p_node->next != NULL)
		p_node = p_node->next;

	p_node->next = n_node;

	return (n_node);
}

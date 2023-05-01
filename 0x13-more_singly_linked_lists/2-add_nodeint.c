#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - A function that adds a new node
 * at the beginning of a listint_t list.
 *@n: Integer representing new node.
 *@head: Double pointer to listint_t.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}

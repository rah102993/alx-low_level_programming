#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the
 * node at index index of a listint_t linked list.
 *@head: double pointer to listint_t.
 *@index: the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *now = *head;
	listint_t *before;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(now);
		return (1);
	}

	while (now != NULL && a < index)
	{
		before = now;
		now = now->next;
		a++;
	}

	if (now == NULL)
		return (-1);

	before->next = now->next;
	free(now);

	return (1);
}

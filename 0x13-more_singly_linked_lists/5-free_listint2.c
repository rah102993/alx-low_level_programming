#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 *@head: Double pointer to listnt_t.
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		*head = i;
		i = (*head)->next;
		free(*head);
	}
	*head = NULL;
}

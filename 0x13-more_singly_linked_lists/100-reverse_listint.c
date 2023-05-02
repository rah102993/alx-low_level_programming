#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 *@head: a double pointer to listint_t.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *bef = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = bef;
		bef = *head;
		*head = next;
	}

	*head = bef;

	return (*head);

}

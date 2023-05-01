#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 *@head: A double pointer to listint_t.
 *
 * Return: 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *list;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	list = *head;
	*head = (*head)->next;
	free(list);

	return (data);
}

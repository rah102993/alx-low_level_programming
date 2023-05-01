#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: A pointer to listint_t.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head;
		head = head->next;
		free(p);
	}
}

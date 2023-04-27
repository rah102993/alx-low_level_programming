#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 *@head: the list_t list to be freed.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}

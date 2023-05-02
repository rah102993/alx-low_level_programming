#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: a pointer to the head of listint_t.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *loop = head;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current > current->next || current > loop)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}

		current = current->next;

		if (current == loop)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			break;
		}

		if (current == NULL)
			break;

		if (loop->next == NULL || loop->next->next == NULL)
			break;

		loop = loop->next->next;
	}

	if (current == NULL)
	{
		printf("[NULL]\n");
		return (count);
	}

	printf("-> [%p] %d\n", (void *)current->next, current->next->n);

	return (count);
}

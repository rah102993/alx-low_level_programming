#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: a pointer to the name of the file to create.
 * @text_content: a pointer to the terminated string that will write
 * the file.
 *
 * Return: 1 on success,
 * -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int a, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, len);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}

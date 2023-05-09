#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 *@filename: name of text file to be read.
 *@letters: the number of letters it should read and print.
 *
 * Return: 0 if the file can not be opened or read,
 * 0 if filename is NULL,
 * 0 if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	c = read(a, buffer, letters);
	b = write(STDOUT_FILENO, buffer, c);

	free(buffer);
	close(a);
	return (b);
}

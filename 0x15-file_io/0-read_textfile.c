#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read and print text to standard output
 * @filename: pointer pointing to the file
 * @letters: number of characters to be read and printed
 * Return: -0 if fails or filename returns NULL else the bytes
 * function reads and writes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *ptr;

	if (filename == NULL)
		return (0);

	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, ptr, letters);
	w = write(STDOUT_FILENO, ptr, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(ptr);
		return (0);
	}

	free(ptr);
	close(o);

	return (w);
}

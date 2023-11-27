#include "main.h"

/**
 * read_textfile - Reading a text file and
 * printing it to the standard output
 * @filename: Pointer to file to be created
 * @letters: Number of letters to be read and printed
 * Return: 0 if file can not be opened or read,
 * 0 if filename is NULL, 0 if write fails or
 * does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;

	char *v;

	if (filename == NULL)
		return (0);

	v = malloc(sizeof(char) * letters);
	if (v == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, v, letters);
	w = write(STDOUT_FILENO, v, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(v);
		return (0);
	}

	free(v);
	close(o);

	return (w);
}

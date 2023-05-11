#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_buffer - function used to allocate
 * bytes to a buffer
 * @file: name of the file
 * Return: pointer
 */

char *create_buffer(char *file)
{
	char *ptr;

	ptr = malloc(sizeof(char) * 1024);

	if (ptr == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (ptr);
}

/**
 * close_file - function to close file
 * @fd: file descriptor
 */

void close_file(int fd)
{
	int a;

	a = close(fd);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function used to copy content
 * @argc: number of arguments
 * @argv: pointer to the argument
 * Return: 0 on Success
 * Else exit code 97 if argument incorrect
 * Else exit code 98 if file_from doesnot
 * exist or cannot read
 * Else exit code 99 if file_to cannot be written to or created
 * Else exit code 100 if file_to or file_from cannot be closed
 */

int main(int argc, char *argv[1])
{
	int from, to, r, w;
	char *ptr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ptr = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, ptr, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(ptr);
			exit(98);
		}

		w = write(to, ptr, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(ptr);
			exit(99);
		}

		r = read(from, ptr, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(ptr);
	close_file(from);
	close_file(to);

	return (0);
}

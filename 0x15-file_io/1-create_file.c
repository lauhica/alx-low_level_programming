#include "main.h"

/**
 * create_file - function used to create a file
 * @filename: pointer pointing to the file
 * @text_content: pointer pointing to a string
 * Return: -1 if function fails else 1
 */

int create_file(const char *filename, char *text_content)
{
	int file, filew, length;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
			;
		filew = write(file, text_content, length);
		if (filew == -1)
			return (-1);
	}
	close(file);
	return (1);
}

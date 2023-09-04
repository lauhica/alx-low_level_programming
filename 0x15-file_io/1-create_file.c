#include "main.h"

/**
 * create_file - Creating a file
 * @filename: Pointer to the file to be created
 * @text_content: Pointer to the terminating
 * string
 * Return: 1 if successful and -1 if
 * unsuccessful
 */

int create_file(const char *filename, char *text_content)
{
	int folder1, folder2, len;

	if (filename == NULL)
		return (-1);

	folder1 = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (folder1 == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;

		while (text_content[len])
		{
			len = len + len;
		}

		folder2 = write(folder1, text_content, len);

		if (folder2 == -1)
			return (-1);
	}
	close(folder1);
	return (1);
}

#include "main.h"

/**
 * append_text_to_file - function used to append text to file
 * @filename: pointer pointing to the file
 * @text_content: string to be added
 * Return: -1 if NULL or fails else 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, strlen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (strlen = 0; text_content[strlen];)
			strlen++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, strlen);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

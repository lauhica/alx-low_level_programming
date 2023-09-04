#include "main.h"

/**
 * append_text_to_file - Appending text at the end of
 * a line
 * @filename: Pointer pointing to the file
 * @text_content: Terminating string
 * Return: -1 if unsuccessful and 1 if
 * successful
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int append1, append2, string = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		string = 0;
		while (text_content[string])
			string++;
	}

	append1 = open(filename, O_WRONLY | O_APPEND);
	append2 = write(append1, text_content, string);

	if (append1 == -1 || append2 == -1)
		return (-1);

	close(append1);
	return (1);
}

#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: pointer
 *
 * @text_content: string
 *
 * Return: If the function fails or filename is NULL  -1
 *         If the file does not exist the user lacks write permissions - -1
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, pes = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (pes = 0; text_content[pes];)
			pes++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, pes);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}

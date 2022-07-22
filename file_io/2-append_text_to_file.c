#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: variable
 * @text_content: The string
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, len = 0;

	if (filename == NULL)
		return (-1);
	a = open(filename, O_APPEND  | O_RDWR);
	if (a == -1)
		return (-1);
	while (text_content && text_content[len] != '\0')
		len++;
	b = write(a, text_content, len);
	close(a);

	if (b == -1)
		return (-1);
	return (1);
}

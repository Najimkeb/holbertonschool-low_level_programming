#include "main.h"

/**
 * create_file - creates a file
 *@text_content: variable
 *@filename: variale
 *Return: create file value
 */

int create_file(const char *filename, char *text_content)
{

	int a, d, len = 0;

	if (filename == NULL)
		return (-1);

	a = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (a < 0)
		return (-1);

	while (text_content && text_content[len])
		len++;

	d = write(a, text_content, len);
	if (d < 0)
	{
		close(a);
		return (-1);
	}
	close(a);
	return (d);
}

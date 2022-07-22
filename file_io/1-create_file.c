#include "main.h"

/**
 * create_file - creates a file
 *@text_content: variable
 *@filename: variale
 *Return: create file value
 */

int create_file(const char *filename, char *text_content)
{

	int a, b, d, len = 0;
	char *c;

	if (filename == NULL)
		return (-1);

	a = open(filename, O_CREAT | O_RDWR, 0600);

	if (a < 0)
		return (-1);
	while (text_content && text_content[len])
		len++;

	c = malloc(sizeof(char) * len);
	if (c == 0)
		return (-1);
	b = read(a, c, len);
	if (b < 0)
	{
		free(c);
		return (-1);
	}
	d = write(STDOUT_FILENO, c, b);
	if (d < 0)
	{
		free(c);
		return (-1);
	}
	free(c);
	return (d);
	close(a);
}

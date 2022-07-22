#include "main.h"

/**
 * create_file - creates a file
 *@b: variable
 *@a: variale
 *return: value
 */

int create_file(const char *filename, char *text_content)
{

	int a, b, d, len = 0;
	char *c;

		if (filename == NULL)
			return (-1);

	a = open(filename, O_CREAT | O_RDWR);

		if (a < 0)
			return (-1);
	while (text_content && text_content [len])
			len ++;

	c = malloc(sizeof(char) * len);
	if (c == 0)
		return (-1);

	b = read (a, c, len);
	if (b < 0)
	{
		free(c);
		return (-1);
	}

	d = write (STDOUT_FILENO, c, b);
	if ( d < 0)
	{
		free(c);
		return (-1);
	}
	return (d);
}

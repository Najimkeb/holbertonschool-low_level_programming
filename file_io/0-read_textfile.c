#include "main.h"

/**
 * read_textfile -  that reads a text file and prints it
 * to the POSIX standard output
 *@filename: string
 *@letters: int
 * Return: value
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int a, b, d;
	char *c;

	if (filename == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	if (a < 0)
		return (0);

	c = malloc(sizeof(char) * letters);
	if (c == 0)
		return (0);

	b = read(a, c, letters);
	if (b < 0)
	{
		free(c);
		return (0);
	}
	d = write(STDOUT_FILENO, c, b);
	free(c);
	close(a);
	if (d < 0)
		return (0);
	return ((ssize_t)d);
}

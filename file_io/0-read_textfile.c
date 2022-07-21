#include "main.h"

/**
 * read_textfile -  that reads a text file and prints it to the POSIX standard output
 *
 *@a: open
 *@c:string
 *@d:write
 * Return: value
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a, b, d, i;
	char *c;

	if (filename == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	if (a == -1) 
		return (0);

	c = malloc(sizeof(char) * letters);
	if (c == 0)
		return (0);

	b = read(a, c, letters);
	if (b == -1)
	 return (0);
		 return (b);

	for (i = 0; c[i]; i++);
	d = write (STDOUT_FILENO, c, c[i]);
	if (d == 0)
		return (0);
	return (i);
}

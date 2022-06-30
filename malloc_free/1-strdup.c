#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *a;
	int b, c = 0;

	if (str == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		c++;

	a = malloc(sizeof(char) * (b + 1));

	if (a == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		a[b] = str[b];

	a[c] = '\0';

	return (a);
}

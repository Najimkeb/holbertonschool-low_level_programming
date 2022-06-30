#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		array[a] = c;

	return (array);
}

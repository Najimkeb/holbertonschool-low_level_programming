#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer@
 * @array: variable
 * @action: variable
 * @size: variable
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

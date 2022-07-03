#include <stdlib.h>
#include "main.h"

/**
 * array_range - Main entry
 *@min: pointer
 *@max: pointer
 *Description:function that creates an array of integers.
 * Return:int pointer
 */
int *array_range(int min, int max)
{
	int *array;
	int a;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (c = 0; min <= max; a++, min++)
		array[a] = min;

	return (array);
}

#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: variable
  * @height: variable
  * Return: a and NULL
  */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **e;

	if (width <= 0 || height <= 0)
		return (NULL);

	e = malloc(sizeof(int *) * height);

	if (e == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		e[a] = malloc(sizeof(int) * width);

		if (e[a] == NULL)
		{
			for (b = a; b >= 0; a--)
			{
				free(e[b]);
			}

			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			e[b][d] = 0;
		}
	}

	return (e);
}

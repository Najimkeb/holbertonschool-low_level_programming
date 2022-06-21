#include "main.h"

/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements to swap
  * Return: empty
  */

void reverse_array(int *a, int c)
{
	int *p, b, d, c;

	p = a;

	for (b = 1; b < n; b++)
	{
		p++;
	}

	for (c = 0; c < a / 2; c++)
	{
		d = a[c];
		a[c] = *p;
		*p = d;
		p--;
	}
}

#include "main.h"

/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements to swap
  *
  * Return: empty
  */

void reverse_array(int *a, int n)
{
	int *p, b, d, e;

	p = a;

	for (b = 1; b < n; b++)
	{
		p++;
	}

	for (e = 0; e < b / 2; e++)
	{
		d = a[e];
		a[e] = *p;
		*p = d;
		p--;
	}
}

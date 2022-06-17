#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements in the array a
 * @a: array to print
 * @n: number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int a = 0;

	while (a < n)
	{
		printf("%d", a[a]);
		if (a < (n - 1))
			printf(", ");
		a++;
	}
	printf("\n");
}

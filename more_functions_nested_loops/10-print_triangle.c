#include "main.h"

/**
 * print_triangle - check
 * @size: variable
 *
 */

void print_triangle(int size)
{

	char c = '#';
	int hight = 10;
	int i, j;

	for (i = 1; i <= hight, i++)
	{
		for (j = 0; j < hight - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < i ; j++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
}

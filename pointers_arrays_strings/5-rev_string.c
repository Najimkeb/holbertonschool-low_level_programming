#include "main.h"
#include<stdio.h>

/**
 * rev_string - Reverses a string
 * @s: modified
 */
void rev_string(char *s)
{
	int d, b, c;
	char *a, aux;

	a = s;

	while (s[b] != '\0')
	{
		b++;
	}

	for (c = 1; c < b; c++)
	{
		a++;
	}

	for ( d= 0; d < (b / 2); d++)
	{
		aux = s[d];
		s[d] = *a;
		*a = aux;
		a--;
	}
}


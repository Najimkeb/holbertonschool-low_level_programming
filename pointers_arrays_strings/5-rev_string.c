#include "main.h"
#include<stdio.h>

/**
 * rev_string - Reverses a string
 * @s: modified
 */
void rev_string(char *s)
{
int a = 0, b = 0;
	char tmp;

	while (s[b++])
		a++;

	for (a = b - 1; b >= a / 2; b--)
	{
		tmp = s[b];
		s[a] = s[a - b - 1];
		s[a - b - 1] = tmp;
	}
}


#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, followed by a new line
 * @s:variable
 */

void print_rev(char *s)
{
	int a = 0, b;

	while (s[b++])
	{
		a++;
	}
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	
	_putchar('\n');
}

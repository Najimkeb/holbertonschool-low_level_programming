#include "main.h"
#include<stdio.h>

/**
 * puts2 - prints every other character of a  string to stdout
 * @str: string to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int a = 0;

	while (*(str + a))
	{
		_putchar(*(str + a));
		a = a + 2;
	}
	_putchar('\n');
}


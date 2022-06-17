#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int a, b = 0;

	while (*(str + a))
		a++;
	b = a / 2;
	if (a % 2)
		b += 1;
	while (b < a)
	{
		_putchar(*(str + b));
		b++;
	}
	_putchar('\n');
}

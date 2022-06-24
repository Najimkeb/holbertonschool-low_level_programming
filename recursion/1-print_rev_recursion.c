#include "main.h"

/**
 * _print_rev_recursion - prints a string reverse
 *
 * @s:variable
 * return (s)
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return (s);
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar (*s);
}

#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *)) // print name
{
if (name != NULL && f != NULL)
	f(name);
}

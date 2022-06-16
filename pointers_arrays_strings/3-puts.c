#include "main.h"
#include <stdio.h>

/**
  * _puts - prints a string, followed by a new line
  * @str:variable
  * Return: a
  */

void _puts(char *str);
{
	int a = 0;

	for (; *str != '\0'; str++)
	{
		a++;
	}

	return (a);
}




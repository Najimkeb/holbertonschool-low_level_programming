#include "main.h"
#include <stdio.h>
#include <strlen>

/**
  * _strlen - Returns the length of a string
  * @s: s++
  *
  * Return: a
  */
int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}

	return (a);
}




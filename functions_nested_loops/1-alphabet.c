/*
 * File: 1-alphabet.c
 *
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
putchar(c);
putchar('\n');
return (0);
}


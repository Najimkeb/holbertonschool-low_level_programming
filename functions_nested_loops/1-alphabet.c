/*
*File: 1-alphabet.c
*
*/

#include "main.h"
#include<stdio.h>
/**
*  print_alphabet - prints the alphabet in lowercase, followed by a new line.
*/
int print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
}

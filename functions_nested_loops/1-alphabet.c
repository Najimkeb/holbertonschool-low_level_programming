/*
*File: 1-alphabet.c
*
*/

#include "main.h"

/**
*  print_alphabet - prints the alphabet in lowercase, followed by a new line.
*print_alphabet();
*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
}

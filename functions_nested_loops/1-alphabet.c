/*
*File: 1-alphabet.c
*
*/

#include<stdio.h>
#include"main.h"
/**
*print_alphabet - prints the alphabet in lowercase, followed by a new line.
Return: Always 0.
*/
void print_alphabet(void);
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
print_alphabet();
return (0);
}

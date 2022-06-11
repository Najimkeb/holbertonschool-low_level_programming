#include<stdio.h>
#include"main.h"
#include"_putchar"
/**
*print_alphabet - prints the alphabet in lowercase, followed by a new line.
Return: Always 0.
*/
void print_alphabet(void);
{
char c;
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
print_alphabet();
return (0);
}

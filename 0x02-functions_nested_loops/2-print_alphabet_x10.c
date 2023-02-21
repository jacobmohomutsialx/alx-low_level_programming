#include "main.h"

/**
 * print_alphabet_x10 - prints out the alphabet
 * main - uses built in function
 * Return: 0 if succesful
 */

void print_alphabet_x10(void)
{
char l;
int x = 0;

for (x = 0; x < 10; x++)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
}
}

#include "main.h"

/**
 * puts2 - prints every other character
 * @str: the string
 * Return: Always 0.
 */

void puts2(char *str)
{
int c = 0, i = 0;

while (str[c] != '\0')
c++;

while (i < c)
{
_putchar(str[i]);
i = i + 2;
}
}

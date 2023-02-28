#include "main.h"
#include <string.h>
/**
 * puts_half - print second half of string
 * @str: the string
 * Return: Always 0.
 */

void puts_half(char *str)
{
int i;
int len = 0;
int n;

while (str[len] != '\0')
{
len++;
}

if (len % 2 != 0)
{
n = (len - 1) / 2;
for (i = (len - n); i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
else
n = len / 2;
for (i = (len - n); i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

#include "main.h"
#include <string.h>
/**
 * puts_half - print second half of string
 * @str: the string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i, half;

	i = 0;

	while (str[i] != '\0')
		i++;
	half = (i) / 2;
	if (i % 2 != 0)
		half = ((i - 1) / 2) + 1;
	for (; half < i; half++)
		_putchar(str[half]);
	_putchar('\n');
}

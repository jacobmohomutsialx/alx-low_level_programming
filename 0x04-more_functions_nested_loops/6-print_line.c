#include "main.h"

/**
 * print_line - prints staight line of length n
 * @n: parsed value that determines lenth of straight line
 */

void print_line(int n)
{
for (; n > 0; n--)
putchar('_');
putchar('\n');
}

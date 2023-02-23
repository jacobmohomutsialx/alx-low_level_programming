#include "main.h"

/**
 * print_diagonal - prints diagonal line of length n
 * @n: parsed value that determines lenth of diagonal line
 */

void print_diagonal(int n)
{
if (n <= 0)
putchar('\n');
for (int i = 0; i < n; i++)
{
for (int c = 0; c < i; c++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
putchar('\n');
}

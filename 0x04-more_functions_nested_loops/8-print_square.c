#include "main.h"

/**
 * print_square - prints a square
 * @size: parsed value that determines size of the square
 */

void print_square(int size)
{
int i, c;
if (size <= 0)
putchar('\n');
for (i = 0; i < size; i++)
{
for (c = 0; c < size; c++)
{
putchar('#');
}
putchar('\n');
}
}

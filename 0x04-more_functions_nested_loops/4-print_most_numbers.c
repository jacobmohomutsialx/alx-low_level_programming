#include "main.h"

/**
 * print_most_numbers - prints numbers 0 too 9 except for 2&4 then newline
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
{
continue;
}
_putchar(i + '0');
}
_putchar('\n');
}

#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times the newline
 *
 */

void more_numbers(void)
{
int i, c = 0;
while (c < 10)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
_putchar (i / 10 + '0');
_putchar (i % 10 + '0');
}
c++;
_putchar ('\n');
}
}

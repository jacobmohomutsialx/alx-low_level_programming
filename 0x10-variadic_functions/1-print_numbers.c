#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vlist, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(vlist);
}

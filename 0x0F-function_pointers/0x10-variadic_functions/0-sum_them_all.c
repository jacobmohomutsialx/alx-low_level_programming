#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 * Return: 0 if n = 0 or sum of parameters if succesful
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	int sum = 0;
	unsigned int i;

	if (!n)
		return (0);

	va_start(vlist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vlist, int);

	va_end(vlist);

	return (sum);
}

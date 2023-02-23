#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if input is a digit
 * @c: is the value parsed
 * Return: 1 if digit otherwaise 0
 */

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
return (0);
}

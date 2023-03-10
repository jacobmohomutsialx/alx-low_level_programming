#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: takes in the input character
 * Return: 1 If character is uppercase
 */

int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
return (0);
}

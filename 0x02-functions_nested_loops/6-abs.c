#include "main.h"

/**
 * _abs - determine the absolute value of an integer
 * @a: variable to determine the absolute value of an integer
 * Return: a if succesful
 */

int _abs(int a)
{
if (a < 0)
a *= -1;
return (a);
}

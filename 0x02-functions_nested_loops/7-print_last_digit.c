#include "main.h"

/**
 * print_last_digit - extract last number of a variable
 * @i: variable where we extract last number
 * Return: i if succesful
 */

int print_last_digit(int i)
{
_putchar(i%10 + '0');
return (i + '0');
}

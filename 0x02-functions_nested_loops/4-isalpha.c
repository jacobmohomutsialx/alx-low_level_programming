#include "main.h"

/**
 * _islower - checks if input is lowercase or uppercase
 * @c: variable to determine if input is lowercase or uppercase
 * main - uses built in function
 * Return: 0 if succesful
 */

int _isalpha(int c)
{
int i;
i = 0;
if (c >= 'a' && c <= 'z' && c >= 'A' && c  <= 'Z')
{
i = 1;
}
return (i);
}

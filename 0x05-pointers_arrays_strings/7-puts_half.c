#include "main.h"
#include <string.h>
/**
 * puts_half - print second half of string
 * @str: the string
 * Return: Always 0.
 */

void puts_half(char *str)
{
int i;
int len = strlen(str) / 2;

if (strlen(str) % 2 != 0)
{
len = (strlen(str) - 1) / 2;
for (i = (strlen(str) - len); i <= strlen(str) - 1; i++)
{
fprintf(stdout, "%c", str[i]);
}
}
else
for (i = (strlen(str) - len); i <= strlen(str) - 1; i++)
{
fprintf(stdout, "%c", str[i]);
}
}

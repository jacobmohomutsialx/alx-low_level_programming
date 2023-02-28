#include "main.h"
#include <stdio.h>

/**
 * rev_string - return a string in reverse
 * @s: the string
 * Return: Always 0.
 */

void rev_string(char *s)
{
char rev;
int c = 0;
int i;

while (s[c] != '\0')
c++;
for (i = 0; i < c; i++)
{
c--;
rev = s[i];
s[i] = s[c];
s[c] = rev;
}
return (rev);
}

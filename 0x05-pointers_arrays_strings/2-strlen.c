/**
 * _strlen - gets length of string
 * @s: string
 * Return: value of i
 */

int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

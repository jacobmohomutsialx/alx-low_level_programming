#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len])
	{
		len++;
	}

	while (i < n && src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
	}

	dest[len + n + 1] = '\0';

	return (dest);
}

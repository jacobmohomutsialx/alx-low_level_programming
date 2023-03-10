#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, rm = 0, l;

	while (s1[i])
	{
		i++;
	}

	while (s2[j])
	{
		j++;
	}

	if (i <= j)
	{
		l = i;
	}
	else
	{
		l = j;
	}

	while (k <= l)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			rm = s1[k] - s2[k];
			break;
		}

		k++;
	}

	return (rm);
}

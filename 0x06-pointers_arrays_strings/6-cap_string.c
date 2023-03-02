#include "main.h"
#include <stdio.h>

/**
  * cap_string - ...
  * @s: ...
  *
  * Return: char value
  */
char *cap_string(char *s)
{
	int i = 0; 
	int j;
	int c = 13;
	char del[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[i])
	{
		j = 0;

		while (j < cspc)
		{
			if ((i == 0 || s[i - 1] == del[j]) && (s[i] >= 97 && s[i] <= 122))
				s[i] -= 32;

			j++;
		}

		i++;
	}

	return (s);
}

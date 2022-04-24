#include "main.h"
#include <stdio.h>

/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercae
 * @s1: is a pointer type char
 * Return: always 0
 *
 */
char *string_toupper(char *s1)
{
	int i, k;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		k = 0;
		for (j = 'a'; j <= 'z', j++, k++)
		{
			if (s1[i] == j)
				s1[i] = l[k];
		}
	}

	return (s1);
}

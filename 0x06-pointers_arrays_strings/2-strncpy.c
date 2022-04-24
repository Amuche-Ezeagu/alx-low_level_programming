#include "main.h"
#include <stdio.h>

/**
 * _strncpy - a function that copies a string
 * @dest: is a pointer type char
 * @src: is a pointer type char
 * @n: is an int variable
 * Return: 0 always
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

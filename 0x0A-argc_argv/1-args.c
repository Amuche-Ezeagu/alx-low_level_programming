#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into main
 * @argc: number of command line arguments
 * @argv: array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed into main
 * @argc: number of command line arguments
 * @argv: array name
 * Return: o
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

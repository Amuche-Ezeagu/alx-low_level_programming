#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: A pointer to an integer to swap
 *
 * @b: A pointer to another integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

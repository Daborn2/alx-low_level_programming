#include "main.h"

/**
 * swap_int - swaps
 * @a: interger
 * @b: integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: int to be checked/ swapped
 * @b: int to be checked/ swapped
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

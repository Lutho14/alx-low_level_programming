#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - takes pointer to an int as parameter
 * @n: int to be checked
 * Return: always 0
 */

void reset_to_98(int *n)
{
	int n;

	n = 98;
	printf("n=%d\n", n);
	reset_to_98(&n);
	return (0);
}

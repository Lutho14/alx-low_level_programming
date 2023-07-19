#include "main.h"

/**
 * print_alphabet_x10 - make alphebet x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j;
	int i;

	i = 0;

	while (i < 10)
	{
		j = 'z';

		while (j <= 'z')
		{
			_putchar(j);
			i++;
		}
		_putchar('\n');
		i++;
	}
}

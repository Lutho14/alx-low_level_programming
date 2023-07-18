#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times
 *
 * follwed by a new line
 */

void print_alphabet_x10(void)
{
	int j;
	int i;

	i = '0';

	while (i < 10)
	{
		j = 'z';

		while (j <= 'z')
		{
			_putchar(j);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

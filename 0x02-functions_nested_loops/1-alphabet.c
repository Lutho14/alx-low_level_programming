#include "main.h"

/**
 * print_alphabet - a function that print the alphabet
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a', i <= 'z', i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}

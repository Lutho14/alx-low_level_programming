#include "main.h"

/**
 * _puts_rec0-puts_recursion.cursion - prints a string
 * @s: input
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}

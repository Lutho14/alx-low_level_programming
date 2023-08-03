#include "main.h"

/**
 * _strlen_recursion - returns lenght of string
 * @s: the string to be mesured
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}

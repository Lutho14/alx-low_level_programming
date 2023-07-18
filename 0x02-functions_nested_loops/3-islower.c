#include "main.h"

/**
 * int _islower - checks for lowercase character
 * _islower - check if char is lowercase
 * @c: int to be checked
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

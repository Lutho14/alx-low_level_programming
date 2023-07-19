#include "main.h"

/**
 * @c: int checked
 * _isalpha - checks for alphabetic character
 * Return: 1 if c is a letter, otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

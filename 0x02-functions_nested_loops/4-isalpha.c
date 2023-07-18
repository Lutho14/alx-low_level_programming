#include "main.h"

/**
 * int _isalpha - checks for alphebetic character
 * @c: int checked
 * _isalpha - char checked for alphabetic character
 * Return: 1 if c is a letter, otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

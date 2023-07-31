#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memeory stored
 * @src: momory where is copied
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;


	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}

#include "main.h"

/**
 * *_strcpy - function taht copies the string pointed
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for (; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

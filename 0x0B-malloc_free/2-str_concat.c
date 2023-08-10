#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: conatenates of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	size_t i, j, n, m;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (n = 0; n < i; n++)
	{
		ptr[n] = s1[n];
	}
	for (m = 0; m <= j; m++)
	{
		ptr[n] = s2[m];
		n++;
	}
	return (ptr);
}

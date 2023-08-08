#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space
 * @str: char
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *j;
	int i, l = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	j = malloc(sizeof(char) * (i + 1));

	if (j == NULL)
		return (NULL);

	for (l = 0; str[l]; l++)
		j[l] = str[l];

	return (j);
}

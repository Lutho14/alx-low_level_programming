#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **strtow - splits a string into words
 * @str: string to evaluate
 * Return: 0
 */

char **strtow(char *str)
{
	int i, j, n;

	i = 0;
	n = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			n++;
		}
	}
	return (n);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: 0
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;

	return (matrix);
}

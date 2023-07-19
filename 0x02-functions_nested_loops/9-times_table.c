#include <stdio.h>
#include "main.h"

/**
 * times_table - checks that prints the 9 times table, starting from 0
 */

void times_table(void)
{
	int i, j, k;

	for (i = 1; i < n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			k = j * i;
			printf("%d "' k);
		}
		printf("\n");
	}
}
int main ()
{
	times_table(10);
	return (0);
}

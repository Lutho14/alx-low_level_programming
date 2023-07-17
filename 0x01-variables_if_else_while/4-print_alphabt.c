#include <stdio.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase == 'e' || lowercase == 'q')
		{
			lowercase += 1;
		}
		else
		{
			putchar(lowercase);
			lowercase += 1;
		}
	}
	putchar('\n');
	return (0);
}

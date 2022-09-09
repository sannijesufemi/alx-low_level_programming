#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints both lower and UPPER case of the alphabet
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
	char lower = 'a';
	char UPPER = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		++lower;
	}

	while (UPPER <= 'Z')
	{
		putchar(UPPER);
		++UPPER;
	}
	putchar('\n');

	return (0);
}

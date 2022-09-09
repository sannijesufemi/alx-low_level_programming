#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This displays the UPPERCASE of the alphabets
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
	char lower = 'a';
	char UPPER = 'A';

	while (lower <= 'a')
	{
		putchar(lower);
		++lower;
	}

	while (UPPER <= 'A')
	{
		putchar(UPPER);
		++UPPER;
	}
	putchar('\n');

	return (0);
}

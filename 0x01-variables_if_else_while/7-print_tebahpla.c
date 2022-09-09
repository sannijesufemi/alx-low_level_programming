#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the lowercase in reverse order
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		--letter;
	}
	putchar('\n');

	return (0);

}

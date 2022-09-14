#include"main.h"

/**
 * print_alphabet_x10 - Print lower case a-z ten(10) times
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char ch = 'a';
	int count = 0;

	while (count < 10)
	{
		for (ch = 'a', ch <= 'z', ++ch)
			putchar(ch);
		_putchar('\n');
	}
}



#include"main.h"

/**
 *print_alphabet: This prints lowercase a -z using the 
 *		_putchar function as print
*/

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		++ch;
	}
	_putchar('\n');
	return (0);
}


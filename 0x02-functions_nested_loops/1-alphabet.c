#include"main.h"

/**
 * main - Entry point
 *
 * Description - print lowercase a - z using _putchar function
 *
 * Return: Always 0 (Success)
*/

int main(void)
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


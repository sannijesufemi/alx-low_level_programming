#include"main.h"

/**
 * main - Entry point
 *
 * Description: Prints _putchar using th putchar prototype
 *	in the main.h file
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		putchar(str[ch]);
	_putchar('\n');

	return (0);
}

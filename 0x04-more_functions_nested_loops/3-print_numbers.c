#include"main.h"

/**
 * print_numbers - This prints 0 to 9 on new lines
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; ++num)
	{
		_putchar(num + 48);
	}
	_putchar('\n');
}

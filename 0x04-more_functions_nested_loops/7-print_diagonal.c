#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: The number of times the / character will be printed
 *
*/

void print_diagonal(int n)
{
	int dgln, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (dgln = 1; dgln <= n; ++dgln)
		{
			for (space = 1; space <= dgln; ++space)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}

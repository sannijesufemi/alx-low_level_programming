#include"main.h"

/**
 * print_sign - This print the sign +, - of a number n
 *		or 0 if n = n
 * @n: This checks the input from user
 *
 * Return: return 1 if n > 0, 0 if n = 0, -1 if n < 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48 + 0);
		return (0);
	}
	else if (n < 1)
	{
		_putchar(45 + 0);
		return (-1);
	}
}





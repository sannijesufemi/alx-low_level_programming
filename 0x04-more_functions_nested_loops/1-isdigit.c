#include"main"

/**
 * _isdigit - Checks if the input  is a digit or not
 * @c: input to check
 *
 * Return: 1 if its a digit, 0 if otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

#include"main.h"

/**
 * _islower - Checks for lowercase character
 *
 * @c : parameter for islower function
 *
 * Return: returns 1 if 'c' is lower
 *	else, 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

#include"main.h"

/**
 * _isupper - Checks if a character is upper or lower
 * @c: character input to check from user
 *
 * Return: returns 1 if it is uppercase, 0 if lowercase
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}



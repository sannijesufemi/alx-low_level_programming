#include"main.h"

/**
 * _abs - This compute the absolute value of a number
 *
 * @n: Takes an integer input for the function
 *
 * Return: returns value n
*/

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

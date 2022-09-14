#include"main"

/**
 * _isalpha - This checks for alphabet; lower and uppercase
 *
 * @c: The parameter for isalpha function
 *
 * Return: returns 1 if it is 'c' else; 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

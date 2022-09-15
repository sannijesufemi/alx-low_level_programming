#include <unistd.h>

/**
 * _putchar -  This writes the character 'c' to stdout
 * @c: This is the parameter to be printed
 *
 * Return: On success 1, -1 for error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

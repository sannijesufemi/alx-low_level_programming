#include <stdio.h>

/**
 * main - main Entry point
 *
 * Description: This print the lowercase of the alphabets
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lower = 'a'; /* variable initialization*/

	while (lower <= 'z')
	{
		putchar(lower);
		++lower; /*increment variable lower*/
	}
	putchar('\n');

	return (0);

}


#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints 0 to 9 using the putchar() function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		/*This converts the value to ASCII*/
		putchar(num + '0');
		++num;
	}
	putchar('\n');
	return (0);
}


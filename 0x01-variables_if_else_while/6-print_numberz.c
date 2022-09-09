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
	char i;

	while (num <= 9)
	{
		i = (int)num;
		putchar(i);
		++num;
	}
	putchar('\n');
	return (0);
}


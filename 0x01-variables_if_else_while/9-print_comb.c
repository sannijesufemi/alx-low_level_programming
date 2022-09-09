#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0 - 9 using putchar() function only
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + 48);
		
		if (num != 10)
		{
			putchar(',');
			putchar(' ');
		}
		++num;
	}
	putchar('\n');
	return (0);
}

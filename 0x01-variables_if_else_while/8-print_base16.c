#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Description: print all number of bas16 in lowercase
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
	int hex = 48; /* 48 in dec equals zero in ASCII */

	while (hex <= 102) /*102 represent f*/
	{
		putchar(hex);

		if (hex == 57) /*This represents 9*/
			hex += 39; /*jumps 96 '*/
		++hex; /*hex becomes 97:a */
	}
	putchar('\n');

	return (0);
	

}


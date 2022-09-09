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
	char letters = 'a'; /* variable initialization*/

	while (letters <= 'z')
	{
		putchar(letters);
		++letters; /*increment lettters*/
	}

}


#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Description: this get the last digit of n and compare with 0, 5, 6
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n, last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_num = n % 10; /*modulo operator to get the last digit*/

	if (last_num > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	else if (last_num == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_num);
	else if (last_num < 6 && last_num != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);

	return (0);
}

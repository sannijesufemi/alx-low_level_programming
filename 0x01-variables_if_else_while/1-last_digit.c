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
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_num = n % 10; /*This use modulo operator to get the last digit*/

	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0", n, last_digit);
	else if (if last_digit < 6 && last_digit != 0)
		printf("Last digit of %d is %d and is less than 6 and no 0", n, last_digit);

	return (0);
}

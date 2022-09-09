#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry Point
 *
 * Description: This check if a random number is +,- or 0
 *
 * Return: Will output the value of n
 * and the main system call (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}

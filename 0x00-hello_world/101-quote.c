#include<unistd.h>

/**
*main - Entry point
*
*Description: Printing a string to the output stream
*	No use of puts and printf function
*
*Return: This will return (1) as error
*/
int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quot, 59);
	return (1);
}

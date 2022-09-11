#include <stdio.h>

/**
 * main - Entry point
 *
 * Desscription: using the main function
 * this program prints "programming is positive, zero or negative"
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

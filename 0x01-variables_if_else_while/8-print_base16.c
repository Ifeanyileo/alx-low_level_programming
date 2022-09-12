#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: usingbthe function
 * this program prints "Programming is positive, zer or negative"
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

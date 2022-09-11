#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putcher(ch);
	putcher('\n');
	return (0);
}

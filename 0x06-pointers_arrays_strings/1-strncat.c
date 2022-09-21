#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes from src the function will use 
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *tmp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (tmp);
}

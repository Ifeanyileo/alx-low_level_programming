#include "main.h"
#include <string.h>

/**
 * main - Emtry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Returm: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');
}

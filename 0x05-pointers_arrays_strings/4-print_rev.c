#include "main.h"

/**
 ** print_rev - Prints a string in reverse.
 ** @s: string to tbe reserved.
 **/
void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}


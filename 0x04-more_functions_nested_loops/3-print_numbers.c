#include "main.h"

/**
 * print_numbers - prints 0 - 9 integers
 *   Return: integers
 **/


void print_numbers(void)
{

	int num;

	for (num = '0'; num <= '9'; num = num + 1)

	{


		_putchar(num);

	}


	_putchar('\n');

}

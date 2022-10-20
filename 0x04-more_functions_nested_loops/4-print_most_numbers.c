#include "main.h"
/**
 *  ** print_most_numbers - prints numbers except 2 and 4
 *    ** Return: values
 **/

void print_most_numbers(void)

{


	int num;

	for (num = '0'; num <= '9'; num += 1)


	{


		if (num != '2' && num != '4')


		{


			_putchar(num);


		}


	}

	_putchar('\n');

}

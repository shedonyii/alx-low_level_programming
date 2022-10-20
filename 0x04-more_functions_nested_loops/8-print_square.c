i#include "main.h"
/**
 *  ** print_square - prints square
 *    *   * @size: parameter
 *
 *      *    * Return: size of the square
 **/
void print_square(int size)

{

	int hash1;

	int hash2;

	if (size > 0)

	{

		for (hash1 = 0; hash1 < size; hash1++)


		{

			for (hash2 = 1; hash2 < size; hash2++)


			{

				_putchar('#');

			}

			_putchar('#');

			_putchar('\n');

		}

	}

	else


	{
		_putchar('\n');

	}

}

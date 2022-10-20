#include "main.h"
/**
 * ** print_diagonal - goes in diagonal like a bishop
 *   *   * @n: diagonal parameter
 *     *    * Return: diagonal
 **/
void print_diagonal(int n)

{

	int line;

	int space;

	if (n > 0)

	{

		for (line = 0; line < n; line++)

		{

			for (space = 0; space < line; space++)


			{

				_putchar(' ');

			}

			_putchar('\\');

			_putchar('\n');

		}

	}

	else



	{

		_putchar('\n');

	}

}

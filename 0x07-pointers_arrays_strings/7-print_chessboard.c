#include "main.h"
/**
 *  ** print_chessboard - a function that prints the chessboard
 *    *   * @a: chess board parameter
 *      *    * Return: chess board e4 d5
 **/

void print_chessboard(char (*a)[8])

{

	int w, b;

	for (w = 0; w < 8; w++)

	{


		for (b = 0; b < 8; b++)

		{


			_putchar(a[w][b]);


		}

		_putchar('\n');

	}
}

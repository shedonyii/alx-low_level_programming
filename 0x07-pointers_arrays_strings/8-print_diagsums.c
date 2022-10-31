#include "main.h"

#include <stdio.h>
/**
 *  ** print_diagsums - prints the sum of the two diagonals of a square matrix
 *    *   * @a: argument
 *      *    * @size: argument
 *        *     * Return: diagonal
 **/

void print_diagsums(int *a, int size)

{

	int i, j, x;

	i = 0;

	j = 0;

	for (x = 0; x < size; x++)

	{

		i = i + a[x * size + x];

	}

	for (x = size - 1; x >= 0; x--)

	{

		j += a[x * size + (size - x - 1)];

	}

	printf("%d, %d\n", i, j);
}

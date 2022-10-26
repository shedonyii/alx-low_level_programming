#include "main.h"
/**
 *  ** reverse_array-afunctionthat reverses the content of an array of integers
 *    *   * @a: The array
 *      *    * @n: number of elements of array
 *        *     * Return: reversed elements of array
 **/
void reverse_array(int *a, int n)
{
	int i;

	int temp;

	for (i = 0; i < n / 2; i++)

	{

		temp = a[i];

		a[i] = a[n - i - 1];

		a[n - i - 1] = temp;

	}
}

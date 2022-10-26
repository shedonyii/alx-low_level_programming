#include "main.h"
/**
 *  ** leet -  a function that encodes a string into 1337
 *    *   * @c: argument
 *      *    * Return: 0
 **/

char *leet(char *c)

{

	int i, j;


	char nums[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};


	char lett[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};



	for (i = 0; c[i]; i = i + 1)


	{


		for (j = 0; j < 10; j++)


		{


			if (c[i] == lett[j])

			{

				c[i] = nums[j];

			}

		}

	}

	return (c);
}

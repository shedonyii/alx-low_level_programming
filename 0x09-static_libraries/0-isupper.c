#include "main.h"
/**
 *  ** _isupper - checks if it is uppercase with a value of 1
 *
 *   ** @c: parameter
 *
 *     ** Return: 1
 **/


int _isupper(int c)

{

	char k;

	int upper_alphs = 0;


	for (k = 'A'; k <= 'Z'; k = k + 1)

	{


		if (k == c)



		{


			upper_alphs = 1;


		}


	}


	return (upper_alphs);

}

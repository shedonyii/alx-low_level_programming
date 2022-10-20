#include "main.h"
/**
 *  ** _isdigit - checks if it is a digit
 *    ** @c: parameter
 *      ** Return: 1
 **/
int _isdigit(int c)

{

	char digit;

	int num = 0;


	for (digit = '0'; digit <= '9'; digit = digit + 1)

	{

		if (digit == c)


		{

			num = 1;

		}



	}


	return (num);

}

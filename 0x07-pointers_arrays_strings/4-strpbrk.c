#include "main.h"
/**
 *  ** _strpbrk - locates the first occurrence in the string s
 *    *   * @s: parameter
 *      *    * @accept: parameter
 *        *     * Return: a pointer to the byte in s
 **/

char *_strpbrk(char *s, char *accept)

{

	int i, j;


	for (i = 0; s[i]; i++)

	{

		for (j = 0; accept[j]; j++)

		{

			if (s[i] == accept[j])

				break;

		}

		if (accept[j])

		{

			return (s + i);

		}

	}

	return (0);
}

#include "main.h"
/**
 * ** _strchr -  a function that locates a character in a string.
 *   *   * @s: argument
 *     *    * @c: argument
 *       *     * Return:  a pointer to the first occurrence of the character c
 **/

char *_strchr(char *s, char c)

{

	int n;

	for (n = 0; *(s + n); n = n + 1)

	{

		if (*(s + n) == c)

			return (s + n);

	}


	if (*(s + n) == c)


	{

		return (s + n);

	}

	return (0);
}

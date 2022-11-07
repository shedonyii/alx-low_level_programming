#include "main.h"

#include <stdlib.h>

/**
 *  ** create_array - creates an array of chars.
 *   ** @size: size of chars
 *    ** @c: the initialised char
 *     ** Return: 0
 **/

char *create_array(unsigned int size, char c)

{

	char *s;

	unsigned int i = 0;

	s = (char *) malloc(size * sizeof(char));

	if (s == NULL)

		return (NULL);

	if (size == 0)

		return (NULL);

	for (; i < size; i++)


	{


		*(s + i) = c;

	}

	return (s);
}

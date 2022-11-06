#include "main.h"
/**
 *  ** _memcpy - a function that copies memory area
 *    *   * @dest: argument
 *      *    * @src: argument
 *        *     * @n: argument
 *          *      * Return:  a pointer to dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)

{

	unsigned int b = 0;

	for (b = 0; b < n; b = b + 1)

	{

		dest[b] = src[b];

	}

	return (dest);
}

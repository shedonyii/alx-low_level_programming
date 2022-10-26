nclude "main.h"
/**
 ** _strcmp - a function that compares two strings
 ** @s1: left string
 ** @s2: right string
 ** Return: 0 if equal
 **/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)

	{

		if (*s1 != *s2)

			return (*s1 - *s2);
		s1++, s2++;

	}
	return (*s1 - *s2);
}

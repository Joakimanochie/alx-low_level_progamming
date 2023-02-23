#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
 */
int _isupper(int c)
{
	int i;

	if ((c >= 'A') && (c <= 'Z'))
		i = 1;
	else
		i = 0;
	return (i);
}

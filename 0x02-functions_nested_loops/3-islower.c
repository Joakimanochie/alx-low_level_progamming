#include "main.h"

/**
 * islower - check if input is a lowercase character
 *
 * Return: 1 (c is lowercase0, 0 (otherwise)
 */
int _islower(int c)
{
	int i;

	if ((c >= 'a') && (c <= 'z'))
	{
		i = 1;
	}
	else 
	{
		i = 0;
	}
	return (i);
}
#include "main.h"

/**
 * puts2 - prints string
 * @str: input string to be printed
 *
 * Retrun: void
 */
void puts2(char *str)
{
	int c;
	char l;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			l = str[c];
			_putchar(l);
		}
	}
	_putchar('\n');
}

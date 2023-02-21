#include "main.h"

/**
 * print_alphabet_x10 - prints a-z ten times
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int i;
	char bets;

	for (i = 0; i <= 9; i++)
	{
		bets = 'a';
		while (bets <= 'z')
		{
			_putchar(bets);
			bets++;
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_alphabet - print a-z
 *
 * Return: void
 */
void print_alphabet(void)
{
	char bets;

	bets = 'a';
	while (bets <= 'z')
	{
		_putchar(bets);
		bets++;
	}
	_putchar('\n');
}

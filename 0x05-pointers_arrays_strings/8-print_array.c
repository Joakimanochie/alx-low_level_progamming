#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: array pointer
 * @n: index array to be printed up to
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}

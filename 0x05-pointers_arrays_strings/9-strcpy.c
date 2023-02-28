#include "main.h"
#include <string.h>

/**
 * _strcpy - copies string src into dest
 * @src: source string
 * @dest: destination to paste string
 *
 * Return: pointer of dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}

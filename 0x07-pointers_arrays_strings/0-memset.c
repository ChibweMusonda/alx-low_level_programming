#include "main.h"

/**
 * _memset - it fills a memory block with a constant
 * @s: address to memory
 * @b: character to be used
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);

}


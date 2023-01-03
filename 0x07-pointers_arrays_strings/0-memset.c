#include "main.h"

/**
 * _memset - fill
 * @s: memory
 * @b: constsnt
 * @n: bytes
 * Return: area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

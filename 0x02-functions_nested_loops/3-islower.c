#include "main.h"

/**
 * _islower - function declaration
 * @c: single letter input
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

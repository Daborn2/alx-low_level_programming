#include "main.h"

/**
 * _strlen - length
 * @s: strinth length
 * Return: length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
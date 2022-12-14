#include "main.h"

/**
 * print_alphabet_x10 - function name
 * i: placeholder
 * count: count x10
 * Return: alwats 0
 */
void print_alphabet_x10(void)
{
	int i, count;

	count = 0;

	while (count < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		count++;
		_putchar('\n');
	}
}

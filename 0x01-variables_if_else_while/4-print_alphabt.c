#include <stdio.h>

/**
 * main - entry point
 * x: variable
 * Return: returns 0
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
	if ((x == 'q') || (x == 'e'))
		continue;
	putchar(x);
	}
	putchar('\n');

	return (0);
}

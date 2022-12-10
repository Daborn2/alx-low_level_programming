#include <stdio.h>

/**
 * main - entry point
 * x: collect alphabet
 * Return: return 0
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}

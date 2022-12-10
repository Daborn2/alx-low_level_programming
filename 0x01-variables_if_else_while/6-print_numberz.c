#include <stdio.h>

/**
 * main - entry point
 * x: variable
 * Return: return 0
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}

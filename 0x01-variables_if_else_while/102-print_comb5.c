#include <stdio.h>

/**
 * main - entry point
 * x: variable
 * y: variable
 * Return: return 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');

			if (x == 9 && y == 9)
				continue;

			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);

}
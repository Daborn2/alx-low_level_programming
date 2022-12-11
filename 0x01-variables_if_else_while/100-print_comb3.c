#include <stdio.h>

/**
 * main - entry point
 * digit_1: variable
 * digit_2: variable
 * Return: returns 0
 */
int main(void)
{
	int digit_1;
	int digit_2;

	for (digit_1 = 0; digit_1 < 9; digit_1++)
	{
	for (digit_2 = digit_1 + 1; digit_2 < 10; digit_2++)
	{
		putchar((digit_1) + '0');
		putchar((digit_2) + '0');
		if (digit_1 == 8 && digit_2 == 9)
		continue;
		putchar(',');
		putchar(' ');

	}
	}
	putchar('\n');

	return (0);
}

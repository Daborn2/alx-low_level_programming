#include <stdio.h>

/**
 * main - Entry point
 * digit_1: placeholder for digit 1
 * digit_2: placeholder for digit 2
 * digit_3: placeholder for digit 3
 * digit_4: placeholder for digit 4
 * Return: return 0
 */
int main(void)
{
	int digit_1;
	int digit_2;
	int digit_3;
	int digit_4;

	for (digit_1 = 0; digit_1 < 10; digit_1++)
	{
	for (digit_2 = 0; digit_2 < 10; digit_2++)
	{
	for (digit_3 = 0; digit_3 < 10; digit_3++)
	{
	for (digit_4 = 1; digit_4 < 10; digit_4++)
	{
	if (digit_1 <= digit_3 && digit_2 < digit_4)
	{
		putchar(digit_1 + '0');
		putchar(digit_2 + '0');
		putchar(' ');
		putchar(digit_3 + '0');
		putchar(digit_4 + '0');

		if (digit_1 == 9 && digit_2 == 8 && digit_3 == 9 && digit_4 == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');

	return (0);
}

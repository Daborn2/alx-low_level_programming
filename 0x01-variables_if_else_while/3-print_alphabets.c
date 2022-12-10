#include <stdio.h>

#include <ctype.h>

/**
 * main - Entry point
 * x: varible
 * y: variable
 * Return: reurn 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		y = toupper(x);
		putchar(y);
		putchar('\n');

	}

	return (0);
}

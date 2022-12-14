#include "main.h"

/**
 * main - entry point
 * sh: collct string
 * Return: always 0
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh != '\0')
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}

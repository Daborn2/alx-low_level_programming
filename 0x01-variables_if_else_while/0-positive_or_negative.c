#include <stdlib.h>

#include <time.h>

/**
 * main - entry point
 * n: the parameter
 * Return: the program return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return (0);
}

#include <stdlib.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <time.h>
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is poitive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);

	return (0);
}

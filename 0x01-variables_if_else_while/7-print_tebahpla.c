#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	return (0);
}

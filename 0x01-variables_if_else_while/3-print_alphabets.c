#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdlib.h>
#include <time.h>
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	{
		for (c = 'C'; c <= 'Z'; c++)
			putchar(c);
	}
	return(0);
}

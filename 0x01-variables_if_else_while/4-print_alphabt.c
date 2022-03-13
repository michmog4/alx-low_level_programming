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
	char a;
	
	for (a = 'a'; a < 'e'; a++)
		putchar(a);
	{
		for (a = 'f'; a < 'q'; a++)
			putchar(a);
		{
			for (a = 'p'; a <= 'z'; a++)
				putchar(a);
		}
	}
return (0);
}

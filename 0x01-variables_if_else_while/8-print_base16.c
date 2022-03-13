#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	 int a = '0';
	 char c = 'a';

	 for (a = '0'; a <= '9'; a++)
		 putchar(a);
	 {
		 for (c = 'a'; c <= 'f'; c++)
			 putchar(c);
	 }
	 putchar('\n');
	 return (0);
}

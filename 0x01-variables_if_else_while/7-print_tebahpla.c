#include <stdio.h>
/**
 * main - Prints the alphabet at reverse
 * Return: Always (Success)
 */
int main(void)
{

		char x;

		for (x = 'z'; x >= 'a'; x--)
		{
			putchar(x);
		}

		putchar('\n');

		return (0);
}

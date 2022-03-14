#include <stdio.h>
/**
 *main - combinantion of two digit no
 *Return: Always (success)
 */
int main(void)
{
	char n, r;

	for (n = 0; n <= 9; n++)
	{

		for (r = 0; r <= 9; r++)
		{
			if (c < i)
			{
				putchar(n);
				putchar(r);

				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 *main - combinantion of two digit no
 *Return: Always (success)
 */
int main(void)
{
	int n, r;

	for (n = '0'; n <= '9'; n++)
	{

		for (r = '0'; r <= '9'; r++)
		{
			if (n < r)
			{
				putchar(n);
				putchar(r);

				if (n != '8' || (n == '8' && r != '9'))
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

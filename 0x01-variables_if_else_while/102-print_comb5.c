#include <stdio.h>
/**
 * main - combinantion of two two digit numbers
 *
 * Return: Always (success)
 */

int main(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if ('a' != 'b' != 'c' != 'd')
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
					}
					if (((a == '8') && (b == '9')) && ((c == '9') && (d == '9')))
					{
						break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

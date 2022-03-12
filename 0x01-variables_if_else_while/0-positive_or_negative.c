#include <stdio.h>
/**
 * main - this gives type of int
 * Return: Always sucess
 */
int main(void)
{
	int n;

	if (n > 0)
	{
		printf("%d is positive\n", n)
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n)
	}
	else
	{
		printf("%d is negative\n", n)
	}

	return (0);
}

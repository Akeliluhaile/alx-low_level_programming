#include "main.h"
/**
 * print_sign -type of intiger
 *
 * @n: intiger
 * Return: 0 f0r 0  ,  - for negetive and  + for positive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

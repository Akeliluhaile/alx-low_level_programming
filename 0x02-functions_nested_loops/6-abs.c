#include "main.h"
/**
 *_abs - gives abslote value of an intiger
 *@n:intiger
 *@abs:abslotw value
 *Return: Always (success);
 */
int _abs(int n, abs)
{


	if (n > 0)
	{
		_putchar(n);
	}
	else if (n < 0)
	{
		abs = -1 * n;
		_putchar(abs);
	}
	else
	{
		_putchar(0);
	}
	return (0);

}

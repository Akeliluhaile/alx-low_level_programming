#include "main.h"
/**
 *_abs - gives abslote value of an intiger
 *@c:intiger
 *@m:abs of negitive  intiger
 *Return: Abslote value of n
 */
int _abs(int c, int m)
{
	if (c < 0)
	{
		m = -1 * c;
		_putchar(m)
	}
	else
	{
		_putchar(c);
	}
	return (0);

}

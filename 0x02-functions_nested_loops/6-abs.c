#include "main.h"
/**
 *_abs - gives abslote value of an intiger
 *@n:intiger
 *Return: Always (success);
 */
int _abs(int n)
{


	if (n > 0)
	{
		_putchar(n);
	}
	else if (n < 0)
	{
		
		_putchar(-1 * n);
	}
	else
	{
		_putchar(0);
	}
	return (0);

}

#include "main.h"
/**
 *_abs - gives abslote value of an intiger
 *@c:intiger
 *Return: Abslote value of c or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int a;

		a = c * -1;

		return (a);
	}

	return (c);
}

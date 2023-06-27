#include "main.h"

/**
 * print_integer - print integer
 * @args:..
 *
 * Return:..
 */

int print_integer(va_list args)
{
	int nb = va_arg(args, int);
	int nbr, lst = nb % 10, dgt, expon = 1, j = 1;

	nb = n / 10;
	nbr = nb;

	if (lst < 0)
	{
		_putchar('-');
		nbr = -nbr;
		nb = -nb;
		lst = -lst;
		j++;
	}
	if (nbr > 0)
	{
		do
		{
			expon = expon * 10;
			nbr = nbr / 10;
		}
		while (nbr / 10 != 0);
		nbr = nb;
		do
		{
			dgt = nbr / expon;
			_putchar(dgt + '0');
			nbr = nbr - (dgt * expon);
			expon = expon / 10;
			j++;
		}
		while(expon > 0);
	}
	_putchar(lst + '0');

	return (j);
}

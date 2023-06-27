#include "main.h"

/**
 * print_dec - print decimal 
 * @args:..
 *
 * Return:..
 */

int print_dec(va_list args)
{
	int nb = va_arg(args, int);
	int nbr;
	int lst = nb % 10;
	int dgt;
	int j = 1;
	int expon = 1;

	nb = nb / 10;
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
		do
		{
			dgt = nbr / expon;
			_putchar(dgt + '0');
			nbr = nbr - (dgt * expon);
			expon = expon / 10;
			j++;
		}
		while (expon > 0);
	}
	_putchar(lst + '0');
	return (j);
}

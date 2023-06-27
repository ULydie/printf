#include "main.h"

/**
 * print_dec - print decimal
 * @args:..
 *
 * Return:..
 */

int print_dec(va_list args)
{
	int nm = va_arg(args, int);
	int dgt, rev = 0;

	if (nm < 0)
	{
		_putchar('-');
		nm *= -1;
	}
	while (nm != 0)
	{
		dgt = nm % 10;
		rev = rev * 10 + dgt;
		nm /= 10;
	}

	while (rev != 0)
	{
		dgt = rev % 10;
		_putchar(dgt + '0');
		rev /= 10;
	}
	return (nm);

}



/**
 * print_number - function to  print a number
 * @i: integer to print
 * Return: int
 */

int print_integer(va_list args)
{
	int nm = va_arg(args, int);
	int dgt, rev = 0;

	if (nm < 0)
	{
		_putchar('-');
		nm *= -1;
	}
	while (nm != 0)
	{
		dgt = nm % 10;
		rev = rev * 10 + dgt;
		nm /= 10;
	}

	while (rev != 0)
	{
		dgt = rev % 10;
		_putchar(dgt + '0');
		rev /= 10;
	}
	return (nm);
}

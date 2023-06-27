#include "main.h"
#include <stdio.h>

#include "main.h"

/**
 * print_char - prints a char.
 * @val: arguments.
 *
 * Return: 1.
 */
int print_char(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (1);
}

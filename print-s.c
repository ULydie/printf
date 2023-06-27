#include "main.h"

/**
 * print_string - print strings.
 * @val:..
 *
 * Return:Return len of string
 */

int print_string(va_list val)
{
	char *str;
	int j, leng;

	str = va_arg(val, char *);
	if (str != NULL)
	{
		leng = _strlen(str);
		for (j = 0; j < leng; j++)
			_putchar(str[j]);
		return (leng);
	}
	else
	{
		str = "(null)";
		leng = _strlen(str);
		for (j = 0; j < leng; j++)
			_putchar(str[j]);
		return (leng);
	}
}
	

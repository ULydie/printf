#include "main.h"

/**
 * print_char - function print char (c) format
 * @list:this is argument it recieve
 * return: the number of char printeg in intiger
 */

int print_char(va_list list)
{
	char c = (char) va_arg(list, int);
	int caunt = 0;
	if(c)
	{
		caunt = write(1, &c, 1);
		return (caunt);
	}
	return(0);
}

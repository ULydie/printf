#include "main.h"

/**
 * print_cent - print the char when % is fund after %
 * @list: the argument received
 * return: return number of character printed
 */
int print_cent(va_list list)
{
	write(1,"%",1);
	return(1);
}


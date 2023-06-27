#include "main.h"

/**
 * _strlen - calculate the length of string
 * @str: string
 * return: length of string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * print_string - this function print string format
 * @list: the argument received
 * return: this return number of char prined in int
 */

int print_string(va_list list)
{
	char *ptr = va_arg(list, char*);

	int i,caunt = _strlen(ptr);

	write(1, ptr, caunt);

	return (caunt);
}

#include "main.h"

/**
 * check_specifies - this pointer functin that check if the char is specifies or not then call the corresponding format function
 * @format: specifier to check
 * return: pointer that point to function that take va_list argument and return int value
 */

int (*check_specifies(const char *formart))(va_list)
{
	int i;

        func_t my_arrey[4]={
		{"c",print_char},{"s",print_string},{"%",print_cent}, {NULL,NULL}
	};

	for(i=0;my_arrey[i].spe!=NULL; i++)
	{
		if(*(my_arrey[i].spe)== *formart)
		{
			return(my_arrey[i].f);
		}
	}
	return(NULL);
}

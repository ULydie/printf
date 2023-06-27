#include "main.h"

/**
 * main - where functin start
 * return: always 0
 */

int main(void)
{
	char *str="eric";
	int st,hm;
	st=printf("My first lettel in %%name is %s but not last\n",str);
	hm=_printf("My first lettel in %%name is %s but not last\n",str);
	printf("%d\n",st);
	printf("%d\n",hm);
	return(0);
}

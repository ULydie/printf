#include "main.h"

/**
 * _printf -this print the string and call the format functions and check for specifies function
 * @format: the string argument passed to it;
 * return: int show number of character printed
 */
int _printf(const char *format, ...)
{
	int i = 0;

        int volue = 0,caunt = 0;
        
	va_list list;
        
	va_start(list, format);
       
	/*print every char*/
	
	while(format[i])
	{
		if(format[i] != '%')
		{
			volue = write(1, &format[i], 1);
                        caunt = caunt + volue;
                        i++;
                        continue;
		}

		if(format[i] == '%')
		{
			f = check_specifies(&format[i + 1]);
			if (f != NULL)
			{
				volue = f(list);
                                caunt = caunt + volue;
                                i = i + 2;
                                continue;
			}
			if(format[i + 1] == '\0')
			{
				break;
			}
			if(format[i + 1] != '\0')
			{
				volue = write(1,&format[i + 1],1);
                                caunt = caunt + volue;
                                i = i + 2;
                                continue;
			}
		}
	}
	return (caunt);
}

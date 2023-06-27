#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**struct that will contain specifies and corresponding format function*/

typedef struct func
{
    char *spe;            /*specifier*/
    
    int(*f)(va_list);    /*format function (*f)*/
} func_t;               /*func_t repesent struct func*/

int (*f)(va_list);

int print_char(va_list);

int _printf(const char *format, ...);

int (*check_specifies(const char *formart))(va_list);

int print_string(va_list);

int print_cent(va_list);

#endif // MAIN_H_INCLUDED

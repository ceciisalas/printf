#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct format_print - args passed to the function
 * @c: char specifier
 * @type_args: type of argument / function pointer
 */
typedef struct format_print
{
	char c;
	int (*type_args)(va_list);
} format_p;
int _printf(const char *format, ...);
#endif

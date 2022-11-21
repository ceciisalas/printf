#include "main.h"
/**
 * _printf - produces output according to a format
 * format: string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int count;
	va_list arg;

	if (format == NULL)
		return (-1);

	count = wprint(format, args, ops);
	va_end(args);
	return (count);
}

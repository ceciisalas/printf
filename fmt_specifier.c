#include "main.h"
int print_chars(va_list);
int print_str(va_list);
/**
 * print_chars - prints a char
 * @c: char to be printed
 * Return: char
 */
int print_chars(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

/**
 * print_str - print string
 * @s: string to be printed
 * Return: string
 */
int print_str(va_list arg)
{
	int strlen;
	char *s;
	s = va_arg(arg, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	strlen = _strlen(s);
	if (s)
	{
		printf_s(s);
	}
	return (strlen);
}

#include "main.h"
void print_chars(va_list c);
void print_str(va_list s);
/**
 * print_chars - prints a char
 * @c: char to be printed
 * Return: char
 */
int print_chars(va_list arg)
{
	int c = va_arg(arg, int);
	return(_putchar(c));
}

/**
 * print_str - print string
 * @s: string to be printed
 * Return: string
 */
void print_str(va_list arg)
{
	int strlen;
	char *s = va_arg(s, char *);

	if (s == NULL)
	{
		_putchar("NULL");
		return;
	}
	strlen = _strlen(*s);
	if (*s)
	{
		_putchar(*s);
	}
	return (strlen);
}
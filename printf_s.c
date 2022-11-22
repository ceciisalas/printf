#include "main.h"
/**
 * printf_s - print a string
 * @s: string to be printed
 * Return: string
 */
void printf_s(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}

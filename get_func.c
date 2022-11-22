#include "main.h"
/**
 * get_func - select the correc function to return
 * the expected output
 * @s: pointer to string
 * Return: correct function
 */
int (*get_func(char s))(va_list)
{
	int i;

	format_p ops[] = {
		{'c', print_c},
		{'s', print_s}
	};

	i = 0;
	while (ops[i].c)
	{
		if (s == ops[i].c)
		{
			return (ops[i].print_fmt);
		}
		i++;
	}
	return (NULL);
}

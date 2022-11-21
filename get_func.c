#include "main.h"
/**
 * *get_func - select the correct function to return
 * the expected output
 * @s: pointer to string
 * Return: correct function
 */
int (*get_func)(char *s)(va_list)
{
        va_list arg;

        format_p ops[] = {
                {'c', print_char},
                {'s', print_str},
        };

        i = 0;
        while (i < 2)
        {
                if (*ops[i].c == *s)
		{
			return (ops[i].print_fmt);
		}
	}
	return (NULL);
}

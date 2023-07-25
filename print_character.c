#include "main.h"

/**
 * print_char - print characters
 * @list: number of parameters
 * Return: success
 */

int print_char(va_list list)
{
	char *c;
	int len;

	c = (char *)malloc(sizeof(char));
	if (c)
	{
		*c = va_arg(list, int);
		len = write(1, c, 1);
		free(c);

		return (len);
	}
	else
		return (-1);
}

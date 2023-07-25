#include "main.h"

/**
* print_string - prints strings
* @list: list of parameters
* Return: success
*/

int print_string(va_list list)
{
	int len = 0;
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(nil)";

	while (*str != '\0')
	{
		len += write(1, str, 1);
		str++;
	}
	return (len);
}

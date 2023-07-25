#include "main.h"

/**
 * print_percent - handle % specifier
 * @list: number of parameters
 * Return: success
 */
int print_percent(va_list list)
{
	(void)list;

	return (write(1, "%", 1));
}

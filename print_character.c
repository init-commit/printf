#include "main.h"

/**
 * print_char - print characters 
 * @list: number of parameters
 * Return: success
 */

int print_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	return (write(1, &c ,1);
}

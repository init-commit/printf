#include "main.h"

/**
 * print_int - Handle conversion specifier %d
 * @list: number of parameters
 * Return: success
 */

int print_int(va_list list)
{
	char buffer[12];
	int length = 0, temp, i, num;

	num = va_arg(list, int);

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}

	temp = num;
	while (temp != 0)
	{
		length++;
		temp /= 10;
	}

	for (i = length - 1; i >= 0; i--)
	{
		buffer[i] = '0' + (num % 10);
		num /= 10;
	}

	write(1, buffer, length);
	return (length);
}

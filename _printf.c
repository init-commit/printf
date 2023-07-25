#include "main.h"

/**
* _printf - produces output according to a format
* @format: character
* Return: number of characters
*/
int _printf(const char *format, ...)
{
  va_list list;
	int len = 0;

	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 's':
					len += print_string(list);
					break;
				case 'c':
					len += print_char(list);
					break;
				default:
					len += write(1, format, 1);
					break;
			}
		}
		else
		{
			len += write(1, format, 1);
		}
		format++;
	}

	va_end(list);

	return (len);
}

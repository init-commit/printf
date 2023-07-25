#ifndef MAIN_H
#define MAIN_H

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_int(va_list list);

#endif

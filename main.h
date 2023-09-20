#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#define NULL_STRING "(null)"
#define NUL '\0'
/**
 * struct convert - defines the structure for specifiers
 * and functions
 * @symbol: the format specifier
 * @f: function associated with specifier
 */
struct convert
{
	char *symbol;
	int (*f)(va_list);
};
typedef struct convert conver_t;
int format_reciever(const char *format, conver_t f_list[], va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int print_percent(__attribute__((unused))va_list args);
int print_char(va_list);
int string(va_list);
int print_integer(va_list);
#endif

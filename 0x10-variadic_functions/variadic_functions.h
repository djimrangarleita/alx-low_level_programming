#ifndef VAR_H
#define VAR_H

#include <stdarg.h>

/**
 * struct print_t - list of print funcs with format specifier
 * @format: format specifier
 * @func: ptr to a print fn
 */
typedef struct print_t
{
	char *format;
	void (*func)(va_list);
} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

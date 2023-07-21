#include <stdarg.h>
#include <stddef.h>
#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct refernce
{
	char *ref;
	void (*func)(va_list args);
} ref_t;
void fun_char(va_list args);
void fun_int (va_list args);
void fun_float (va_list args);
void fun_string (va_list args);

#endif /* VARIADIC_FUNCTIONS_H */

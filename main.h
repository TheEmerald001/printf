i#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/* Functions for task one */
int _printf(const char *format, ...);
int print_char(va_list l, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_percentagesign(va_list l, flags_t *f);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

#endif

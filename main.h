#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int _printf(const char *format, ...);

/**Helper Functions**/
int handle_percent(void);
int handle_char(va_list args);
int handle_string(va_list args);
int handle_int(va_list args);
int handle_binary(va_list args);
int handle_unsigned_int(va_list args);
int handle_octal(va_list args);
int handle_hex_lower(va_list args);
int handle_hex_upper(va_list args);
int handle_pointer(va_list args);
int handle_custom_string(va_list args);
int handle_custom_reverse_string(va_list args);

/**Printing Function**/
int print_char(char c);
int print_string(const char *str);
#endif /*MAIN_H*/

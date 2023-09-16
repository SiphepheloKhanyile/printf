#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...);

/**Helper Functions**/
int handle_percent(void);
int handle_char(va_list args);
int handle_string(va_list args);

/**Printing Function**/
int print_char(char c);
int print_string(const char *str);
#endif /*MAIN_H*/

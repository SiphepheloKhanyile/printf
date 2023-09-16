#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...);
static int print_string(const char *string);
static int print_char(char c);
#endif /*MAIN_H*/

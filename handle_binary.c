#include "main.h"
#include <stdbool.h>
/**
  * handle_binary - function to handle binary specifier
  * @args: arguments
  * Return: printed binary
  */
int handle_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[64];
	int index;

	if (num == 0)
	{
		return (print_char('0'));
	}
	index = sizeof(unsigned int) * 8;
	buffer[index] = '\0';
	do {
		buffer[--index] = (num & 1) ? '1' : '0';
		num >>= 1;
	} while (num > 0);
	return (print_string(buffer + index));
}

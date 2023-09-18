#include "main.h"
#include <stdbool.h>
/**
  * handle_int2 - Updated function to handle i and d
  * @args: arguments
  * Return: printed args
  */
int handle_int2(va_list args)
{
	int num = va_arg(args, int);
	int index = 0;
	char buffer[64];

	if (num == 0)
	{
		return (print_char('0'));
	}
	if (num < 0)
	{
		buffer[index++] = '-';
		num = -num;
	}
	while (num > 0)
	{
		buffer[index++] = (num % 10) + '0';
		num /= 10;
	}
	for (int i = 0; i < index / 2; i++)
	{
		char temp = buffer[i];

		buffer[i] = buffer[index - i - 1];
		buffer[index - i - 1] = temp;
	}
	buffer[index] = '\0';
	return (print_string(buffer));
}

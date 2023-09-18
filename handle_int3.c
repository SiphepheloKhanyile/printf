#include "main.h"
#include <stdbool.h>
/**
  * handle_int - 3rd test function to handle i and d
  * @args: arguments
  * Return: printed nums
  */
int handle_int3(va_list args)
{
	int num = va_arg(args, int);
	char buffer[64];
	int index = 0;
	int i;

	if (num < 0)
	{
		buffer[index++] = '-';
		num = -num;
	}
	else
	{
		buffer[index++] = '0';
	}
	if (num == 0)
	{
		buffer[index++] = '0';
	}
	else
	{
		while (num > 0)
		{
			buffer[index++] = (num % 10) + '0';
			num /= 10;
		}
	}
	for (i = 0; i < index / 2; i++)
	{
		char temp = buffer[i];

		buffer[i] = buffer[index - i - 1];
		buffer[index - i - 1] = temp;
	}
	buffer[index] = '\0';
	return (print_string(buffer));
}

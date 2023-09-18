#include "main.h"
#include <stdint.h>
/**
  * handle_pointer - Function to handle the 'p' specifier (pointer)
  * @args: arguments:
  * Return: printed pointer
  */
int handle_pointer(va_list args)
{
	uintptr_t ptr = (uintptr_t)va_arg(args, void *);
	char buffer[18];
	int i, len, index = 0;

	do {
		int digit = ptr % 16;

		if (digit < 10)
		{
			buffer[index++] = digit + '0';
		}
		else
		{
			buffer[index++] = digit - 10 + 'a';
		}
		ptr /= 16;
	} while (ptr > 0);
	buffer[index++] = 'x';
	buffer[index++] = '0';
	len = index;
	for (i = 0; i < len / 2; i++)
	{
		char temp = buffer[i];

		buffer[i] = buffer[len - i - 1];
		buffer[len - i - 1] = temp;
	}
	return (print_string(buffer));
}

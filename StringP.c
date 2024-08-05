#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * printf_string - P string
 * @val: arg
 * Return: len
 */

int printf_string(va_list val)
{
	char *str;
	int i, len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			-_putchar(str[i]);
		return (len);
	}
}

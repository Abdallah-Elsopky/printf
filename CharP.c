#include "main.h"

/**
 * printf_char - Char.
 * @val: our arg.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char S;

	S = va_arg(val, int);
	_putchar(S);
	return (1);
}

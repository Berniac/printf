#include "main.h"
#include <stdio.h>
/**
 * print_chr - writes the character c to stdout
 * @ptr: input char
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 *
 * Return: On success 1.
 */
int print_chr(va_list ptr, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(ptr, int);
	handl_buf(buf, c, ibuf);

	return (1);
}

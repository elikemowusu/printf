#include "main.h"

/**
 * create_buffer - creates a buffer of a size
 * @buffer_size: is the size in bytes for creating memory space
 * Return: an address of the newly created space
 */
void *create_buffer(int buffer_size)
{
	char *buff;

	buff = malloc(buffer_size);
	if (buff == NULL)
		return (NULL);
	return (buff);
}

/**
 * check_buffer - if buffer space is filled it writes to stdout and resets it
 * @buffer: Buffer to check
 * @buffer_pos: to indicate the point filled to
 * Return: buffer position
 */
int check_buffer(char *buffer, int buffer_pos)
{
	if (buffer_pos > 1020)
	{
		write(1, buffer, buffer_pos);
		buffer_pos = 0;
	}
	return (buffer_pos);
}

/**
 * write_buffer - prints buffer, then frees it and frees va_list
 * @buffer: buffer holding print-ables
 * @len: length of print-able string
 * @list: va_list
 */
void write_buffer(char *buffer, int len, va_list list)
{
	char *buff;

	buff = realloc(buffer, len); /* realloc to correct size */
	write(1, buff, len);         /* print */

	free(buff);
	va_end(list);
}

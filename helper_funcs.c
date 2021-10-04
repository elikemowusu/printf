#include "main.h"

/**
 * create_buffer - creates a buffer of a size
 * @buffer_size: is the size in bytes for creating memory space
 * Return: an address of the newly created space
 */
void* create_buffer(int buffer_size)
{
	char* buff;
	buff = malloc(buffer_size);
	if (buff == NULL)
		return (NULL);
	return (buff);
}

/**
 * get_format_func - gets the function for a particular format specifier
 * @format_char: the conversion character
 * Return: a pointer to a function for that conversion character
 */
char* (*get_format_func(char format_char))(va_list)
{
	int i = 0;

	format_object arr[] = {
		{'c', handle_c},
		{'s', handle_s},
		{'d', handle_d},
		{'i', handle_d},
		{'\0', NULL}
	};

	while (arr[i].format_char != '\0')
	{
		if (arr[i].format_char == format_char)
			return (arr[i].func);
		i++;
	}

	return (NULL);
}

/**
 * check_buffer - if buffer space is filled it writes to stdout and resets it
 * @buffer: Buffer to check
 * @buffer_pos: to indicate the point filled to
 * Return: buffer position
 */
int check_buffer(char* buffer, int buffer_pos)
{
	if (buffer_pos > 1020)
	{
		write(1, buffer, buffer_pos);
		buffer_pos = 0;
	}
	return (buffer_pos);
}

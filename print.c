#include "main.h"

/**
 * _printf - mini version of the standard printf
 * @format: the string to be  used for printing
 * Return: an interger representing the number of bytes written
 */

int _printf(const char *format, ...)
{
	int total_bytes, buffer_size, buffer_pos, i, j;
	char *buffer, *str;
	char* (*f)(va_list);
	va_list args;

	buffer_size = 1024;
	buffer_pos = 0;
	i = 0;
	j = 0;

	if (format == NULL)
		return (-1);

	buffer = create_buffer(buffer_size);
	if (buffer == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			buffer_pos = check_buffer(buffer, buffer_pos);
			buffer[buffer_pos++] = format[i++];
			total_bytes++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(args);
				free(buffer);
				return (-1);
			}
			if (format[i] == '%')
			{
				buffer_pos = check_buffer(buffer, buffer_pos);
				buffer[buffer_pos++] = format[i];
				total_bytes++;
			}
			else
			{
				f = get_format_func(format[i]);
				if (f == NULL)
				{
					buffer_pos = check_buffer\
						(buffer, buffer_pos);
					buffer[buffer_pos++] = '%';
					total_bytes++;
					buffer[buffer_pos++] = format[i];
					total_bytes++;
				}
				else
				{
					str = f(args);
					if (str == NULL)
					{
						va_end(args);
						free(buffer);
						return (-1);
					}
					if (format[i] == 'c' && str[0] == '\0')
					{
						buffer_pos = check_buffer\
							(buffer, buffer_pos);
						buffer[buffer_pos++] = str[0];
						total_bytes++;
					}
					j = 0;
					while (str[j] != '\0')
					{
						buffer_pos = check_buffer\
							(buffer, buffer_pos);
						buffer[buffer_pos++] = str[j];
						total_bytes++;
						j++;
					}
					free(str);
				}
			}
			i++;
		}
	}
	write_buffer(buffer, buffer_pos, args);
	return (total_bytes);
}

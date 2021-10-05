#include "main.h"

/**
 * handle_c - retrun character as string
 * @args: a list of arguments to select char from
 * Return: character as a string
 */
char *handle_c(va_list args)
{
	char c;
	char *buff;

	buff = malloc(2 * sizeof(char));
	if (buff == NULL)
		return (NULL);
	c = va_arg(args, int);
	if (c == 0)
		c = '\0';
	buff[0] = c;
	buff[1] = '\0';

	return (buff);
}

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

#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/* helper functions */
void* create_buffer(int buffer_size);
char* (*get_format_func(char format_char))(va_list);
int check_buffer(char* buffer, int buffer_pos);
void write_buffer(char *buffer, int len, va_list list);

#endif

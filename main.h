#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/* helper functions */
void *create_buffer(int buffer_size);
char * (*get_format_func(char format_char))(va_list);
int check_buffer(char *buffer, int buffer_pos);
void write_buffer(char *buffer, int len, va_list list);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/* printf and conversion character functions */
int _printf(const char *format, ...);
char *handle_c(va_list list);
char *handle_s(va_list list);
char *handle_d(va_list list);
char *itob(va_list list);

#endif

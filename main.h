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
char *itos(va_list list);
char *itob(va_list list);
char *itoOctal(va_list list);
char *_utos(int div, int length, int n);
char *handle_u(va_list list);
char *rev_string(va_list list);
char *rot13(va_list list);

/**
 * struct format - struct
 * @format_char: conversion character of format specifier
 * @func: ptr to functions that print according to identifier (e.g. print_c)
 */

typedef struct format
{
	char format_char;
	char *(*func)(va_list);
} format_object;

#endif

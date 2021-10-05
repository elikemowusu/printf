#include "main.h"

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

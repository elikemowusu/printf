#include "main.h"

/**
 * handle_s - retrun string from args
 * @args: a list of arguments to select string from
 * Return: string
 */
char* handle_s(va_list args)
{
char* str;
char* buff;
int len;

str = va_arg(args, char*);
if (str == NULL)
str = "(null)";
len = _strlen(str);

buff = malloc((len + 1) * sizeof(char));
if (buff == NULL)
return (NULL);

return (_strcpy(buff, str));
}

#include "main.h"

/**
 * _utos - makes an int a string
 * @div: multiple of 10
 * @length: length of number
 * @n: number to convert to string
 * Return: string
 **/
char *_utos(int div, int length, int n)
{
	char *str;
	int i = 0;

	str = malloc(sizeof(char) * length + 1);
	if (str == NULL)
		return (NULL);

	while (div >= 1)
	{
		str[i] = ((n / div) + '0');
		n = n % div;
		div /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/**
 * handle_u - gets length to put in _itos
 * @list: takes arg
 * Return: integar string
 **/

char *handle_u(va_list list)
{
	int length, div, n, temp;

	n = va_arg(list, int);
	if (n < 0)
		n *= -1;
	temp = n;
	length = 0;
	div = 1;

	if (n == 0) /* account for 0 having length 1 */
	{
		length++;
		return (_utos(div, length, n));
	}

	while (temp != 0) /* find multiple of ten to divide */
	{
		length += 1;
		if (length > 1)
			div *= 10;
		temp /= 10;
	}

	return (_utos(div, length, n));
}

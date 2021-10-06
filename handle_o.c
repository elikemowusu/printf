#include "main.h"

/**
 * itoOctal - change int to octal
 * @args: int to change
 * Return: string with octal
 */

char *itoOctal(va_list args)
{
	int j = 0, eights = 1;
	int i, k;
	char *s;

	k = va_arg(args, int);
	i = k;

	/* malloc up to max int in octal*/
	s = malloc(sizeof(char) * 12);
	if (s == NULL)
		return (NULL);

	if (k < 0)
	{
		k *= -1;
		i *= -1;
	}

	/* find biggest power of 8 it's divisible by */
	while (k > 1)
	{
		k /= 8;
		eights *= 8;
	}

	/* divide down and store octal num */
	while (eights > 0)
	{
		s[j++] = (i / eights + '0');
		i %= eights;
		eights /= 8;
	}
	s[j] = '\0';

	return (s);
}

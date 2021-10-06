#include "main.h"

char *itob(va_list args)
{
	char *buff;
	int integer, tmp, j, twos;

	integer = va_arg(args, int);
	tmp = integer;
	j = 0;
	twos = 1;
	buff = malloc(sizeof (char) * 33);
	if (buff == NULL)
		return (NULL);

	if (integer < 0)
	{
		buff[0] = '1';
		integer *= -1;
		tmp *= -1;
		j++;
	}

	while (tmp > 1)
	{
		tmp /= 2;
		twos *= 2;
	}

	while (twos >= 1)
	{
		buff[j++] = ( integer / twos) + '0';
		integer %= twos;
		twos /= 2;
	}
	buff[j] = '\0';

	return (buff);
}

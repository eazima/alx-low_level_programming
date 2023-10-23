#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to checked
 * Return: 1 for a positive num,-1 for a negative num,num or zero for others
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n < 0)
	{
		_putchar(45);
		return (-1);
	} else
        {
                _putchar(48);
                return (0);
	}
}

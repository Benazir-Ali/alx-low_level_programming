#include "main.h"

/**
 * print_sign - checks for sign
 * @n: int param
 *
 * Description: returns based on sign
 * Return: 1 for positive
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return(0);
	}

	else 
	{
		_putchar('-')
		return (-1);
	}

}

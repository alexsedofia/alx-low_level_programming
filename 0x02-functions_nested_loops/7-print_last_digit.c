#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int num	= n % 10;

		if (num < 0)
			num *= -1;

	_putchar(num + '0');

	return (0);

}

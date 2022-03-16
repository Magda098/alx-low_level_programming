#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: The number
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
int lst_dgt;

last_d = n % 10;
if (lst_dgt < 0) /*convert to positive*/
lst_dgt *= -1;
_putchar (last_d + '0');
return (lst_dgt);
}

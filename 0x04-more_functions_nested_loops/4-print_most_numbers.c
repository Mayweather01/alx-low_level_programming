#include "main.h"
/**
*print_most_numbers - print number 0-9 except 4 and 2
*Return: void
*/
void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
	if (c != 2 && c != 4)
	{
		_putchar(c + '0');

	}

	c++;
	}
	_putchar('\n');

}

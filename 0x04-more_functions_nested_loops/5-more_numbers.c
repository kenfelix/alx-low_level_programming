#include "holberton.h"

/**
 * more_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void more_numbers(void)
{
	int number, unit, tens, row;

	for (row = 1; row <= 10; row++)
	{
		for (number = 0; number <= 14; number++)
		{
			tens = number / 10;
			unit = number % 10;

			if (number > 9)
				_putchar(tens + '0');

			_putchar(unit + '0');
		}
		_putchar('\n');
	}
}

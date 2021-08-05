#include 'holberton.h'

/**
 * print_line - entry point
 *
 * Description: prints a straight line
 * @n: number of times to print the line
 * Return: void
 */

void print_line(int n)
{
	int num_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num_lines = 1; num_lines <= n; num_lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}


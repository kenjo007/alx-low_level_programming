#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: takes in an integer for the size of triangle
 */
void print_traingle(int size)
{
	int row, column, k;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (k = row + column; k >= 1; k--)
			-putchar('#');
		_putchar('\n');
	}
}

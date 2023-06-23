#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (Size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < Size; i++)
		{
			for (j = 0; j < Size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

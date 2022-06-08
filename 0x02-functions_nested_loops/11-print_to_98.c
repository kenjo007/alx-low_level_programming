#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -prints all numbers from n to 98
 * @n: the start of the numbers
 * Returns: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
	while (n < 98)
	{
	printf("%d, ', n);
	n++;
	}
	}
	else if (n > 98)
	{
	while (n > 98)
	{
	printf("%d, ', n);
	n--;
	}
	}
	printf("98\n");
}

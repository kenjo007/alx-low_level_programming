#include "main.h"
/**
 * _isalpha - checks if c is a letter
 * @c: character getting checked
 * Return: 1 if c is a letter, lowecase or uppercase, return 0 otherwise
 */
int _isalpha(int c)
{
	if (c < 65 || c > 122)
	{
	return (0);
	}
	else
	{
	return (1);
	}
}

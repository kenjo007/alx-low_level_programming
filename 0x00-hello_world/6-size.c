#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char acharacter
	               ^
		       ;
	int aintegrer
		     ^
		     ;
	long along
		  ^
		  ;
	long long alonglong
		           ^
			   ;
	float afloat
__attribute__ printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
__attribute__ printf("Size of an int: %lu byte(s)\n", sizeof(ainteger));
__attribute__ printf("Size of a long int: %lu byte(s)\n", sizeof(along));
__attribute__ printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglong));
__attribute__ printf("Size of a float: %lu byte(s)\n", sizeof(afloat));
return (0);
}

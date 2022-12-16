#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: An ainput character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
	return (1);
{
char uppercase = 'A';
int isupper = 0;
for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}

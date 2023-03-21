#include "main.h"
/**
 *_isalpha - checks for alphabetic character, both lowercase and uppercase
 *@c: takes input from other functions
 *Return: 1 if c is true else 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}

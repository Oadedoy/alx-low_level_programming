#include <stdio.h>
#include "main.h"
/**
 * str_len - function that checks string lenght
 * @s: parameter for the string
 *
 * Return: int for string lenght
 */
int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (str_len(s + 1) + 1);
	}
}
/**
 * comp_strg - function that compares two strings
 * @s: string to be compared
 * @a: first string for comparison
 * @b: second string fotr comparison
 *
 * Return: returns (0)
 */
int comp_strg(char *s, int a , int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
		{
			return (1);
		}
		else
		{
			return (comp_strg(s, a + 1, b - 1));
		}
	}
	return (0);
}
/**
 * is_palindrome - function that check if a string is a palindrome
 * @s: string for analysis
 *
 * Return: returns 1 if true and 0 if false
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (comp_strg(s, 0, str_len(s) - 1));
}

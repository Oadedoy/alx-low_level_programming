#include "main.h"

/**
 * _strlen - print the lenght of the string
 * @s: parameter to string lenght
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
		;
	return (count);
}

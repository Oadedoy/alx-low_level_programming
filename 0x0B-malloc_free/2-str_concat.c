#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings and null
 * 		 terminated.
 *
 * @s1: input from string 1
 * @s2: input from string 2
 *
 * Return: NULL on faliure
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = l = 0;
	while (s1[i] != 0)
		i++;
	while (s2[l] != 0)
		l++;
	s = malloc(sizeof(char) * (i + l + 1));
	if (s == NULL)
		return (NULL);
	i = l = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[l] != '\0')
	{
		s[i] = s2[l];
		i++, l++;
	}
	s[i] = '\0';
	return (s);
}

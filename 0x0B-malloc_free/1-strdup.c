#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *_strdup - a function that duplicates to new allocated space in memory
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/
char *_strdup(char *str)
{
	char *s;
	int i, l;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	for (l = 0; str[l]; l++)
		s[l] = str[l];

	return (s);
}

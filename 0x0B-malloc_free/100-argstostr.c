#include "main.h"
#include <stdlib.h>
/**
 * argstostr - this function concatenates all arguments of the program
 * @ac: parameter for argument counter
 * @av: parameter for argument values
 *
 * Return: pointer to a new string or NULL if failed
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, k, sum = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			sum++;
		}
	}
	sum += ac;

	p = malloc(sizeof(char) * sum + 1);
	if (p == NULL)
		return (NULL);
	k = 0;
	i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		i++;
		if (p[k] == '\0')
			p[k++] = '\n';
	}
	return (p);
}

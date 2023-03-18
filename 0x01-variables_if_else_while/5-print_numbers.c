#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints int 0 through 9
 *
 * Return: always 0 (success)
 */
int main(void);
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}

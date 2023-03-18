#include <stdio.h>
/**
 * main - entry point
 *
 * Descrption: print alphabet without q and e
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; ++abc)
	{
		if (abc != 'e' && abc != 'q')
		{
			putchar(abc);
		}
	}
	putchar('\n');
	return (0);
}

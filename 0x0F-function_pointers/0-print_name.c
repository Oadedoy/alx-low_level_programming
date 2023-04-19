#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: function with corresponding signature to function pointer
 * @f: function pointer
 *
 * Return: returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		if (f)
			f(name);
}

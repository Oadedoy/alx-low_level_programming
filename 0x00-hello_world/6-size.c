#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Sucessful)
 */

int main(void)

{
	/*sideof evaluates the size of a variable*/
printf("Size of a char: %lubyte(s)\n", sizeof(char));
printf("Size of an int: %lubyte(s)\n", sizeof(int));
printf("Size of a double: %lubyte(s)\n", sizeof(double));
printf("Size of a long: %lubyte(s)\n", sizeof(long int));
printf("Size of a long long: %lubyte(s)\n", sizeof(long long int));
printf("Size of a float: %lubyte(s)\n", sizeof(float));

return (0);
}

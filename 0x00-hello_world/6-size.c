#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (Sucess)
 */

int main(void)

{
printf("Size of a char variable: %lubyte(s)\n", sizeof(char));
printf("Size of an int variable: %lubyte(s)\n", sizeof(int));
printf("Size of a double variable: %lubyte(s)\n", sizeof(double));
printf("Size of a long variable: %lubyte(s)\n", sizeof(long int));
printf("Size of a long long variable: %lubyte(s)\n", sizeof(long long int));
printf("Size of a float variable: %lubyte(s)\n", sizeof(float));

return (0);
}

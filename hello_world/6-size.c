#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: A function that prints a statement
 *
 * Return: 0
 */
	int main(void)
{
	char chartype;
	int inttype;
	long int longinttype;
	long long int longlonginttype;
	float floattype;

	printf("Size of a char: %ld byte(s)\n", sizeof(chartype));
	printf("Size of an int: %ld byte(s)\n", sizeof(inttype));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longinttype));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlonginttype));
	printf("Size of a float: %ld byte(s)\n", sizeof(floattype))

	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 *
 */
	int main(void)
{
	printf("size of a char: %lu bytes \n", sizeof(char));
	printf("size of an int: %lu bytes \n", sizeof(int));
	printf("size of a long: %lu bytes \n", sizeof(long));
	printf("size of a long long: %lu bytes \n", sizeof(long long));
	printf("size of a float: %lu bytes \n", sizeof(float));
	return (0);
}

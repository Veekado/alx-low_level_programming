#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
{
		putchar(reverse);
}
	return (0);
}

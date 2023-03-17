#include <stdio.h>

/**
 * main - Starting point
 * Description: Prints all single digit numbers of base 10 starting from 0
 * not allowed to use any variable of type char
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	putchar(i + '0');
	putchar('\n');

	return (0);
}

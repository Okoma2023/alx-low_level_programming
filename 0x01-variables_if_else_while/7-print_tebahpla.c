#include <unistd.h>
#include <stdio.h>
/**
 * main - Starting point
 * Description: Prints lowercase alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

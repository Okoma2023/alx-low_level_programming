#include "main.h"
/**
 * _strspn - Entry point
 * @p: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *p, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*p)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*p == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		p++;
	}
	return (n);
}

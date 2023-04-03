#include "main.h"
/**
 * _strpbrk - Entry point
 * @p: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *p, char *accept)
{
		int i;

		while (*p)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*p == accept[i])
			return (p);
			}
		p++;
		}

	return ('\0');
}

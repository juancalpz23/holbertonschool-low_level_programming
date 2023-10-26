#include "main.h"
/**
 * _strspn - Length of a prefix substring
 *
 * @s: String to be targeted
 * @accept: Byte container
 *
 * Return: Number of bytes in s
 **/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (i);
}

#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: input
 * Return: the encoded string
 */

char *rot13(char *n)
{
	int i = 0;
	int j;
	char s1[52] = {'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L', 'M',
		'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y', 'Z', 'a',
		'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'n', 'o',
		'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};
	char s2[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
		'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', 'n',
		'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z', 'a', 'b',
		'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm'};

	while (n[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] == s2[j];
				break;
			}
		}

		i++;
	}

	return (n);
}

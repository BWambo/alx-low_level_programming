#include "main.h"

/**
 * _strncpy - copies a string with n
 * @src: copies from
 * @dest: copies to
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}
	return (dest);
}

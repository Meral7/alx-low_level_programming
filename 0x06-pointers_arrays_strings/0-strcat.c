#include "main.h"
/**
 * _strncat - concatenating two strings
 * @dest: input
 * @src: input
 * @m: input
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int m)
{
	int k;
	int l;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	l = 0;
	while (l < m && src[l] != '\0')
	{
	dest[k] = src[l];
	k++;
	l++;
	}
	dest[k] = '\0';
	return (dest);
}

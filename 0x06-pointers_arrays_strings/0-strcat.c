#include "main.h"
/**
 * _strncat - concatenating two strings
 * @mera: input
 * @alx: input
 * @m: input
 *
 * Return: mera
 */
char *_strncat(char *mera, char *alx, int m)
{
	int k;
	int l;

	k = 0;
	while (mera[k] != '\0')
	{
		k++;
	}
	l = 0;
	while (l < m && alx[l] != '\0')
	{
	mera[k] = alx[l];
	k++;
	l++;
	}
	mera[k] = '\0';
	return (mera);
}

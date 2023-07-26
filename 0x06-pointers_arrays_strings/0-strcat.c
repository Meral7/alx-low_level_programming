#include "main.h"
/**
 * _strcat - concatenats two strings
 * @mera: first string
 * @alx: second string
 *
 * Return: concatenated string
 */
char *_strcat(char *mera, char *alx)
{
	int i;
	int j;

	i = 0;
	while (mera[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (alx[j] != '\0')
	{
		mera[i] = alx[j];
		i++;
		j++;
	}

	mera[i] = '\0';
	return (mera);
}

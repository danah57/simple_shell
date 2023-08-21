#include "MyShell.h"

/**
 **_strncpy -  used to copy strings
 *@dest: the destination string copied at
 *@src: the source string
 *@n: the number of characters
 *Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 * *_strncat - concatenates two strings.
 * @dest: String to be concatenated
 * @src: String to be concatenated
 * @n: the amount of bytes to be maximally used
 *
 * Return: pointer to the array
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 * *_strchr - count the coincidences of character in string.
 *
 * @s: pointer to str origen.
 * @c: string with  chars to be counted
 * Return: int of string or 0.
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}




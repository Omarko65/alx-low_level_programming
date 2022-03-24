#include "main.h"
/**
 * _strncat - concatenates two strings with at most n bytes
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}

#include "main.h"
/**
 * _strlen - calculates length of string while ommitting null
 *
 *
 * return: length of string
 *
 */

int _strlen(char *s)
{
	int i=0;
	int c=0;

	while(*s)

{
	i = i + c;
	i++;
	*s++;

}

	return(i);

}


/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte
 * @dest: copied string
 * @src: string to be copiedReturn: pointer to new copied string
 * Return: pointer to new copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	
	for(i=0; i < _strlen(src) + 1; i++)
	dest[i] = *(src + i);

	return(dest);
}

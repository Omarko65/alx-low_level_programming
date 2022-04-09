#include "main.h"

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
	
	for(i=0; i<_strlem(src) + 1; i++)
	dest[i] = *(src + i);

	return(dest);
}

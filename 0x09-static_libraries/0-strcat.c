#include <string.h>

/**
 * *_strcat - fn to concat str to dest
 * @dest: string param
 * @src: string param
 * Return: char type (a pointer)
 */
char *_strcat(char *dest, char *src)
{

	int destLen = strlen(dest);

	int combined_len = destLen + strlen(src) + 1;
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[destLen + i] = src[i];
	}

	dest[combined_len] = '\0';
	return (dest);

}

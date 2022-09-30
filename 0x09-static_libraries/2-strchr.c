#include <string.h>

/**
 * *_strchr - fn to search character in a string
 * @s: string to search in
 * @c: character to search
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}

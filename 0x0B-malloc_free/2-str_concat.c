#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - fn to concat two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *p_scat;
	int i, j, s1_len, s2_len;


	/* check if s1 and s2 are null */
	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	/* allocate memory for the concatenated string */
	p_scat = malloc((sizeof(char)) * (s1_len + s2_len + 1));
	/* check if memory is available */
	if (p_scat == NULL)
	{
		return (NULL);
	}
	/* loop through s1 and add to p_scat */
	for (i = 0; s1[i] != '\0'; i++)
	{
		p_scat[i] = s1[i];
	}
	/* loop through s2 and add to p_scat */
	for (j = 0; s2[j] != '\0'; j++)
	{
		p_scat[(i + j)] = s2[j];
	}
	/* add the string null termanitor */
	p_scat[(s1_len + s2_len + 1)] = '\0';
	return (p_scat);
}

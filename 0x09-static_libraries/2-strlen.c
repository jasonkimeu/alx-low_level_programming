/**
 * _strlen - fn to get length of string
 * @s: string parameter
 * Return: integer is returned
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i + 1;
	}
	return (len);
}

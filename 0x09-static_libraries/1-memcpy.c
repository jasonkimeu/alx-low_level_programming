/**
 * *_memcpy - fn to copy one data into another
 * @dest: string to copy to
 * @src: string to copy from
 * @n: unsigned int
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

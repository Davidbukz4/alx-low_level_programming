/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to search from
 * @accept: array of bytes to search for
 * Return: pointer to byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	x = y = 0;
	while (s[x] != '\0')
	{
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
				return (&s[x]);
			y++;
		}
		x++;
	}
	return (NULL);
}

/**
 * _strspn - gets the length of a prefix
 * @s: string to get length of a prefix substring from
 * @accept: prefix to search for in 's'
 * Return: number of bytes in 's' which contains prefix 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	unsigned int count;

	x = y = count = 0;
	while (s[x] != '\0')
	{
		while (accept[y] != '\0' && s[x] != accept[y])
			y++;
		if (s[x] == accept[y])
			count++;
		if (accept[y] == '\0')
			return (count);
		x++;
	}
	return (count);
}

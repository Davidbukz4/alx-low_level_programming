/**
 * _strchr - locates a character in a string
 * @s: where character would be searched from
 * @c: character to be searched
 * Return: a pointer to the first occurence of the character 'c'
 * in the string 's' or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int x;

	x = 0;
	while (s[x] >= '\0')
	{
		if (s[x] == c)
			break;
		x++;
	}
	return (&s[x]);
}

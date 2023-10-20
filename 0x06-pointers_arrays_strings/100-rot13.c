#include <stdio.h>
#include <string.h>
/**
 * rot13 - Encode string using root13
 * @s: String to be encoded
 * Return: Pointer to string
 */
char *rot13(char *s)
{
	int i;
	int j;
	int len;
	char comparator[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char equiv[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == comparator[j])
			{
				s[i] = equiv[j];
				break;
			}
		}
	}

	return (s);
}

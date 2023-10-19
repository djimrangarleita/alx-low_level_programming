#include <string.h>

/**
 * cap_string - Capitalize string
 * @s: String to capitalize
 * Return: Pointer to string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char separator[] = " \n\t,;.!?\"(){}";
	int seplen = strlen(separator);

	while (s[i] != '\0')
	{
		for (j = 0; j < seplen; j++)
		{
			if (s[i - 1] == separator[j] && s[i] >= 'a' && s[i] <= 'z')
				s[i] = 'A' + (s[i] - 'a');
		}
		if (s[i] == '\t')
			s[i] = ' ';
		i++;
	}

	return (s);
}

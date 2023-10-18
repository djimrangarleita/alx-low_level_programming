#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/**
 * main - Entry point, create and print random password
 * Return: 0 on success
 */
int main(void)
{
	int length = 12, i = 0, randomizer = 0;

	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char calpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char special[] = "!@#$%^&*()~][{}"; /* 15  */
	char digit[] = "1234567890";

	srand((unsigned int)(time(NULL)));

	randomizer = rand() % 4;
	char password[12];

	for (i = 0; i < length; i++)
	{
		if (randomizer == 3)
		{
			password[i] = calpha[rand() % 26];
			randomizer = rand() % 4;
		}
		else if (randomizer == 2)
		{
			password[i] = special[rand() % 15];
			randomizer = rand() % 4;
		}
		else if (randomizer == 1)
		{
			password[i] = digit[rand() % 10];
			randomizer = rand() % 4;
		}
		else
		{
			password[i] = alpha[rand() % 26];
			randomizer = rand() % 4;
		}
	}

	printf("%s\n", password);
	return (0);
}

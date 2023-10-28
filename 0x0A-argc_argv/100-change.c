#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int coin_counter(int amount);

/**
 * main - Entry point, driver, print sum of two numbers
 * @argc: The count of arguments passed to main
 * @argv: The vector of argv, pointer to array of str
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int coin, amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");

	}
	else
	{
		coin = coin_counter(amount);
		printf("%d\n", coin);
	}
	return (0);
}

/**
 * coin_counter - count the minimum number of coins for the change
 * @amount: the amount of money to be changed
 * Return: the number of coins
 */
int coin_counter(int amount)
{
	if (amount >= 25)
		return ((amount / 25) + coin_counter(amount % 25));

	if (amount >= 10)
		return ((amount / 10) + coin_counter(amount % 10));

	if (amount >= 5)
		return ((amount / 5) + coin_counter(amount % 5));

	if (amount >= 2)
		return ((amount / 2) + coin_counter(amount % 2));

	return (amount);
}

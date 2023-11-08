#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two numbers @a and @b
 * @a: first num to add to @b
 * @b: num to add to a
 * Return: a + b, result of the addition a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract @b from @a
 * @a: first num
 * @b: second num, to be substracted
 * Return: a - b, result of the substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply @a and @b
 * @a: first num,
 * @b: second num
 * Return: int, a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide @a by @b
 * @a: num
 * @b: divisor
 * Return: a/b if b != 0, or exit 100
 */
int op_div(int a, int b)
{
	if (b)
		return (a / b);

	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modulo operation @a by @b
 * @a: num
 * @b: mod factor
 * Return: a%b if b != 0, or exit 100
 */
int op_mod(int a, int b)
{
	if (b)
		return (a % b);

	printf("Error\n");
	exit(100);
}

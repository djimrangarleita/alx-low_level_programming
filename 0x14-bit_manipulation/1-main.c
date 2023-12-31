#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");

    printf("95...12 ULONG_MAX 2 10\n");
    print_binary(954372342312);
    printf("\n");
    print_binary(ULONG_MAX);
    printf("\n");
    print_binary(2);
    printf("\n");
    print_binary(10);
    printf("\n");
    return (0);
}

#include "variadic_functions.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings("", 2, "", "Django");
    print_strings(NULL, 2, NULL, "Django");
    print_strings("##", 2, "Jay", "Django");
    return (0);
}

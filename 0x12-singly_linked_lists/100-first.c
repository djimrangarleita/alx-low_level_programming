#include <stdio.h>

void first_exec(void) __attribute__((constructor));
/**
 * first_exec - this function will be executed before main
 */
void first_exec(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my
			back!\n");
}

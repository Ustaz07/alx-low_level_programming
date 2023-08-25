#include "main.h"
#include <stdio.h>

/**
 * main - Capitalize all words.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst.\n"
                "Capitalize on what comes.\n"
                "hello world! hello-world 0123456hello world\thello\n"
                "world.hello world\n";
	char *p;

	p = cap_string(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 60

int main(void)
{
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL)); // Initialize random number generator

	// Generate random password
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int index = rand() % (sizeof(charset) - 1);
		password[i] = charset[index];
	}
	password[PASSWORD_LENGTH] = '\0'; // Add the null terminator

	printf("%s\n", password);

	return (0);
}

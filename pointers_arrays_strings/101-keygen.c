#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 11

int main(void) {
    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    srand(time(NULL));

	password[0] = charset[rand() % 26 + 26];

	for (i = 1; i < 6; ++i) {
        password[i] = charset[rand() % 26];
    }

	for (i = 6; i < 11; ++i) {
        password[i] = charset[rand() % 10 + 52];
    }

	password[PASSWORD_LENGTH] = '\0';

    printf("%s\n", password);

    return (0);
}


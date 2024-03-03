#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 11

int main(void) {
    char password[PASSWORD_LENGTH + 1]; // +1 for null terminator
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    srand(time(NULL)); // Seed random number generator with current time

    for (i = 0; i < PASSWORD_LENGTH; ++i) {
        password[i] = charset[rand() % (sizeof(charset) - 1)]; // Pick random character from charset
    }

    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the string

    printf("%s\n", password); // Print the generated password

    return 0;
}


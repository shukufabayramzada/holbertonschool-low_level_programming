#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @s: The string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *s)
{
    char *ptr = s;
    char *alphabet_lower = "abcdefghijklmnopqrstuvwxyz";
    char *alphabet_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *rot13_lower = "nopqrstuvwxyzabcdefghijklm";
    char *rot13_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";

    for (; *ptr != '\0'; ptr++)
    {
        int index;

        index = 0;
        while (alphabet_lower[index] != '\0')
        {
            if (*ptr == alphabet_lower[index])
            {
                *ptr = rot13_lower[index];
                break;
            }
            index++;
        }

        index = 0;
        while (alphabet_upper[index] != '\0')
        {
            if (*ptr == alphabet_upper[index])
            {
                *ptr = rot13_upper[index];
                break;
            }
            index++;
        }
    }

    return s;
}

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
    char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
    int i;

    for (; *ptr != '\0'; ptr++)
    {
        for (i = 0; alphabet[i] != '\0'; i++)
        {
            if (*ptr == alphabet[i])
            {
                *ptr = rot13[i];
                break;
            }
        }
    }

    return (s);
}


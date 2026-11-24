/*
 * Appendix 1 - Week 11 - Task 55
 * Aim: Using pointers, write a function that receives a character string
 *      and a character as arguments and deletes all occurrences of this
 *      character in the string. Print the corrected string without any holes.
 *
 * Method: two pointers walk through the string.
 *   - "reader" looks at every character
 *   - "writer" marks where the next kept character must be stored
 * Characters that are not equal to the given character are copied to
 * "writer", so the remaining characters move forward and no gaps are left.
 */
#include <stdio.h>

void deleteCharacter(char *text, char ch)
{
    char *reader = text;
    char *writer = text;

    while (*reader != '\0')
    {
        if (*reader != ch)       // keep this character
        {
            *writer = *reader;
            writer++;
        }
        reader++;
    }
    *writer = '\0';              // end the shortened string
}

int main()
{
    char text[100];
    char ch;
    char *p;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    // Remove the newline character added by fgets
    for (p = text; *p != '\0'; p++)
    {
        if (*p == '\n')
        {
            *p = '\0';
            break;
        }
    }

    printf("Enter the character to delete: ");
    scanf(" %c", &ch);

    deleteCharacter(text, ch);

    printf("Corrected string: %s\n", text);

    return 0;
}

/*
 * Appendix 1 - Week 9 - Task 49
 * Aim: Reverse a string using the string.h library.
 *
 * Library functions used from <string.h>:
 *   strlen() - length of the string
 *   strcpy() - copy the original string, so it can still be displayed
 * (strrev() is not part of standard C, so the reversing is done with a loop.)
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char text[100], reversed[100];
    int length, i;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    length = strlen(text);
    if (length > 0 && text[length - 1] == '\n')   // remove the newline added by fgets
    {
        text[length - 1] = '\0';
        length--;
    }

    strcpy(reversed, text);                       // copy the original string

    // Swap the first character with the last, the second with the second last, ...
    for (i = 0; i < length / 2; i++)
    {
        char temp = reversed[i];
        reversed[i] = reversed[length - 1 - i];
        reversed[length - 1 - i] = temp;
    }

    printf("Original string : %s\n", text);
    printf("Reversed string : %s\n", reversed);

    return 0;
}

/*
 * Appendix 1 - Week 4 - Task 17
 * Aim: Convert a lower case character to upper case and vice-versa.
 *
 * In the ASCII table, a small letter is exactly 32 more than the
 * matching capital letter ('a' = 97, 'A' = 65).
 * (The flowchart asked for in the manual is to be drawn separately.)
 */
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("Upper case of '%c' is '%c'\n", ch, ch - 32);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Lower case of '%c' is '%c'\n", ch, ch + 32);
    }
    else
    {
        printf("'%c' is not an alphabet, so it cannot be converted.\n", ch);
    }

    return 0;
}

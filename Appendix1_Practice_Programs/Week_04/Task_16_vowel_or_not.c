/*
 * Appendix 1 - Week 4 - Task 16
 * Aim: Find if the entered character is a vowel or not.
 *
 * ALGORITHM:
 *   Step 1: Start
 *   Step 2: Read a character ch
 *   Step 3: If ch is one of a, e, i, o, u (small or capital), go to Step 4,
 *           otherwise go to Step 5
 *   Step 4: Print "ch is a vowel" and go to Step 8
 *   Step 5: If ch is an alphabet (a-z or A-Z), go to Step 6, else go to Step 7
 *   Step 6: Print "ch is a consonant" and go to Step 8
 *   Step 7: Print "ch is not an alphabet"
 *   Step 8: Stop
 */
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("'%c' is a vowel.\n", ch);
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is a consonant.\n", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}

/*
 * Appendix 1 - Week 5 - Task 24
 * Aim: Modify the previous calculator program so that it runs repeatedly
 *      with an exit condition, using goto.
 *
 * After every calculation the user is asked whether to continue.
 * Answering 'n' or 'N' jumps (goto) to the end of the program.
 */
#include <stdio.h>

int main()
{
    float num1, num2;
    char operation, again;

start:                                  // label: the calculator restarts here
    printf("\nEnter the first number  : ");
    scanf("%f", &num1);
    printf("Enter the operator (+, -, *, /) : ");
    scanf(" %c", &operation);
    printf("Enter the second number : ");
    scanf("%f", &num2);

    switch (operation)
    {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0)
            {
                printf("Error: division by zero is not possible.\n");
            }
            else
            {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Invalid operator! Use only +, -, * or /.\n");
    }

    printf("\nDo you want to calculate again? (y/n): ");
    scanf(" %c", &again);

    if (again == 'y' || again == 'Y')
    {
        goto start;                     // jump back to the label "start"
    }

    printf("Calculator closed. Goodbye!\n");
    return 0;
}

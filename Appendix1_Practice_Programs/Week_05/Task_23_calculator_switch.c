/*
 * Appendix 1 - Week 5 - Task 23
 * Aim: Design a calculator with the basic operations using switch.
 */
#include <stdio.h>

int main()
{
    float num1, num2;
    char operation;

    printf("Enter the first number  : ");
    scanf("%f", &num1);
    printf("Enter the operator (+, -, *, /) : ");
    scanf(" %c", &operation);          // the space before %c skips the Enter key
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

    return 0;
}

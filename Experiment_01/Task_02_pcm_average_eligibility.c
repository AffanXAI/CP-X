/*
 * Experiment 1 - Task 2
 * Aim: Get a student's PCM marks from the user and find the average.
 *      Use the conditional operator to print whether the student is
 *      eligible for admission. Eligibility criteria: 50% in PCM.
 *
 * Marks of each subject are taken out of 100, so the average of the
 * three marks is also the percentage.
 */
#include <stdio.h>

int main()
{
    float physics, chemistry, maths, average;

    printf("Enter marks in Physics (out of 100)   : ");
    scanf("%f", &physics);
    printf("Enter marks in Chemistry (out of 100) : ");
    scanf("%f", &chemistry);
    printf("Enter marks in Maths (out of 100)     : ");
    scanf("%f", &maths);

    // Average of the three subjects
    average = (physics + chemistry + maths) / 3;

    printf("\nAverage marks in PCM = %.2f%%\n", average);

    // Conditional (ternary) operator decides eligibility
    printf("Result : %s\n",
           (average >= 50) ? "Eligible for admission" : "Not eligible for admission");

    return 0;
}

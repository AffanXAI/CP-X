/*
 * Appendix 1 - Week 10 - Task 50
 * Aim: Define a structure time_struct containing three integer members
 *      hour, minute and second. Assign values to the individual members
 *      and start running the clock, displaying the time in HH:MM:SS format.
 *
 * The clock is simulated: every loop round adds one second to the time
 * (carrying over to minutes and hours) and prints it. There is no waiting
 * between the seconds, so the output appears instantly.
 */
#include <stdio.h>

struct time_struct
{
    int hour;
    int minute;
    int second;
};

// Adds one second to the time and returns the new time
struct time_struct tick(struct time_struct t)
{
    t.second++;
    if (t.second == 60)
    {
        t.second = 0;
        t.minute++;
    }
    if (t.minute == 60)
    {
        t.minute = 0;
        t.hour++;
    }
    if (t.hour == 24)
    {
        t.hour = 0;
    }
    return t;
}

int main()
{
    struct time_struct clock_time;
    int seconds, i;

    // Assign values to the individual members
    printf("Enter the starting hour (0-23)  : ");
    scanf("%d", &clock_time.hour);
    printf("Enter the starting minute (0-59): ");
    scanf("%d", &clock_time.minute);
    printf("Enter the starting second (0-59): ");
    scanf("%d", &clock_time.second);

    if (clock_time.hour < 0 || clock_time.hour > 23 ||
        clock_time.minute < 0 || clock_time.minute > 59 ||
        clock_time.second < 0 || clock_time.second > 59)
    {
        printf("Invalid time!\n");
        return 0;
    }

    printf("For how many seconds should the clock run? ");
    scanf("%d", &seconds);

    printf("\nClock started:\n");
    printf("%02d:%02d:%02d\n", clock_time.hour, clock_time.minute, clock_time.second);

    for (i = 1; i <= seconds; i++)
    {
        clock_time = tick(clock_time);
        printf("%02d:%02d:%02d\n", clock_time.hour, clock_time.minute, clock_time.second);
    }

    return 0;
}

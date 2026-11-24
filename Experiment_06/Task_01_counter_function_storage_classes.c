/*
 * Experiment 6 - Task 1
 * Aim: Define a counter function to print how many times the
 *      function is called. Use storage classes.
 *
 * Storage classes demonstrated:
 *   static   - "callCount" inside counter() keeps its value between calls
 *   extern   - "totalCalls" is a global variable declared with extern
 *              and used inside the function
 *   auto     - "message" is an ordinary (automatic) local variable
 *   register - "i" in main() is requested to be kept in a CPU register
 */
#include <stdio.h>

extern int totalCalls;           // declaration: variable is defined below main()

// Counter function
void counter()
{
    static int callCount = 0;    // static: initialised only once, value is remembered
    auto int increment = 1;      // auto: created every time and destroyed on exit

    callCount = callCount + increment;
    totalCalls++;                // extern (global) variable is shared

    printf("counter() has been called %d time(s)\n", callCount);
}

int totalCalls = 0;              // definition of the global variable

int main()
{
    register int i;              // register storage class

    printf("Calling counter() 5 times:\n");
    for (i = 1; i <= 5; i++)
    {
        counter();
    }

    printf("\nTotal calls recorded by the global variable = %d\n", totalCalls);

    return 0;
}

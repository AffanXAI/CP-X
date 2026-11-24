/*
 * Appendix 1 - Week 2 - Task 9
 * Aim: Calculate the resistance (R) to be connected in series with
 *      an LED to protect it from blowing up when a voltage (V) is applied.
 *
 * Formula (Ohm's law): R = (V - Vf) / I
 *   V  = supply voltage (volts)
 *   Vf = forward voltage drop of the LED (volts)
 *   I  = current the LED can safely carry (amperes)
 *
 * The manual does not give values, so all three are entered by the user.
 */
#include <stdio.h>

int main()
{
    float supplyVoltage, ledVoltage, currentMilliAmp, resistance;

    printf("Enter the supply voltage V (volts)              : ");
    scanf("%f", &supplyVoltage);
    printf("Enter the LED forward voltage Vf (volts)        : ");
    scanf("%f", &ledVoltage);
    printf("Enter the LED current I (milliamperes, e.g. 20) : ");
    scanf("%f", &currentMilliAmp);

    if (currentMilliAmp <= 0 || supplyVoltage <= ledVoltage)
    {
        printf("Invalid values! Current must be positive and V must be greater than Vf.\n");
        return 0;
    }

    // Convert milliamperes to amperes (divide by 1000) before using the formula
    resistance = (supplyVoltage - ledVoltage) / (currentMilliAmp / 1000);

    printf("Required series resistance R = %.2f ohms\n", resistance);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Function: read_temperature
 * --------------------------
 * Simulates reading a temperature sensor.
 * In real hardware, this will be replaced
 * by ADC or digital sensor logic.
 */
int read_temperature(void)
{
    int temperature;
    temperature = rand() % 40;   // Range: 0 to 39
    return temperature;
}

int main(void)
{
    int temp_value;

    /* Seed random number generator */
    srand((unsigned int)time(NULL));

    while (1)
    {
        temp_value = read_temperature();
        printf("Temperature Sensor Reading: %d C\n", temp_value);

        /* Simple delay loop (embedded-style) */
        for (volatile long i = 0; i < 100000000; i++)
        {
            /* intentional empty loop */
        }
    }

    return 0;
}

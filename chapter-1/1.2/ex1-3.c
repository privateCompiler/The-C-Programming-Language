#include <stdio.h>

int main(void)
{
    float lower, upper, step;
    float fahr, celsius;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Fahrenheit:\tCelsius:");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%11.0f %12.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
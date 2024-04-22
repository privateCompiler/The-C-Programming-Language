#include <stdio.h>

void conversion(float lower, float upper, float step);

int main(void)
{
    conversion(0, 300, 20);

    return 0;
}

void conversion(float lower, float upper, float step)
{
    float fahr, celsius;
    fahr = lower;

    while (fahr < upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
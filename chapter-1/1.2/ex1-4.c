#include <stdio.h>

int main(void)
{
    float fahrenheit, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 150;
    step = 10;

    celsius = lower;

    while (celsius <= upper)
    {
        fahrenheit = ((9.0 / 5.0) * celsius) + 32;
        printf("%3.0f\t%6.1f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }
}
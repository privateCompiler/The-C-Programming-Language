#include <stdio.h>

int main(void) 
{
    int c;
    int lastspace = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            putchar(c);
            lastspace = 0;
        }
        else 
        {
            if (lastspace == 0)
            {
                putchar(c);
                lastspace = 1;
            }
        }
    }
}
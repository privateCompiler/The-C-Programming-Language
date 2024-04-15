#include <stdio.h>

int main(void) 
{
    int state = 0;

    int c, space;

    space = ' ';

    while ((c = getchar()) != EOF)
    {
        if (c == space && state == 0)
        {
            printf("\n");
            state = 1;
        }
        else if (state == 0 || state == 1 && c != space)
        {
            state = 0;
            putchar(c);
        }
    }    
}

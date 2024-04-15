/*

    read a character
        while (character is not end-of-file indicator)
            read a character

*/
#include <stdio.h>

/* copy input into output; 1st version */
int main(void) 
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}


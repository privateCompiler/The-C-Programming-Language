#include <stdio.h>

int main(void) 
{
    int c;
    int tab, backspace, backslash;

    tab = '\t';
    backspace = '\b';
    backslash = '\\';

    while ((c = getchar()) != EOF)
    {
        if (c == tab)
        {
            putchar('\\');
            putchar('t');

        }
        else if (c == backspace)
        {
            putchar('\\');
            putchar('b');
        }
        else if (c == backslash)
        {
            putchar('\\');
            putchar('\\');
        }
        else
        {
            putchar(c);
        }
    }
}
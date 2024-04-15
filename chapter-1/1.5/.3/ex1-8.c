#include <stdio.h>

int main(void)
{
    int blanks, tabs, newlines;

    blanks = 0;
    tabs = 0;
    newlines = 0;

    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            blanks++;
        }
        if (c == '\t')
        {
            tabs++;
        }
        if (c == '\n')
        {
            newlines++;
        }
    }
    printf("blanks: %d\ntabs: %d\nnewlines: %d\n", blanks, tabs, newlines);
}
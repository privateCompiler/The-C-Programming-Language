#include <stdio.h>

int main(void)
{
    /* count characters in input; 2nd version */
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
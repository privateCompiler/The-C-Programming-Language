#include <stdio.h>

int main(void)
{
    int c;

    int character_frequency[26] = {0};

    while ((c = getchar()) != EOF)
    {
        for (int i = 0; i < 26; i++)
        {
            if (c == (i + 65) || c == (i + 97))
            {
                character_frequency[i]++;
            }
        }
    }

    for(int i = 0; i < 26; i++)
    {
        if (character_frequency[i] != 0)
        {
            printf("%c || %c: ", (char)(i + 65), (char)(i + 97));
            for (int j = 0; j < character_frequency[i]; j++)
            {
                printf("|");
            }
            printf("\n");
        }
    }
}
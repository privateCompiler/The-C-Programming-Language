#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c;
    int word = 0, length = 0;

    int *word_length = NULL;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n')
        {
            length++;
        }
        else 
        {
            word_length = (int*)realloc(word_length, (word + 1) * sizeof(int));
            if (word_length == NULL)
            {
                printf("Memory allocation failed\n");
                return 1;
            }
            word_length[word] = length;
            length = 0;
            word++;
        }
    }

    for (int i = 0; i < word; i++)
    {
        printf("word %d: ", i);
        for (int j = 0; j < word_length[i]; j++)
        {
            printf("|");
        }
        printf("\n");
    }

    free(word_length);

    return 0;
}
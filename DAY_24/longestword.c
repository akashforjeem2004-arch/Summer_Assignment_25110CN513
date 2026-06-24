#include <stdio.h>

int main()
{
    char str[200];
    char longest[100];
    char current[100];

    int i = 0, j = 0;
    int maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            current[j++] = str[i];
            currLen++;
        }
        else
        {
            current[j] = '\0';

            if (currLen > maxLen)
            {
                maxLen = currLen;

                int k;
                for(k = 0; current[k] != '\0'; k++)
                    longest[k] = current[k];

                longest[k] = '\0';
            }

            j = 0;
            currLen = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }

        i++;
    }

    printf("Longest word = %s", longest);

    return 0;
}
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, count1 = 0, count2 = 0, flag = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while (str1[count1] != '\0')
        count1++;

    while (str2[count2] != '\0')
        count2++;

    if (count1 != count2)
    {
        flag = 0;
    }
    else
    {
        for (i = 0; i < count1; i++)
        {
            int found = 0;

            for (j = 0; j < count2; j++)
            {
                if (str1[i] == str2[j])
                {
                    str2[j] = '*';
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("Strings are Anagrams.");
    else
        printf("Strings are not Anagrams.");

    return 0;
}
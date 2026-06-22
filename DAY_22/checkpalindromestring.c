#include <stdio.h>

int main()
{
    char str[100], rev[100];
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    for (i = 0; i < length; i++)
    {
        rev[i] = str[length - 1 - i];
    }

    rev[i] = '\0';

    for (i = 0; i < length; i++)
    {
        if (str[i] != rev[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}
#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0')
    {
        length++;
    }

    if (str[length - 1] == '\n')
        length--;

    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    str[length] = '\0';

    printf("Reversed string = %s", str);

    return 0;
}
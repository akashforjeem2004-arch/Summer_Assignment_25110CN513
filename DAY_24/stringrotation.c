#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2))
        printf("String is a rotation.");
    else
        printf("String is not a rotation.");

    return 0;
}
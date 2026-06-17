#include <stdio.h>

int main()
{
    int a[50], b[50], c[100];
    int n1, n2, size = 0, i, j, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n1; i++)
        c[size++] = a[i];

    for(i = 0; i < n2; i++)
    {
        found = 0;

        for(j = 0; j < size; j++)
        {
            if(b[i] == c[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
            c[size++] = b[i];
    }

    printf("Union array:\n");
    for(i = 0; i < size; i++)
        printf("%d ", c[i]);

    return 0;
}
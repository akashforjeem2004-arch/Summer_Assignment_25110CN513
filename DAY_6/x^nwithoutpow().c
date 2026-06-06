#include <stdio.h>

int main()
{
    int x, n, i, result = 1;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        result = result * x;
    }

    printf("Answer = %d\n", result);

    return 0;
}
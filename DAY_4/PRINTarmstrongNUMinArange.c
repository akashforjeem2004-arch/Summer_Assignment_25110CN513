#include <stdio.h>

int main()
{
    int start, end, num, original, digit, sum;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Armstrong Numbers are:\n");

    for(num = start; num <= end; num++)
    {
        original = num;
        sum = 0;

        while(original > 0)
        {
            digit = original % 10;
            sum = sum + (digit * digit * digit);
            original = original / 10;
        }

        if(sum == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}
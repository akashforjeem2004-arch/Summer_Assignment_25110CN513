#include <stdio.h>

int main()
{
    int num, binary = 0, place = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        remainder = num % 2;
        binary = binary + (remainder * place);
        place = place * 10;
        num = num / 2;
    }

    printf("Binary equivalent = %d\n", binary);

    return 0;
}
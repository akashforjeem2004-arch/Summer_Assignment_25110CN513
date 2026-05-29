#include<stdio.h>
int main()
{
    int n;
    while(1){
        int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; ++i)
    {
        sum += i; 
    }

    printf("Sum of the first %d natural numbers is: %d\n", n, sum);
    }
    return 0;
}
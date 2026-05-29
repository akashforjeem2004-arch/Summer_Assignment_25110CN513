#include<stdio.h>
int main()
{
    printf("Enter a number to count its digits: ");
    int n;
    scanf("%d",&n);
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("Number of digits in the given number is %d\n",count);
    return 0;
}
#include<stdio.h>

float add(float a,float b)
{
    return a+b;
}

float sub(float a,float b)
{
    return a-b;
}

float mul(float a,float b)
{
    return a*b;
}

float divide(float a,float b)
{
    return a/b;
}

int main()
{
    int choice;
    float a,b;

    do
    {
        printf("\n1.Add");
        printf("\n2.Subtract");
        printf("\n3.Multiply");
        printf("\n4.Divide");
        printf("\n5.Exit");

        printf("\nEnter choice : ");
        scanf("%d",&choice);

        if(choice==5)
            break;

        printf("Enter two numbers : ");
        scanf("%f%f",&a,&b);

        switch(choice)
        {
            case 1:
                printf("Answer = %.2f",add(a,b));
                break;

            case 2:
                printf("Answer = %.2f",sub(a,b));
                break;

            case 3:
                printf("Answer = %.2f",mul(a,b));
                break;

            case 4:
                if(b!=0)
                    printf("Answer = %.2f",divide(a,b));
                else
                    printf("Division by zero not possible");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(1);

    return 0;
}
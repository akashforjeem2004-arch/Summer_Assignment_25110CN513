#include<stdio.h>

int main()
{
    int arr[100],n=0,i,pos,value,key,choice;

    do
    {
        printf("\n1.Insert");
        printf("\n2.Delete");
        printf("\n3.Search");
        printf("\n4.Display");
        printf("\n5.Exit");

        printf("\nChoice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Position : ");
                scanf("%d",&pos);

                printf("Value : ");
                scanf("%d",&value);

                for(i=n;i>=pos;i--)
                    arr[i]=arr[i-1];

                arr[pos-1]=value;
                n++;

                break;

            case 2:

                printf("Position : ");
                scanf("%d",&pos);

                for(i=pos-1;i<n-1;i++)
                    arr[i]=arr[i+1];

                n--;

                break;

            case 3:

                printf("Enter element : ");
                scanf("%d",&key);

                for(i=0;i<n;i++)
                {
                    if(arr[i]==key)
                    {
                        printf("Found at %d",i+1);
                        break;
                    }
                }

                if(i==n)
                    printf("Not Found");

                break;

            case 4:

                printf("\nArray : ");

                for(i=0;i<n;i++)
                    printf("%d ",arr[i]);

                break;
        }

    }while(choice!=5);

    return 0;
}
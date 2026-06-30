#include<stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[100];
    int n=0,i,choice;

    do
    {
        printf("\n1.Add Item");
        printf("\n2.Display Items");
        printf("\n3.Exit");

        printf("\nChoice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("ID : ");
                scanf("%d",&item[n].id);

                printf("Name : ");
                scanf("%s",item[n].name);

                printf("Quantity : ");
                scanf("%d",&item[n].quantity);

                printf("Price : ");
                scanf("%f",&item[n].price);

                n++;

                break;

            case 2:

                printf("\nID\tName\tQty\tPrice\n");

                for(i=0;i<n;i++)
                {
                    printf("%d\t%s\t%d\t%.2f\n",
                    item[i].id,
                    item[i].name,
                    item[i].quantity,
                    item[i].price);
                }

                break;

        }

    }while(choice!=3);

    return 0;
}
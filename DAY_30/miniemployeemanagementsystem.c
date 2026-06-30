#include<stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n=0,i,choice;

    do
    {
        printf("\n1.Add Employee");
        printf("\n2.Display Employees");
        printf("\n3.Exit");

        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("ID : ");
                scanf("%d",&e[n].id);

                printf("Name : ");
                scanf("%s",e[n].name);

                printf("Salary : ");
                scanf("%f",&e[n].salary);

                n++;

                break;

            case 2:

                for(i=0;i<n;i++)
                    printf("%d %s %.2f\n",
                    e[i].id,
                    e[i].name,
                    e[i].salary);

                break;
        }

    }while(choice!=3);

    return 0;
}
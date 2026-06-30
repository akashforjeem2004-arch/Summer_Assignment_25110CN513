#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n=0,i,roll,choice;

    do
    {
        printf("\n1.Add");
        printf("\n2.Search");
        printf("\n3.Display");
        printf("\n4.Exit");

        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Roll : ");
                scanf("%d",&s[n].roll);

                printf("Name : ");
                scanf("%s",s[n].name);

                printf("Marks : ");
                scanf("%f",&s[n].marks);

                n++;

                break;

            case 2:

                printf("Enter Roll : ");
                scanf("%d",&roll);

                for(i=0;i<n;i++)
                {
                    if(s[i].roll==roll)
                    {
                        printf("%d %s %.2f",
                        s[i].roll,
                        s[i].name,
                        s[i].marks);
                        break;
                    }
                }

                if(i==n)
                    printf("Student Not Found");

                break;

            case 3:

                for(i=0;i<n;i++)
                {
                    printf("%d %s %.2f\n",
                    s[i].roll,
                    s[i].name,
                    s[i].marks);
                }

                break;
        }

    }while(choice!=4);

    return 0;
}
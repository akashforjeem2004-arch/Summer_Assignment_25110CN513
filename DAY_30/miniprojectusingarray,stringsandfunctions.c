#include<stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

struct Student s[100];
int n=0;

void addStudent();
void displayStudent();
void searchStudent();

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");

        printf("\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(choice!=4);

    return 0;
}

void addStudent()
{
    printf("\nEnter Roll Number : ");
    scanf("%d",&s[n].roll);

    printf("Enter Name : ");
    scanf("%s",s[n].name);

    printf("Enter Marks : ");
    scanf("%f",&s[n].marks);

    n++;

    printf("\nStudent Added Successfully!\n");
}

void displayStudent()
{
    int i;

    if(n==0)
    {
        printf("\nNo Record Found!\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%.2f\n",
        s[i].roll,
        s[i].name,
        s[i].marks);
    }
}

void searchStudent()
{
    int roll,i;

    printf("\nEnter Roll Number : ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            printf("\nStudent Found\n");
            printf("Roll : %d\n",s[i].roll);
            printf("Name : %s\n",s[i].name);
            printf("Marks : %.2f\n",s[i].marks);
            return;
        }
    }

    printf("Student Not Found\n");
}
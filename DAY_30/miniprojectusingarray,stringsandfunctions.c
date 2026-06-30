#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student
{
    int roll;
    char name[50];
    int age;
    float marks;
};

struct Student s[MAX];
int n = 0;

/* Function Prototypes */

void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

/* Main */

int main()
{
    int choice;

    do
    {
        printf("\n======================================");
        printf("\n   STUDENT MANAGEMENT SYSTEM");
        printf("\n======================================");

        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");

        printf("\n\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!");
        }

    }while(choice!=6);

    return 0;
}

/* Add Student */

void addStudent()
{
    printf("\nEnter Roll Number : ");
    scanf("%d",&s[n].roll);

    printf("Enter Name : ");
    scanf(" %[^\n]",s[n].name);

    printf("Enter Age : ");
    scanf("%d",&s[n].age);

    printf("Enter Marks : ");
    scanf("%f",&s[n].marks);

    n++;

    printf("\nStudent Added Successfully!\n");
}

/* Display */

void displayStudents()
{
    int i;

    if(n==0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n------------------------------------------------------------");
    printf("\nRoll\tName\t\tAge\tMarks");
    printf("\n------------------------------------------------------------");

    for(i=0;i<n;i++)
    {
        printf("\n%d\t%-15s%d\t%.2f",
               s[i].roll,
               s[i].name,
               s[i].age,
               s[i].marks);
    }

    printf("\n");
}

/* Search */

void searchStudent()
{
    int roll,i,found=0;

    printf("\nEnter Roll Number : ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            printf("\nStudent Found");

            printf("\nRoll : %d",s[i].roll);
            printf("\nName : %s",s[i].name);
            printf("\nAge : %d",s[i].age);
            printf("\nMarks : %.2f",s[i].marks);

            found=1;
            break;
        }
    }

    if(found==0)
        printf("\nStudent Not Found!");
}

/* Update */

void updateStudent()
{
    int roll,i,found=0;

    printf("\nEnter Roll Number : ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            printf("\nEnter New Name : ");
            scanf(" %[^\n]",s[i].name);

            printf("Enter New Age : ");
            scanf("%d",&s[i].age);

            printf("Enter New Marks : ");
            scanf("%f",&s[i].marks);

            printf("\nRecord Updated Successfully!");

            found=1;
            break;
        }
    }

    if(found==0)
        printf("\nStudent Not Found!");
}

/* Delete */

void deleteStudent()
{
    int roll,i,j,found=0;

    printf("\nEnter Roll Number : ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            for(j=i;j<n-1;j++)
            {
                s[j]=s[j+1];
            }

            n--;

            printf("\nRecord Deleted Successfully!");

            found=1;
            break;
        }
    }

    if(found==0)
        printf("\nStudent Not Found!");
}
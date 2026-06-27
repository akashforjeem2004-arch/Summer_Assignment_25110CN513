#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main()
{
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        emp[i].hra = emp[i].basicSalary * 0.20;
        emp[i].da = emp[i].basicSalary * 0.10;
        emp[i].grossSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;
    }

    printf("\n----- Salary Report -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nID            : %d", emp[i].id);
        printf("\nName          : %s", emp[i].name);
        printf("\nBasic Salary  : %.2f", emp[i].basicSalary);
        printf("\nHRA           : %.2f", emp[i].hra);
        printf("\nDA            : %.2f", emp[i].da);
        printf("\nGross Salary  : %.2f\n", emp[i].grossSalary);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int choice;
    char book[50];
    int id;

    printf("===== Library Management System =====\n");
    printf("1. Add Book\n");
    printf("2. Issue Book\n");
    printf("3. Return Book\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &id);

            printf("Enter Book Name: ");
            scanf(" %[^\n]", book);

            printf("\nBook Added Successfully!");
            break;

        case 2:
            printf("Enter Book ID to Issue: ");
            scanf("%d", &id);

            printf("Book Issued Successfully!");
            break;

        case 3:
            printf("Enter Book ID to Return: ");
            scanf("%d", &id);

            printf("Book Returned Successfully!");
            break;

        case 4:
            printf("Thank You!");
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}
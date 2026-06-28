#include <stdio.h>

int main()
{
    int choice;
    char name[50], phone[15];

    printf("===== Contact Management System =====\n");
    printf("1. Add Contact\n");
    printf("2. View Contact\n");
    printf("3. Exit\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter Name: ");
            scanf(" %[^\n]", name);

            printf("Enter Phone Number: ");
            scanf("%s", phone);

            printf("Contact Saved Successfully!");
            break;

        case 2:
            printf("\nName : %s", name);
            printf("\nPhone: %s", phone);
            break;

        case 3:
            printf("Thank You!");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
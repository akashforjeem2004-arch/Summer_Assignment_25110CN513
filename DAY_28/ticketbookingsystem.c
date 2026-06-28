#include <stdio.h>

int main()
{
    int choice, seats = 50, book;

    printf("===== Ticket Booking System =====\n");
    printf("1. Book Ticket\n");
    printf("2. Check Available Seats\n");
    printf("3. Exit\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter Number of Tickets: ");
            scanf("%d", &book);

            if(book <= seats)
            {
                seats -= book;
                printf("Booking Successful!\n");
                printf("Remaining Seats = %d", seats);
            }
            else
            {
                printf("Seats Not Available");
            }
            break;

        case 2:
            printf("Available Seats = %d", seats);
            break;

        case 3:
            printf("Thank You!");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
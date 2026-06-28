#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000, amount;

    printf("===== Bank Account System =====\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            balance += amount;

            printf("Updated Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);

            if(amount <= balance)
            {
                balance -= amount;
                printf("Updated Balance = %.2f", balance);
            }
            else
            {
                printf("Insufficient Balance");
            }
            break;

        case 3:
            printf("Current Balance = %.2f", balance);
            break;

        case 4:
            printf("Thank You!");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
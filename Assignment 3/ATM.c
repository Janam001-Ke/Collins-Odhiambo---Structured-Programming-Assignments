#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{
    int pin, attempts = 0;
    int choice;
    float balance = 10000.00;
    float amount;

    // PIN verification
    while (attempts < 3)
    {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        if (pin == 1234)
        {
            printf("\nWelcome to ATM Banking!\n");
            break;
        }
        else
        {
            attempts++;
            printf("Incorrect PIN. Try again.\n");
        }
    }

    if (attempts == 3)
    {
        printf("\nYour account is blocked. Too many attempts.\n");
        return 0;
    }

    // ATM menu
    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("\nChoose an option: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Your balance is Ksh %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if (amount > 0)
                {
                    balance = balance + amount;
                    printf("Deposit successful!\n");
                    printf("New balance: Ksh %.2f\n", balance);
                }
                else
                {
                    printf("Invalid amount.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount.\n");
                }
                else if (amount <= balance)
                {
                    balance = balance - amount;
                    printf("Please collect your money.\n");
                    printf("Remaining balance: Ksh %.2f\n", balance);
                }
                else
                {
                    printf("Insufficient balance!\n");
                }
                break;

            case 4:
                printf("Thank you for using our ATM!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}



#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char pin[5];
    char correctPin[] = "5678";
    int attempts = 0;
    int i;
    char key;

    printf("===== COLLOH DOOR LOCK SYSTEM =====\n");

    while (attempts < 3)
    {
        i = 0;

        printf("\nEnter your 4 Digit PIN: ");

        while (i < 4)
        {
            key = getch();

            /* First digit cannot be zero */
            if (i == 0 && key == '0')
            {
                printf("\nERROR: First digit cannot be zero.");
                printf("\nEnter PIN again: ");
                i = 0;
                continue;
            }

            /* Accept only digits */
            if (key >= '0' && key <= '9')
            {
                pin[i] = key;
                printf("*");
                i++;
            }
        }

        /* End the string */
        pin[4] = '\0';

        printf("\n");

        /* Check PIN */
        if (strcmp(pin, correctPin) == 0)
        {
            printf("ACCESS GRANTED!\n");
            printf("DOOR UNLOCKED!\n");
            return 0;
        }
        else
        {
            attempts++;
            printf("WRONG PIN!\n");
            printf("Attempts remaining: %d\n", 3 - attempts);
        }
    }

    printf("\nACCESS DENIED!\n");
    printf("DOOR REMAINS LOCKED!\n");

    return 0;
}



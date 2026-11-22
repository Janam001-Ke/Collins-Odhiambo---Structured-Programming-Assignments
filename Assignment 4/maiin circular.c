#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>

#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];
int count = 0;
int next = 0;

// Function to insert a new sample
void insertSample(int value)
{
    buffer[next] = value;

    next = (next + 1) % BUFFER_SIZE;

    if(count < BUFFER_SIZE)
    {
        count++;
    }
}

// Function to print samples in chronological order
void printSamples()
{
    int i;
    int start;

    printf("\nStored sensor readings (oldest to newest): ");

    start = (next - count + BUFFER_SIZE) % BUFFER_SIZE;

    for(i = 0; i < count; i++)
    {
        printf("%d ", buffer[(start + i) % BUFFER_SIZE]);
    }

    printf("\n");
}

int main()
{
    int value, choice;

    do
    {
        printf("\n1. Insert sensor reading");
        printf("\n2. Display stored readings");
        printf("\n3. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter sensor value: ");
                scanf("%d", &value);

                insertSample(value);
                break;

            case 2:
                printSamples();
                break;

            case 3:
                printf("Exiting data logger...");
                break;

            default:
                printf("Invalid choice!");
        }

    } while(choice != 3);

    return 0;
}

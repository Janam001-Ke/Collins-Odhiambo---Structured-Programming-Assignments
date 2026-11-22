#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100], n, i, j, count;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }

    printf("The unique elements found in the array are: ");

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}

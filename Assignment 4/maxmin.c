#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a[100], n, i, max, min;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

    return 0;
}

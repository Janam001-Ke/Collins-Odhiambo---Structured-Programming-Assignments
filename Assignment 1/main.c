#include <stdio.h>
#include <stdlib.h>

int main()
{
     float radius, area;
    const float PI = 3.14159;
    //Prompt the user for radius input
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    //Calculate area
    area=PI * radius * radius;
    printf("The area of the circle with radius %.2f is:%.2f\n\n" ,radius , area);



    return 0;
}

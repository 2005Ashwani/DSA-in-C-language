/*PROGRAM TO CALCULATE THE AVERAGE OF AN INTEGER OF N ELEMENTS*/

#include <stdio.h>
int main()
{
    int a[20], size, sum = 0, average;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size>20)
    {
        printf("Error\n");
    }
    

    for (int i = 0; i < size; i++)
    {
        printf("Enter the array[%d] : ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
        average = sum / 2;
    }
    printf("The average of element in array is %d", average);

    return 0;
}
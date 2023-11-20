/*CALCULATE THE SUM OF AN INTEGER OF N ELEMENT*/
#include <stdio.h>
int main()
{
    int a[20], size, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; ++i)
    {
        printf("Enter the array[%d]: ", i);
        scanf("%d", &a[i]);
    }

    if (size > 20)
    {
        printf("Error");
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            sum = sum + a[i];
        }
    }
    printf("%d", sum);
    return 0;
}
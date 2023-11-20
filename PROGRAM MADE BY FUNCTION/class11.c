/*SHORTING OPERATION */
//DECENDING ORDER USING BOOBLE SHORT
// lect--14

#include <stdio.h>
#include <stdlib.h>
void shorting();

int a[20], size, temp;

void main()
{
    printf("Enter how many element you wants to insert: ");
    scanf("%d", &size);

    if (size > 20)
    {
        printf("Error\n");
        exit(0);
    }

    for (int i = 0; i < size; i++)
    {
        printf("The element at a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    shorting();
}

void shorting()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("The array after shorting are as follows:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("\t%d", a[i]);
    }
}
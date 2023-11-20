/*PROGRAM TO TRAVERSE THE ELEMENT IN ARRAY */
//lect--10
#include <stdio.h>
#include <stdlib.h>
void traverse();
int size, a[20];

void main()
{
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size > 20)
    {
        printf("Error");
        exit(0);
    }
    else
    {
        traverse();
    }
}

void traverse()
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the Elements in a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("Your Elements after traversing as follows:-");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}
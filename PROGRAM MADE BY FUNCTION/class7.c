/*INSERTION OF ELEMENT IN AN ARRAY*/
//lect--11
#include <stdio.h>
#include <stdlib.h>
void insertion();
int size, a[20], item, location;

void main()
{
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size > 20)
    {
        printf("Error");
        exit(0);
    }
    printf("Enter the Elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the item to be inserted:\n");
    scanf("%d", &item);

    printf("Enter the location at which it can be inserted:\n");
    scanf("%d", &location);
    insertion();
}
void insertion()
{
    int i = size;
    while (i > location)
    {
        a[i] = a[i + 1];
        i--;
    }

    a[location] = item;

    printf("Your Elements after insertion they are as follows:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}
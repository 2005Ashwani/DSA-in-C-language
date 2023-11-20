/* PROGERAM FOR DELETION */
//lect--12
#include <stdio.h>
#include <stdlib.h>

void deletion();
int a[20], size, location;
void main()
{
    printf("Enter the size of the array:");
    scanf("%d", &size);
    if (size > 20)
    {
        printf("Error");
        exit(0);
    }

    for (int i = 0; i < size; i++)
    {
        printf("Enter the element a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the location which you want to insert: ");
    scanf("%d", &location);

    deletion();
}

void deletion()
{
    if (a[0] == 0)
    {
        printf("NO element can be inserted:\n");
    }
    else
    {
        int i = size;
        while (i > location)
        {
            a[location] = a[location + 1];
            location++;
        }
    }
    printf("The element after insertion are as follows:-\n");
    for (int i = 0; i < (size - 1); i++)
    {
        printf("%d\t", a[i]);
    }
}

/* PROGERAM FOR DELETION */
//lect--13
#include <stdio.h>
#include <stdlib.h>

void searching();
int a[20], size, item, loc, i;
void main()
{
    printf("Enter the size of the array: ");
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

    printf("Enter the item which you want to search: ");
    scanf("%d", &item);
    searching();
}

void searching()
{

    for (int i = 0; i < size; i++)
    {
        if (item == a[i])
        {
            loc = i;
            break;
        }
    }
    if (i == size)
    {
        printf("The element is not present:");
    }
    else
    {
        printf("The element is present at the location %d\n", loc);
    }
}
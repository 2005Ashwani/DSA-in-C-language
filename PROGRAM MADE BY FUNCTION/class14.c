/* PROGRAM TO REVERSE THE ELEMENT OF ARRAY */
// LEC-17

#include <stdio.h>
#include <stdlib.h>

void reverse();
int size, a[20];
void main()
{
    printf("Enter the size the array: ");
    scanf("%d", &size);
    if (size > 20)
    {
        printf("Error");
        exit(0);

        void reverse();
    }
    void reverse();
    {
    }
    for (int i = 0; i < size; i++)
    {
        printf("Enter the array a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int j = 0;
    for (int i = size; i > 0; i--)
    {
        printf("\n The element after Reversing is a[%d] = %d", j, a[i - 1]);
        +j++;
    }
}
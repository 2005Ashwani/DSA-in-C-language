// Program for copy of element from one array to another array
//  lect-18

#include <stdio.h>
void array1();
void same();
int a[20], b[20], n_1, i;

void main()
{
    array1();
    same();
}

// FOR array-1
void array1()
{

    printf("Enter the size of array-1: ");
    scanf("%d", &n_1);
    if (n_1 > 20)
    {
        printf("Error");
    }
    // TO GET INPUT
    for (i = 0; i < n_1; i++)
    {
        printf("\n Enter elements of the A[%d] = ", i);
        scanf("%d", &a[i]);
    }
    // TO PRINT THE ELEMENTS
    for (i = 0; i < n_1; i++)
    {
        printf("\nThe elements of a[%d] = %d", i, a[i]);
    }
}
// for copy of array to another array
void same()
{
    int j = 0;
    for (i = 0; i < n_1; i++)
    {
        b[i] = a[j];
        j++;
    }
    // TO PRINT THE VALUE OF ARRAY-A
    for (i = 0; i < n_1; i++)
    {

        printf("\n\n\tThe array after coping is a[%d] = %d", i, a[i]);
    }
    // TO PRINT THE VALUE OF ARRAY-b
    for (i = 0; i < n_1; i++)
    {

        printf("\n\nThe array after coping is b[%d] = %d", i, b[i]);
    }
}
// JOINING TO ARRAY
//lec-15
#include <stdio.h>
#include <stdlib.h>
void array1();
void array2();
void array3();

int a[20], b[20], c[40], size_1, size_2, j, i;
void main()
{
    array1();
    array2();
    array3();
}

// FUNCTION DEFINATION FOR ARRAY-1
void array1()
{
    printf("Enter the size of array_1: ");
    scanf("%d", &size_1);
    if (size_1 > 20)
    {
        printf("Error");
    }

    // TO GET INPUT
    for (i = 0; i < size_1; i++)
    {
        printf("Enter the a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    printf("\n");

    // TO PRINT THE ELEMENTS
    for (i = 0; i < size_1; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
// FUNCTION DEFINATION FOR ARRAY-2
void array2()
{
    printf("\nEnter the size of array_1: ");
    scanf("%d", &size_2);
    if (size_2 > 20)
    {
        printf("Error");
    }

    //  TO GET INPUT FROM THE USER
    for (int i = 0; i < size_2; i++)
    {
        printf("\n Enter the a[%d]= ", i);
        scanf("%d", &b[i]);
    }
    printf("\n");
    // TO PRINT THE ELEMENTS
    for (int i = 0; i < size_1; i++)
    {
        printf("%d\t", b[i]);
    }
    printf("\n");
}
void array3()
{
    // TO COPY ELEMENT A IN C
    j = 0;
    for (i = 0; i < size_1; i++)
    {
        c[i] = a[j];
        j++;
    }
    j=0;
    // TO COPY ELEMENT B IN C
    for (i = size_1; i < (size_1 + size_2); i++)
    {
        c[i] = b[j];
        j++;
    }

    // TO PRINT THE ELEMENT OF ARRAY-C
    for (i = 0; i < (size_1 + size_2); i++)
    {
        printf("\t%d", c[i]);
    }
}